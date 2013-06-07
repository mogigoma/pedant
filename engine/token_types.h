#ifndef TOKEN_TYPES_H_
#define TOKEN_TYPES_H_

typedef enum
{
	ADD,
	ADD_EQ,
	AND,
	ARROW,
	ASS_EQ,
	ATSIGN,
	BIT_AND,
	BIT_NOT,
	BIT_OR,
	BIT_SLL,
	BIT_SRA,
	BIT_SRL,
	BIT_XOR,
	BREAK,
	CMP_EQ,
	CMP_GE,
	CMP_GT,
	CMP_LE,
	CMP_LT,
	CMP_NE,
	COLON,
	COMMA,
	COMMENT,
	CONTINUE,
	DATA,
	DECR,
	DIV,
	DIV_EQ,
	ELSE,
	EXP,
	EXPORT,
	FALSE,
	FOR,
	FOREACH,
	FUNCTION,
	GLOBAL,
	IDENT,
	IF,
	IMPORT,
	INCLUDE,
	INCR,
	INTEGER,
	LBRACE,
	LBRACK,
	LOCAL,
	LPAREN,
	MOD,
	MOD_EQ,
	MUL,
	MUL_EQ,
	NOT,
	OR,
	PERIOD,
	RBRACE,
	RBRACK,
	REGEX_EQ,
	REGEX_NE,
	REP,
	REPEAT,
	RETURN,
	RPAREN,
	SEMICOLON,
	SLL_EQ,
	SRA_EQ,
	SRL_EQ,
	STRING,
	SUB,
	SUBSTR_EQ,
	SUBSTR_NE,
	SUB_EQ,
	TRUE,
	UMINUS,
	UNDEF,
	UNTIL,
	WHILE
} tok_id_t;

struct token_type
{
	const tok_id_t	 num;
	const char	*str;
};

#endif