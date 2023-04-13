#ifndef COMPILATIONENGINE_H
#define COMPILATIONENGINE_H

void comp_initializer(char* filename);

void compileClass(void);

void compileClassVarDec(void);

void compileSubroutine(void);

void compileParameterList(void);

void compileSubroutineBody(void);

void compileVarDec(void);

void compileStatements(void);

void compileLet(void);

void compileIf(void);

void compileWhile(void);

void compileDo(void);

void compileReturn(void);

void compileExpression(void);

void compileTerm(void);

void compileExpressionList(void);

#endif