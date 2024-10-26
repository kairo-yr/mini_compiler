
typedef enum{
    TOKEN_IDENTIFIER,
    TOKEN_CONSTANT,
    TOKEN_KEYWORD,
    TOKEN_PUNCTUATOR,
    TOKEN_OPERATOR,
    TOKEN_LITERAL,
    TOKEN_EOF
}tokenType;

typedef struct {
    tokenType type;
    char* value;
    int line;
}Token;