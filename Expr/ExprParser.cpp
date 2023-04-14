
// Generated from Expr.g4 by ANTLR 4.11.1


#include "ExprListener.h"

#include "ExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
  assert(exprParserStaticData == nullptr);
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "prog", "expr", "assn", "num"
    },
    std::vector<std::string>{
      "", "';'", "'('", "')'", "'='", "", "", "", "", "", "'+'", "'-'", 
      "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "NEWLINE", "INT", "REAL", "ID", "WS", "ADD", "SUBTRACT", 
      "MULTIPLY", "DIVIDE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,13,56,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,3,0,11,8,0,1,0,3,0,
  	14,8,0,1,0,1,0,3,0,18,8,0,1,0,3,0,21,8,0,4,0,23,8,0,11,0,12,0,24,1,1,
  	1,1,3,1,29,8,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,37,8,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,5,1,45,8,1,10,1,12,1,48,9,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,0,1,2,4,0,
  	2,4,6,0,3,1,0,10,11,1,0,12,13,1,0,6,7,62,0,22,1,0,0,0,2,36,1,0,0,0,4,
  	49,1,0,0,0,6,53,1,0,0,0,8,10,3,4,2,0,9,11,5,1,0,0,10,9,1,0,0,0,10,11,
  	1,0,0,0,11,13,1,0,0,0,12,14,5,5,0,0,13,12,1,0,0,0,13,14,1,0,0,0,14,23,
  	1,0,0,0,15,17,3,2,1,0,16,18,5,1,0,0,17,16,1,0,0,0,17,18,1,0,0,0,18,20,
  	1,0,0,0,19,21,5,5,0,0,20,19,1,0,0,0,20,21,1,0,0,0,21,23,1,0,0,0,22,8,
  	1,0,0,0,22,15,1,0,0,0,23,24,1,0,0,0,24,22,1,0,0,0,24,25,1,0,0,0,25,1,
  	1,0,0,0,26,28,6,1,-1,0,27,29,7,0,0,0,28,27,1,0,0,0,28,29,1,0,0,0,29,30,
  	1,0,0,0,30,37,3,6,3,0,31,37,5,8,0,0,32,33,5,2,0,0,33,34,3,2,1,0,34,35,
  	5,3,0,0,35,37,1,0,0,0,36,26,1,0,0,0,36,31,1,0,0,0,36,32,1,0,0,0,37,46,
  	1,0,0,0,38,39,10,5,0,0,39,40,7,1,0,0,40,45,3,2,1,6,41,42,10,4,0,0,42,
  	43,7,0,0,0,43,45,3,2,1,5,44,38,1,0,0,0,44,41,1,0,0,0,45,48,1,0,0,0,46,
  	44,1,0,0,0,46,47,1,0,0,0,47,3,1,0,0,0,48,46,1,0,0,0,49,50,5,8,0,0,50,
  	51,5,4,0,0,51,52,3,2,1,0,52,5,1,0,0,0,53,54,7,2,0,0,54,7,1,0,0,0,10,10,
  	13,17,20,22,24,28,36,44,46
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::AssnContext *> ExprParser::ProgContext::assn() {
  return getRuleContexts<ExprParser::AssnContext>();
}

ExprParser::AssnContext* ExprParser::ProgContext::assn(size_t i) {
  return getRuleContext<ExprParser::AssnContext>(i);
}

std::vector<ExprParser::ExprContext *> ExprParser::ProgContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ProgContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::ProgContext::NEWLINE() {
  return getTokens(ExprParser::NEWLINE);
}

tree::TerminalNode* ExprParser::ProgContext::NEWLINE(size_t i) {
  return getToken(ExprParser::NEWLINE, i);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}

void ExprParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void ExprParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(8);
        assn();
        setState(10);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExprParser::T__0) {
          setState(9);
          match(ExprParser::T__0);
        }
        setState(13);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExprParser::NEWLINE) {
          setState(12);
          match(ExprParser::NEWLINE);
        }
        break;
      }

      case 2: {
        setState(15);
        expr(0);
        setState(17);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExprParser::T__0) {
          setState(16);
          match(ExprParser::T__0);
        }
        setState(20);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExprParser::NEWLINE) {
          setState(19);
          match(ExprParser::NEWLINE);
        }
        break;
      }

      default:
        break;
      }
      setState(24); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3524) != 0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::NumContext* ExprParser::ExprContext::num() {
  return getRuleContext<ExprParser::NumContext>(0);
}

tree::TerminalNode* ExprParser::ExprContext::ADD() {
  return getToken(ExprParser::ADD, 0);
}

tree::TerminalNode* ExprParser::ExprContext::SUBTRACT() {
  return getToken(ExprParser::SUBTRACT, 0);
}

tree::TerminalNode* ExprParser::ExprContext::ID() {
  return getToken(ExprParser::ID, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::ExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::ExprContext::MULTIPLY() {
  return getToken(ExprParser::MULTIPLY, 0);
}

tree::TerminalNode* ExprParser::ExprContext::DIVIDE() {
  return getToken(ExprParser::DIVIDE, 0);
}


size_t ExprParser::ExprContext::getRuleIndex() const {
  return ExprParser::RuleExpr;
}

void ExprParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void ExprParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


ExprParser::ExprContext* ExprParser::expr() {
   return expr(0);
}

ExprParser::ExprContext* ExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExprParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::INT:
      case ExprParser::REAL:
      case ExprParser::ADD:
      case ExprParser::SUBTRACT: {
        setState(28);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExprParser::ADD

        || _la == ExprParser::SUBTRACT) {
          setState(27);
          _la = _input->LA(1);
          if (!(_la == ExprParser::ADD

          || _la == ExprParser::SUBTRACT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        setState(30);
        num();
        break;
      }

      case ExprParser::ID: {
        setState(31);
        match(ExprParser::ID);
        break;
      }

      case ExprParser::T__1: {
        setState(32);
        match(ExprParser::T__1);
        setState(33);
        expr(0);
        setState(34);
        match(ExprParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(46);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(44);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(38);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(39);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ExprParser::MULTIPLY

          || _la == ExprParser::DIVIDE)) {
            antlrcpp::downCast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(40);
          antlrcpp::downCast<ExprContext *>(_localctx)->right = expr(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          _localctx->left = previousContext;
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(41);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(42);
          antlrcpp::downCast<ExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ExprParser::ADD

          || _la == ExprParser::SUBTRACT)) {
            antlrcpp::downCast<ExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(43);
          antlrcpp::downCast<ExprContext *>(_localctx)->right = expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(48);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssnContext ------------------------------------------------------------------

ExprParser::AssnContext::AssnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::AssnContext::ID() {
  return getToken(ExprParser::ID, 0);
}

ExprParser::ExprContext* ExprParser::AssnContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::AssnContext::getRuleIndex() const {
  return ExprParser::RuleAssn;
}

void ExprParser::AssnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssn(this);
}

void ExprParser::AssnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssn(this);
}

ExprParser::AssnContext* ExprParser::assn() {
  AssnContext *_localctx = _tracker.createInstance<AssnContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleAssn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(ExprParser::ID);
    setState(50);
    match(ExprParser::T__3);
    setState(51);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumContext ------------------------------------------------------------------

ExprParser::NumContext::NumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::NumContext::INT() {
  return getToken(ExprParser::INT, 0);
}

tree::TerminalNode* ExprParser::NumContext::REAL() {
  return getToken(ExprParser::REAL, 0);
}


size_t ExprParser::NumContext::getRuleIndex() const {
  return ExprParser::RuleNum;
}

void ExprParser::NumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNum(this);
}

void ExprParser::NumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNum(this);
}

ExprParser::NumContext* ExprParser::num() {
  NumContext *_localctx = _tracker.createInstance<NumContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleNum);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    _la = _input->LA(1);
    if (!(_la == ExprParser::INT

    || _la == ExprParser::REAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void ExprParser::initialize() {
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
}
