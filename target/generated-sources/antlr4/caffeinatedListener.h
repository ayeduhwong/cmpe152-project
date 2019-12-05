
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from caffeinated.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "caffeinatedParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by caffeinatedParser.
 */
class  caffeinatedListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(caffeinatedParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(caffeinatedParser::ProgramContext *ctx) = 0;

  virtual void enterHeader(caffeinatedParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(caffeinatedParser::HeaderContext *ctx) = 0;

  virtual void enterMainBlock(caffeinatedParser::MainBlockContext *ctx) = 0;
  virtual void exitMainBlock(caffeinatedParser::MainBlockContext *ctx) = 0;

  virtual void enterDeclarations(caffeinatedParser::DeclarationsContext *ctx) = 0;
  virtual void exitDeclarations(caffeinatedParser::DeclarationsContext *ctx) = 0;

  virtual void enterDeclList(caffeinatedParser::DeclListContext *ctx) = 0;
  virtual void exitDeclList(caffeinatedParser::DeclListContext *ctx) = 0;

  virtual void enterDecl(caffeinatedParser::DeclContext *ctx) = 0;
  virtual void exitDecl(caffeinatedParser::DeclContext *ctx) = 0;

  virtual void enterVarList(caffeinatedParser::VarListContext *ctx) = 0;
  virtual void exitVarList(caffeinatedParser::VarListContext *ctx) = 0;

  virtual void enterVarId(caffeinatedParser::VarIdContext *ctx) = 0;
  virtual void exitVarId(caffeinatedParser::VarIdContext *ctx) = 0;

  virtual void enterTypeId(caffeinatedParser::TypeIdContext *ctx) = 0;
  virtual void exitTypeId(caffeinatedParser::TypeIdContext *ctx) = 0;

  virtual void enterCompoundStmt(caffeinatedParser::CompoundStmtContext *ctx) = 0;
  virtual void exitCompoundStmt(caffeinatedParser::CompoundStmtContext *ctx) = 0;

  virtual void enterStmt(caffeinatedParser::StmtContext *ctx) = 0;
  virtual void exitStmt(caffeinatedParser::StmtContext *ctx) = 0;

  virtual void enterStmtList(caffeinatedParser::StmtListContext *ctx) = 0;
  virtual void exitStmtList(caffeinatedParser::StmtListContext *ctx) = 0;

  virtual void enterAssignmentStmt(caffeinatedParser::AssignmentStmtContext *ctx) = 0;
  virtual void exitAssignmentStmt(caffeinatedParser::AssignmentStmtContext *ctx) = 0;

  virtual void enterVariable(caffeinatedParser::VariableContext *ctx) = 0;
  virtual void exitVariable(caffeinatedParser::VariableContext *ctx) = 0;

  virtual void enterVariableExpr(caffeinatedParser::VariableExprContext *ctx) = 0;
  virtual void exitVariableExpr(caffeinatedParser::VariableExprContext *ctx) = 0;

  virtual void enterAddSubExpr(caffeinatedParser::AddSubExprContext *ctx) = 0;
  virtual void exitAddSubExpr(caffeinatedParser::AddSubExprContext *ctx) = 0;

  virtual void enterRelOpExpr(caffeinatedParser::RelOpExprContext *ctx) = 0;
  virtual void exitRelOpExpr(caffeinatedParser::RelOpExprContext *ctx) = 0;

  virtual void enterNumberExpr(caffeinatedParser::NumberExprContext *ctx) = 0;
  virtual void exitNumberExpr(caffeinatedParser::NumberExprContext *ctx) = 0;

  virtual void enterBoolExpr(caffeinatedParser::BoolExprContext *ctx) = 0;
  virtual void exitBoolExpr(caffeinatedParser::BoolExprContext *ctx) = 0;

  virtual void enterMulDivExpr(caffeinatedParser::MulDivExprContext *ctx) = 0;
  virtual void exitMulDivExpr(caffeinatedParser::MulDivExprContext *ctx) = 0;

  virtual void enterIntegerConst(caffeinatedParser::IntegerConstContext *ctx) = 0;
  virtual void exitIntegerConst(caffeinatedParser::IntegerConstContext *ctx) = 0;

  virtual void enterBoolConst(caffeinatedParser::BoolConstContext *ctx) = 0;
  virtual void exitBoolConst(caffeinatedParser::BoolConstContext *ctx) = 0;

  virtual void enterMulDivOp(caffeinatedParser::MulDivOpContext *ctx) = 0;
  virtual void exitMulDivOp(caffeinatedParser::MulDivOpContext *ctx) = 0;

  virtual void enterAddSubOp(caffeinatedParser::AddSubOpContext *ctx) = 0;
  virtual void exitAddSubOp(caffeinatedParser::AddSubOpContext *ctx) = 0;

  virtual void enterRel_op(caffeinatedParser::Rel_opContext *ctx) = 0;
  virtual void exitRel_op(caffeinatedParser::Rel_opContext *ctx) = 0;

  virtual void enterIf_statement(caffeinatedParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(caffeinatedParser::If_statementContext *ctx) = 0;

  virtual void enterWhile_loop(caffeinatedParser::While_loopContext *ctx) = 0;
  virtual void exitWhile_loop(caffeinatedParser::While_loopContext *ctx) = 0;


};

