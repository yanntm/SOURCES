#define FLOAT 257
#define PLACE 258
#define PLUS 259
#define MINUS 260
#define MULT 261
#define DIV 262
#define FUNCT 263
#define BOPEN 264
#define BCLOSE 265
#define STRING 266
#define ENDLINE 267
#define YYERRCODE 256
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
  long double num;
  char *pVar;
  class node* Node;
  class tree* Tree;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE mmlval;
