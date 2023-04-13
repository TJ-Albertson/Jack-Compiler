#include "jackTokenizer.h";

typedef enum {
  KEYWORD,
  SYMBOL,
  IDENTIFIER,
  INT_CONST,
  STRING_CONST
} TokenType;

typedef enum {
  CLASS,
  METHOD,
  FUNCTION,
  CONSTRUCTOR,
  INT,
  BOOLEAN,
  CHAR,
  VOID,
  VAR,
  STATIC,
  FIELD,
  LET,
  DO,
  IF,
  ELSE,
  WHILE,
  RETURN,
  TRUE,
  FALSE,
  NULL,
  THIS
} KeyWord;

//needs to:
//ignore whitespace
//get current token
//advance by 1
//get type of current token


void token_initializer(char* filename);

void advance(void);

TokenType tokenType(void);

KeyWord keyWord(void);

char symbol(void);

char* identifier(void);

int intVal(void);

char* stringVal(void);