#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <map>
#include <stack>
#include "ExprBaseListener.h"
#include "ExprLexer.h"
#include "ExprParser.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

class EvalListener : public ExprBaseListener {
map<string, double> vars;
stack<double> evalStack;
vector<double> results;

public:
void pushResult(double result) {
  results.push_back(result);
}
double getResult(size_t index) const {
  if (index < results.size()) {
    return results[index];
  }
  return 0.0;
}

size_t getResultsSize() const {
  return results.size();
}
double getTopValue() const {
  if (!evalStack.empty()) {
    double result = evalStack.top();
    return result;
  }
  return 0.0;
}
void pop() {
  if (!evalStack.empty()) {
    evalStack.pop();
  }
}
virtual void exitAssn(ExprParser::AssnContext *ctx) {
  string var = ctx->ID()->getText();
  double value = evalStack.top();
  evalStack.pop();
  vars[var] = value;
}
virtual void exitNum(ExprParser::NumContext *ctx) {
  double value = stod(ctx->getText());
  evalStack.push(value);
}
virtual void exitExpr(ExprParser::ExprContext *ctx) {
  if (ctx->ID() != nullptr) {
    string var = ctx->getText();
    double value = vars[var];
    evalStack.push(value);
  } else if (ctx->op != nullptr) {
    double right = evalStack.top();
    evalStack.pop();
    double left = evalStack.top();
    evalStack.pop();
    double result;
    switch (ctx->op->getType()) {
      case ExprLexer::MULTIPLY:
        result = left * right;
        break;
      case ExprLexer::DIVIDE:
        result = left / right;
        break;
      case ExprLexer::ADD:
        result = left + right;
        break;
      case ExprLexer::SUBTRACT:
        result = left - right;
        break;
    }
    evalStack.push(result);
  }

  if (auto parent = dynamic_cast<ExprParser::ProgContext*>(ctx->parent)) {
    pushResult(getTopValue());
    pop();
  }
}

};

int main(int argc, const char* argv[]) {
if (argc != 2) {
cerr << "Usage: " << argv[0] << " input_file" << endl;
return 1;
}

ifstream inputStream(argv[1]);
ANTLRInputStream input(inputStream);
ExprLexer lexer(&input);
CommonTokenStream tokens(&lexer);
ExprParser parser(&tokens);

tree::ParseTree *tree = parser.prog();
EvalListener eval;
tree::ParseTreeWalker::DEFAULT.walk(&eval, tree);

for (size_t i = 0; i < eval.getResultsSize(); ++i) {
  cout << fixed << setprecision(1) << eval.getResult(i) << endl;
}

return 0;
}
