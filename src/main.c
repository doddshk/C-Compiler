#include <stdio.h>
#include <string.h>

typedef enum {
  TOKEN_INVALID,
  TOKEN_INT,
  TOKEN_KEYWORD_MAIN,
  TOKEN_OPEN_PARENTHESIS,
  TOKEN_OPEN_BRACE,
  TOKEN_RETURN,
  TOKEN_SEMICOLON,
  TOKEN_CLOSE_BRACE,
  TOKEN_EOF,
}TokenType;

typedef struct {
  TokenType token;
  int line;
  int column;
  char *value;
}Token;

Token current_token;

Token make_token(TokenType type, const char *value){
  Token token = {type, current_token.line, current_token.column, strdup(value)};
  return token;
}

void lex(FILE* file){
  while (*current_token.value != '\0'){
    switch (*current_token.value){
      
    }
  }
}
