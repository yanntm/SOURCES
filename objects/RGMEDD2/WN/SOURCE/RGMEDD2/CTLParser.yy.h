#define NUMBER 257
#define VAR 258
#define MARK_PAR 259
#define PLACE_ID 260
#define TRANSITION_ID 261
#define PROP_NAME 262
#define PLUS 263
#define MINUS 264
#define TIMES 265
#define DIV 266
#define MINOR 267
#define MAJOR 268
#define MINOREQ 269
#define MAJOREQ 270
#define EQ 271
#define NEQ 272
#define OR 273
#define XOR 274
#define AND 275
#define NOT 276
#define IMPLY 277
#define BIIMPLY 278
#define POSSIBLY 279
#define IMPOSSIBLY 280
#define INVARIANT 281
#define LPARENT 282
#define RPARENT 283
#define TRUEv 284
#define FALSEv 285
#define LQPARENT 286
#define RQPARENT 287
#define DEADLOCK 288
#define NDEADLOCK 289
#define ENABLED 290
#define BOUNDS 291
#define COMMA 292
#define SIM 293
#define DIF 294
#define SHARP 295
#define SEMICOLON 296
#define E 297
#define A 298
#define U 299
#define AX 300
#define AF 301
#define AG 302
#define EX 303
#define EF 304
#define EG 305
#define YYERRCODE 256
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
  float num;
  char *pVar;
  int place_id;
  int mpar_id;
  int transition_id;
  PlaceTerm *term;
  StateFormula *state_formula;
  IntFormula *int_formula;
  Inequality::op_type inop;
  std::vector<int>* place_id_list;
  std::vector<int>* transition_id_list;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE mmlval;
