#define ID 257
#define BAR 258
#define NEWLINE 259
#define B_WAVE 260
#define E_WAVE 261
#define EQUAL 262
#define PL 263
#define TR 264
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
  char *SVal; } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
