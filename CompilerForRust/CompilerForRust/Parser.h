#pragma once
#include <iostream>
#include "Lexer.h"
#include "Node.h"
#include "Ast.h"
#include "Log.h"

using namespace std;

class Parser
{
	Lexer* lex;
	AST* ast;
public:
	Parser(const string file_path);
	~Parser();

	void parse();
	//Node getAst();
	string eat(token_type type);
	bool tryEat(token_type type);

    unique_ptr<Node>Program();                      
    unique_ptr<Node>FunctionDefinitions();        
    unique_ptr<Node>Main();  
    unique_ptr<Node>FunctionDefinition();
    unique_ptr<Node>Statements();                 
    unique_ptr<Node>Statement();                  
    unique_ptr<Node>DeclarationStatement();       
    unique_ptr<Node>ExpressionStatement();
    unique_ptr<Node>AssignmentExpression();
    unique_ptr<Node>TypeExpression();
    unique_ptr<Node>VariableDefinition();         
    unique_ptr<Node>DataType();
    unique_ptr<Node>LiteralExpression();
    unique_ptr<Node>Variable();
    unique_ptr<Node>BlockExpression();
    unique_ptr<Node>LogicalOrExpression();
    unique_ptr<Node>GroupedExpression();
    unique_ptr<Node>FunctionCall();
    unique_ptr<Node>ContinueExpression();
    unique_ptr<Node>BreakExpression();
    unique_ptr<Node>IfExpression();
    unique_ptr<Node>ReturnExpression();
    unique_ptr<Node>Identifier();                 
    unique_ptr<Node>CHAR_STR_LITERAL();           
    unique_ptr<Node>INTEGER_LITERAL();            
    unique_ptr<Node>FLOAT_LITERAL();              
    unique_ptr<Node>BOOLEAN_LITERAL();            
    unique_ptr<Node>CycleExpression();            
    unique_ptr<Node>WhileExpression();
    unique_ptr<Node>ForExpression();
    unique_ptr<Node>LoopExpression();
    unique_ptr<Node>FunctionIdentifier();          
    unique_ptr<Node>ParameterList();
    unique_ptr<Node>CallParameterList();
    unique_ptr<Node>AssignmentOperator();       
    unique_ptr<Node>LogicalAndExpression();        
    unique_ptr<Node>InclusiveOrExpression();       
    unique_ptr<Node>ExclusiveOrExpression();       
    unique_ptr<Node>AndExpression();               
    unique_ptr<Node>EqualityExpression();          
    unique_ptr<Node>RelationalExpression();        
    unique_ptr<Node>ShiftExpression();             
    unique_ptr<Node>AdditiveExpression();          
    unique_ptr<Node>MultiplicativeExpression();    
    unique_ptr<Node>NotExpression();               
    unique_ptr<Node>PrimaryExpression();           
    unique_ptr<Node>PRINTLN();

	void error(const string message);
};
