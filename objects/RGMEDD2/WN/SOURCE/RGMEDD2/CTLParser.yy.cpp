/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20180609

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#line 17 "CTLParser.yy.c"
#include "CTLParser.yy.i"
#include "CTLParser.yy.h"
typedef short YYINT;
static const YYINT mmlhs[] = {                           -1,
    0,    0,    0,    0,    7,    7,    8,    8,    9,    9,
    6,    6,    6,    6,    6,    6,    6,    6,    6,    6,
    6,    6,    6,    6,    6,    6,    6,    6,    6,    4,
    4,    4,    4,    4,    4,    5,    5,    5,    5,    5,
    5,    2,    2,    3,    3,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,   10,   10,
};
static const YYINT mmlen[] = {                            2,
    2,    2,    2,    0,    0,    1,    1,    1,    1,    1,
    1,    3,    3,    3,    2,    3,    3,    3,    2,    2,
    2,    6,    2,    2,    2,    6,    2,    2,    2,    1,
    1,    1,    1,    4,    3,    1,    1,    1,    1,    1,
    1,    2,    4,    1,    3,    3,    2,    4,    1,    1,
    2,    3,    3,    3,    3,    0,    1,
};
static const YYINT mmdefred[] = {                         0,
   49,   50,    0,    0,    0,    0,    0,    0,    0,   32,
   33,   31,   30,    0,    0,   57,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   11,    0,    0,    3,
    0,    0,    0,   15,    0,    0,    0,    0,    0,    0,
    0,    7,    8,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   37,   39,   38,   40,   36,
   41,    6,    0,    1,    0,    0,    0,    0,    0,    2,
   47,    0,   46,   12,   44,    0,    0,    0,    0,    0,
    0,    0,   52,   53,    0,    0,    0,   13,    0,    0,
   34,    0,   48,    0,   42,    0,    0,   45,    0,    0,
    0,   43,    9,   10,   22,   26,
};
static const YYINT mmdgoto[] = {                         25,
   33,   77,   76,   27,   63,   28,   64,   44,  105,   29,
};
static const YYINT mmsindex[] = {                      -146,
    0,    0, -232, -234, -111, -111, -111, -111, -111,    0,
    0,    0,    0, -258, -243,    0, -272, -272, -111, -111,
 -111, -111, -111, -111,    0,  -68,    0, -189, -220,    0,
 -234, -138,  -32,    0,  -31,  -31,  -31,  -58, -177, -217,
 -244,    0,    0, -111, -111,  -31,  -31,  -31,  -31,  -31,
  -31, -234, -234, -234, -234,    0,    0,    0,    0,    0,
    0,    0, -234,    0, -111, -111, -111, -111, -111,    0,
    0, -143,    0,    0,    0, -254, -251, -208, -262, -228,
 -257, -257,    0,    0, -138, -216, -216,    0, -219, -219,
    0, -201,    0, -244,    0, -111, -111,    0, -198,  -57,
  -57,    0,    0,    0,    0,    0,
};
static const YYINT mmrindex[] = {                         2,
    0,    0,    0, -191, -191, -191, -191, -191, -191,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -191, -191,
 -191, -191, -191, -191,    0,   70,    0,   70,    0,    0,
 -191,   68,    0,    0,   28,   33,   34,    0,    0,    0,
 -191,    0,    0, -191, -191,   76,  102,  109,  124,  131,
  132, -191, -191, -191, -191,    0,    0,    0,    0,    0,
    0,    0, -191,    0, -191, -191, -191, -191, -191,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    1,   35,    0,    0,   75,   83,  103,    0,  110,  117,
    0,    0,    0, -191,    0, -191, -191,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const YYINT mmgindex[] = {                         0,
   27,    0,    0,    0,    0,   -2,   44,   55,  -27,  -41,
};
#define YYTABLESIZE 431
static const YYINT mmtable[] = {                         78,
   54,    4,   34,   35,   36,   37,   39,   54,   55,   42,
   65,   66,   67,   43,   68,   69,   46,   47,   48,   49,
   50,   51,    1,   40,    2,   30,   26,   27,   91,    4,
   32,   93,   28,   29,   55,   38,   96,   92,   41,   71,
   94,   79,   80,   75,   65,   66,   67,   31,   68,   69,
   16,   95,   99,   65,   66,   67,   15,   72,   67,   98,
   16,  102,   86,   87,   88,   89,   90,   51,   56,    5,
   97,   70,   45,  106,   35,   23,    0,    0,   81,   82,
   83,   84,   14,   65,   66,   67,    0,   68,   69,   85,
    0,    0,    0,  100,  101,   65,   66,   67,    0,   68,
   69,   24,   17,    0,    0,   74,   62,    0,   25,   16,
    1,    0,    2,    0,    0,    3,   18,    4,    0,   52,
   53,   54,   55,   19,   52,   53,   54,   55,    0,    5,
   20,   21,    6,    7,    8,    9,    0,   10,   11,   73,
    0,   12,   13,   14,   15,    1,    0,    2,   16,    0,
   17,   18,    4,   19,   20,   21,   22,   23,   24,    0,
    0,    0,    0,    0,    5,    0,    0,    6,    7,    8,
    9,    0,   10,   11,    0,    0,   12,   13,   14,   15,
    0,    0,    0,   16,    0,   17,   18,    0,   19,   20,
   21,   22,   23,   24,   52,   53,   54,   55,   56,   57,
   58,   59,   60,   61,   52,   53,   54,   55,   56,   57,
   58,   59,   60,   61,    0,   65,   66,   67,    0,   68,
   69,    0,    0,    0,   73,  103,    0,   62,    0,  104,
   52,   53,   54,   55,   56,   57,   58,   59,   60,   61,
    0,   65,   66,   67,    0,   68,   69,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   56,    0,   54,   54,    0,    0,   54,   54,   54,
   54,   54,   54,   54,   54,   54,    0,   54,   54,    0,
    0,    0,    0,   54,    0,    0,    0,   54,    0,    0,
    0,    0,    0,    0,    0,    0,   54,   55,   55,   54,
    0,   55,   55,   55,   55,   55,   55,   55,   55,   55,
   27,   55,   55,    0,   27,   28,   29,   55,    0,   28,
   29,   55,    0,   27,    0,    0,   27,    0,   28,   29,
   55,   28,   29,   55,   51,   51,   51,   51,   51,   51,
   51,   51,   51,    0,   51,   51,    0,   35,   35,   35,
   51,   35,   35,    0,   51,   14,   14,   35,   23,   14,
   14,   35,   23,   51,    0,   14,   51,    0,    0,   14,
   35,   23,    0,   35,   23,   17,   17,    0,   14,   17,
   17,   14,    0,    0,   24,   17,   16,   16,   24,   17,
    0,   25,   16,   18,   18,   25,   16,   24,   17,   18,
   24,   17,    0,   18,   25,   16,   19,   25,   16,    0,
   19,    0,   18,   20,   21,   18,    0,   20,   21,   19,
    0,    0,   19,    0,    0,    0,   20,   21,    0,   20,
   21,
};
static const YYINT mmcheck[] = {                         41,
    0,    0,    5,    6,    7,    8,    9,  265,  266,  282,
  273,  274,  275,  286,  277,  278,   19,   20,   21,   22,
   23,   24,  257,  282,  259,  258,    0,    0,  283,  264,
    4,  283,    0,    0,    0,    9,  299,  292,  282,  260,
  292,   44,   45,  261,  273,  274,  275,  282,  277,  278,
  295,  260,   94,  273,  274,  275,  291,   31,  275,  261,
  295,  260,   65,   66,   67,   68,   69,    0,  260,    0,
  299,   28,   18,  101,    0,    0,   -1,   -1,   52,   53,
   54,   55,    0,  273,  274,  275,   -1,  277,  278,   63,
   -1,   -1,   -1,   96,   97,  273,  274,  275,   -1,  277,
  278,    0,    0,   -1,   -1,  283,  296,   -1,    0,    0,
  257,   -1,  259,   -1,   -1,  262,    0,  264,   -1,  263,
  264,  265,  266,    0,  263,  264,  265,  266,   -1,  276,
    0,    0,  279,  280,  281,  282,   -1,  284,  285,  283,
   -1,  288,  289,  290,  291,  257,   -1,  259,  295,   -1,
  297,  298,  264,  300,  301,  302,  303,  304,  305,   -1,
   -1,   -1,   -1,   -1,  276,   -1,   -1,  279,  280,  281,
  282,   -1,  284,  285,   -1,   -1,  288,  289,  290,  291,
   -1,   -1,   -1,  295,   -1,  297,  298,   -1,  300,  301,
  302,  303,  304,  305,  263,  264,  265,  266,  267,  268,
  269,  270,  271,  272,  263,  264,  265,  266,  267,  268,
  269,  270,  271,  272,   -1,  273,  274,  275,   -1,  277,
  278,   -1,   -1,   -1,  283,  283,   -1,  296,   -1,  287,
  263,  264,  265,  266,  267,  268,  269,  270,  271,  272,
   -1,  273,  274,  275,   -1,  277,  278,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  260,   -1,  263,  264,   -1,   -1,  267,  268,  269,
  270,  271,  272,  273,  274,  275,   -1,  277,  278,   -1,
   -1,   -1,   -1,  283,   -1,   -1,   -1,  287,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  296,  263,  264,  299,
   -1,  267,  268,  269,  270,  271,  272,  273,  274,  275,
  283,  277,  278,   -1,  287,  283,  283,  283,   -1,  287,
  287,  287,   -1,  296,   -1,   -1,  299,   -1,  296,  296,
  296,  299,  299,  299,  267,  268,  269,  270,  271,  272,
  273,  274,  275,   -1,  277,  278,   -1,  273,  274,  275,
  283,  277,  278,   -1,  287,  273,  274,  283,  283,  277,
  278,  287,  287,  296,   -1,  283,  299,   -1,   -1,  287,
  296,  296,   -1,  299,  299,  273,  274,   -1,  296,  277,
  278,  299,   -1,   -1,  283,  283,  277,  278,  287,  287,
   -1,  283,  283,  277,  278,  287,  287,  296,  296,  283,
  299,  299,   -1,  287,  296,  296,  283,  299,  299,   -1,
  287,   -1,  296,  283,  283,  299,   -1,  287,  287,  296,
   -1,   -1,  299,   -1,   -1,   -1,  296,  296,   -1,  299,
  299,
};
#define YYFINAL 25
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 305
#define YYUNDFTOKEN 318
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const mmname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"NUMBER","VAR","MARK_PAR",
"PLACE_ID","TRANSITION_ID","PROP_NAME","PLUS","MINUS","TIMES","DIV","MINOR",
"MAJOR","MINOREQ","MAJOREQ","EQ","NEQ","OR","XOR","AND","NOT","IMPLY","BIIMPLY",
"POSSIBLY","IMPOSSIBLY","INVARIANT","LPARENT","RPARENT","TRUEv","FALSEv",
"LQPARENT","RQPARENT","DEADLOCK","NDEADLOCK","ENABLED","BOUNDS","COMMA","SIM",
"DIF","SHARP","SEMICOLON","E","A","U","AX","AF","AG","EX","EF","EG",0,0,0,0,0,0,
0,0,0,0,0,0,"illegal-symbol",
};
static const char *const mmrule[] = {
"$accept : inizio",
"inizio : expression opt_semicolon",
"inizio : ctl_formula opt_semicolon",
"inizio : PROP_NAME VAR",
"inizio :",
"opt_semicolon :",
"opt_semicolon : SEMICOLON",
"l_paren : LPARENT",
"l_paren : LQPARENT",
"r_paren : RPARENT",
"r_paren : RQPARENT",
"ctl_formula : atomic_prop",
"ctl_formula : LPARENT ctl_formula RPARENT",
"ctl_formula : ctl_formula AND ctl_formula",
"ctl_formula : ctl_formula OR ctl_formula",
"ctl_formula : NOT ctl_formula",
"ctl_formula : ctl_formula IMPLY ctl_formula",
"ctl_formula : ctl_formula XOR ctl_formula",
"ctl_formula : ctl_formula BIIMPLY ctl_formula",
"ctl_formula : EX ctl_formula",
"ctl_formula : EF ctl_formula",
"ctl_formula : EG ctl_formula",
"ctl_formula : E l_paren ctl_formula U ctl_formula r_paren",
"ctl_formula : AX ctl_formula",
"ctl_formula : AF ctl_formula",
"ctl_formula : AG ctl_formula",
"ctl_formula : A l_paren ctl_formula U ctl_formula r_paren",
"ctl_formula : POSSIBLY ctl_formula",
"ctl_formula : IMPOSSIBLY ctl_formula",
"ctl_formula : INVARIANT ctl_formula",
"atomic_prop : NDEADLOCK",
"atomic_prop : DEADLOCK",
"atomic_prop : TRUEv",
"atomic_prop : FALSEv",
"atomic_prop : ENABLED LPARENT transition_list RPARENT",
"atomic_prop : expression ineq_op expression",
"ineq_op : EQ",
"ineq_op : MINOR",
"ineq_op : MINOREQ",
"ineq_op : MAJOR",
"ineq_op : MAJOREQ",
"ineq_op : NEQ",
"place_list : opt_sharp PLACE_ID",
"place_list : place_list COMMA opt_sharp PLACE_ID",
"transition_list : TRANSITION_ID",
"transition_list : transition_list COMMA TRANSITION_ID",
"expression : LPARENT expression RPARENT",
"expression : opt_sharp PLACE_ID",
"expression : BOUNDS LPARENT place_list RPARENT",
"expression : NUMBER",
"expression : MARK_PAR",
"expression : MINUS expression",
"expression : expression TIMES expression",
"expression : expression DIV expression",
"expression : expression PLUS expression",
"expression : expression MINUS expression",
"opt_sharp :",
"opt_sharp : SHARP",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 231 "WN/SOURCE/RGMEDD2/CTLParser.yy"

//-----------------------------------------------------------------------------

// Create an Inequality* object, with some optimizations for the special cases
AtomicProposition* make_inequality(IntFormula* e1, Inequality::op_type op, IntFormula* e2) {
    bool e1const = (typeid(*e1) == typeid(IntLiteral));
    bool e2const = (typeid(*e2) == typeid(IntLiteral));
    bool e1term = (typeid(*e1) == typeid(PlaceTerm));
    bool e2term = (typeid(*e2) == typeid(PlaceTerm));
    // constant <op> constant   ->   can be replaced with true/false
    if (e1const && e2const) {
        float val1 = ((IntLiteral*)e1)->getConstant();
        float val2 = ((IntLiteral*)e2)->getConstant();
        delete e1;
        delete e2;
        bool result;
        switch (op) {
            case Inequality::IOP_MIN:     result = val1 < val2;    break;
            case Inequality::IOP_MINEQ:   result = val1 <= val2;   break;
            case Inequality::IOP_MAJ:     result = val1 > val2;    break;
            case Inequality::IOP_MAJEQ:   result = val1 >= val2;   break;
            case Inequality::IOP_EQ:      result = val1 == val2;   break;
            case Inequality::IOP_NEQ:     result = val1 != val2;   break;
            case Inequality::IOP_SIM:     result = val1 == val2;   break;
            case Inequality::IOP_DIF:     result = val1 != val2;   break;
            default: throw;
        }
        return new BoolLiteral(result);
    }
    // constant <op> expression  ->  reverse the operator and build an inequality with constant
    else if (e1const) {
        float val1 = ((IntLiteral*)e1)->getConstant();
        delete e1;
        return new Inequality(reverse_ineq_op(op), e2, val1);
    }
    // expression <op> constant  ->  inequality with constant
    else if (e2const) {
        float val2 = ((IntLiteral*)e2)->getConstant();
        delete e2;
        return new Inequality(op, e1, val2);
    }
    // remaining case:  expression <op> expression
    // Use SIM and DIF if the two expressions are simple terms.    
    if (e1term && e2term) {
        if (op == Inequality::IOP_EQ)
            op = Inequality::IOP_SIM;
        else if (op == Inequality::IOP_NEQ)
            op = Inequality::IOP_DIF;
    }
    return new Inequality(op, e1, e2);

}

//-----------------------------------------------------------------------------

IntFormula* make_expression(IntFormula* e1, IntFormula::op_type op, IntFormula* e2) {
    bool e1const = (typeid(*e1) == typeid(IntLiteral));
    bool e2const = (typeid(*e2) == typeid(IntLiteral));
    bool e2term = (typeid(*e2) == typeid(PlaceTerm));
    // Terms are constants -> combine them directly
    if (e1const && e2const) {
        float result;
        float val1 = ((IntLiteral*)e1)->getConstant();
        float val2 = ((IntLiteral*)e2)->getConstant();
        switch (op) {
            case IntFormula::EOP_TIMES:   result = val1 * val2;     break;
            case IntFormula::EOP_DIV:     result = val1 / val2;     break;
            case IntFormula::EOP_PLUS:    result = val1 + val2;     break;
            case IntFormula::EOP_MINUS:   result = val1 - val2;     break;
            default: throw;
        }
        delete e1;
        delete e2;
        return new IntLiteral(result);
    }
    // <constant> <*/> <PlaceTerm>  ->  combine into a single PlaceTerm
    else if (e1const && e2term) {
        if (op == IntFormula::EOP_TIMES || op == IntFormula::EOP_DIV) {
            int variable = ((PlaceTerm*)e2)->getVariable();
            float coeff = ((PlaceTerm*)e2)->getCoeff();
            float val1 = ((IntLiteral*)e1)->getConstant();
            assert(coeff == 1);
            delete e1;
            delete e2;
            return new PlaceTerm(val1, variable, op);
        }
    }
    // Otherwise, create a new IntFormula* object
    return new IntExpression(e1, e2, op);
}

//-----------------------------------------------------------------------------

char ctl_result_buffer[32];
const char* format_result(bool is_integer, bool b_result, int i_result, bool uppercase) {
    if (is_integer) {
        sprintf(ctl_result_buffer, "%d", i_result);
        return ctl_result_buffer; 
    }
    else
        return b_result ? (uppercase ? "TRUE" : "true") :
                          (uppercase ? "FALSE" : "false");
}

//-----------------------------------------------------------------------------

// Parse and evaluate a CTL formula
BaseFormula *parse_formula(const std::string& formula, bool *b_result, int *i_result) {
    assert(ris == nullptr);
    Ibuffer = new istringstream(formula);
    lexer = new yyFlexLexer(Ibuffer);
    yyparse();
    delete lexer;
    delete Ibuffer;
    BaseFormula *parsedFrm = ris;
    ris = NULL;
    if(parsedFrm != NULL) {
        startMDD = clock();
        if (!running_for_MCC()) {
            cout << "Processing: " << (*parsedFrm) << "  ->  " 
                 << (parsedFrm->isIntFormula()?"int":"bool") << endl;
        }

        if (parsedFrm->isIntFormula()) { 
            IntLiteral* intFrm = dynamic_cast<IntLiteral*>(parsedFrm);
            *i_result = intFrm->getConstant();
            *b_result = true;
        }
        else { // boolean formula
            StateFormula* boolFrm = dynamic_cast<StateFormula*>(parsedFrm);
            dd_edge dd = boolFrm->getMDD();
            assert(dd.getForest() != nullptr);
            endMDD = clock();
            boolFrm->addOwner();

            // Evaluate the CTL expression:  s0 |= formula
            dd_edge r(rsrg->getForestMDD());

            /*cout << "Markings that satisfy the formula: \n";
            enumerator i(*dd);
            int nvar = rsrg->getDomain()->getNumVariables();
            while(i != 0) { // for each marking in the sat set
                int j;
                for(j=1; j <= nvar; j++) { // for each place
                    int val = *(i.getAssignments() + j);
                    const std::string& s = rsrg->getPL(j - 1);
                    if(val!=0) 
                        cout << s << "(" << val << ")";
                }
                ++i;
                cout << endl;
            }
            cout << endl;*/

            apply(INTERSECTION, rsrg->getInitMark(), dd, r);
            *b_result = (r.getCardinality() != 0);
            *i_result = -1;

        }
        endMDD2=clock();
    }
    return parsedFrm;
}

//-----------------------------------------------------------------------------

// Parse input ctl queries read from file. Print the formula result on screen.
void CTLParser(RSRG *r) {
    rsrg = r;
    std::string filename = rsrg->getPropName();
    ifstream in;
    if (filename == "")
        filename = rsrg->getNetName() + std::string("ctl");
    in.open(filename.c_str());
    if (!in)
    {
        cout<<"Error opening CTL file: "<<filename<<"\n";
        if (running_for_MCC())
            cout<<"CANNOT_COMPUTE"<<endl;
        exit(EXIT_FAILURE);
    }
    //inizializzo la classe CTL dove ho i riferimenti a rs foreste e domini per tutte le altre classi
    ctl->CTLinit();
    filename = filename + ".output";
    ofstream fout;
    if (output_flag)
    {
        fout.open(filename.c_str());
        if (!fout)
        {
            cout<<"Error opening output CTL file: "<<filename<<"\n";
            if (running_for_MCC())
                cout<<"CANNOT_COMPUTE"<<endl;
            exit(EXIT_FAILURE);
        }
    }
    std::string line;
    while(!in.eof()) {
        getline(in, line);
        if(!line.empty()) {
            bool b_result;
            int i_result;
            parsed_comment = false;
            BaseFormula *formula = parse_formula(line, &b_result, &i_result);
            if (!parsed_comment) // line is a CTL query
            {
                if (!running_for_MCC())
                    cout<<"--- "<<line<<" ---"<<endl;
                if (output_flag)
                    fout << "\n ********** " << line << " *********" << endl;
            }

            // Show the result of this CTL formula
            if (formula == NULL) {
                if (!parsed_comment) // line is a CTL query that we couldn't parse
                {
                    if (output_flag) {
                        fout << "Parse error." << endl;
                    }
                    if (!running_for_MCC()) {
                        cout<<"Parse error."<<endl;
                        if (!property_name.empty())
                            cout << "\tFormula name: " << property_name << endl;
                        cout << "\tEvaluation: -" << endl;
                    }
                    else {
                        if (property_name.empty())
                            cout<<"CANNOT_COMPUTE "<<MCC_TECHNIQUES << endl;
                        else
                            cout << "FORMULA " << property_name << " CANNOT_COMPUTE " << MCC_TECHNIQUES << endl;
                    }
                    property_name = "";
                }
            }
            else {
                // We have a valid evaluated CTL formula
                bool is_int_formula = formula->isIntFormula();

                if (!running_for_MCC()) {
                    if (!property_name.empty())
                        cout << "\tFormula name: " << property_name << endl;
                    cout << "\tEvaluation: " << format_result(is_int_formula, b_result, i_result, false) << endl;
                    if (output_flag) {
                        if (!property_name.empty())
                            fout << "Formula name: " << property_name << endl;
                        fout <<  "Evaluation: " << format_result(is_int_formula, b_result, i_result, false) << endl;
                    }
                    if (invoked_from_gui()) {
                        cout << "#{GUI}# RESULT " << property_name << " " 
                             << format_result(is_int_formula, b_result, i_result, true) << endl;
                    }
                }
                else { 
                    cout << "FORMULA " << property_name << " "
                         << format_result(is_int_formula, b_result, i_result, true)
                         << " " << MCC_TECHNIQUES << "\n";
                }
                property_name = "";

                // Print all the satisfying markings
                if(output_flag && !is_int_formula) {
                    StateFormula* state_formula = dynamic_cast<StateFormula*>(formula);
                    dd_edge dd = state_formula->getMDD();
                    rsrg->show_markings(fout, dd);
                }
                
                if (!running_for_MCC()) {
#if PERFORMANCECTL
                    if (!is_int_formula)
                        cout<<"\tSat-set generation time: "<<setprecision(7)<<(double(endMDD-startMDD))/CLOCKS_PER_SEC<<" sec"<<endl;
                    cout<<"\tEvaluation time: "<<setprecision(7)<<(double(endMDD2-startMDD))/CLOCKS_PER_SEC<<" sec"<<endl;
#endif
                    // Counter-example/witness generation
                    if (print_CTL_counterexamples && !is_int_formula) {
                        StateFormula* state_formula = dynamic_cast<StateFormula*>(formula);
                        cout << "\nGenerated " << (b_result ? "witness: " : "counter-example: ") << endl;
                        vector<int> state0(npl + 1);
                        enumerator it0(rsrg->getInitMark());
                        const int* tmp =it0.getAssignments();
                        std::copy(tmp, tmp+npl + 1, state0.begin());
                        
                        TraceType traceTy = (b_result ? TT_WITNESS : TT_COUNTEREXAMPLE);
                        TreeTraceNode *ttn = state_formula->generateTrace(state0, traceTy);
                        print_banner(" Trace ");
                        cout << "Initial state is: ";
                        ctl->print_state(state0.data());
                        cout << endl;
                        ttn->print_trace();
                        cout << endl;
                        delete ttn;
                    }
#if PERFORMANCE
                    ctl->printStatistics();
#endif
                }
                // Release the memory occupied by the CTL formula tree
                formula->removeOwner();
                formula = NULL;
            }

            if (!running_for_MCC())
                cout << endl;
        }
    } // for each line of the input CTL file
    in.close();
    if (fout)
        fout.close();
    cout << "Ok." << endl;
}

//-----------------------------------------------------------------------------

#line 691 "CTLParser.yy.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 1:
#line 103 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ parsed_comment = false; ris = yystack.l_mark[-1].int_formula; }
break;
case 2:
#line 104 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ parsed_comment = false; ris = yystack.l_mark[-1].state_formula; }
break;
case 3:
#line 105 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ parsed_comment = true; ris = NULL; property_name = yystack.l_mark[0].pVar; free(yystack.l_mark[0].pVar); }
break;
case 4:
#line 106 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ parsed_comment = true; ris = NULL; }
break;
case 11:
#line 114 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = yystack.l_mark[0].state_formula; }
break;
case 12:
#line 115 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = yystack.l_mark[-1].state_formula; }
break;
case 13:
#line 116 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new LogicalFormula(yystack.l_mark[-2].state_formula,yystack.l_mark[0].state_formula, LogicalFormula::CBF_AND); }
break;
case 14:
#line 117 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new LogicalFormula(yystack.l_mark[-2].state_formula,yystack.l_mark[0].state_formula, LogicalFormula::CBF_OR); }
break;
case 15:
#line 118 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new LogicalFormula(yystack.l_mark[0].state_formula); }
break;
case 16:
#line 119 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ 
                    /* (not ctl_formula1) or ctl_formula2*/
                    LogicalFormula *nf1 = new LogicalFormula(yystack.l_mark[-2].state_formula);
                    yyval.state_formula = new LogicalFormula(nf1,yystack.l_mark[0].state_formula, LogicalFormula::CBF_OR); }
break;
case 17:
#line 123 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{
                    /* (A or B) and not (A and B)*/
                    LogicalFormula *AorB = new LogicalFormula(yystack.l_mark[-2].state_formula,yystack.l_mark[0].state_formula, LogicalFormula::CBF_OR);
                    LogicalFormula *AandB = new LogicalFormula(yystack.l_mark[-2].state_formula,yystack.l_mark[0].state_formula, LogicalFormula::CBF_AND);
                    LogicalFormula *not_AandB = new LogicalFormula(AandB);
                    yyval.state_formula = new LogicalFormula(AorB,not_AandB, LogicalFormula::CBF_AND); }
break;
case 18:
#line 129 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{
                    /* (A and B) or (not A and not B)*/
                    LogicalFormula *AandB = new LogicalFormula(yystack.l_mark[-2].state_formula,yystack.l_mark[0].state_formula, LogicalFormula::CBF_AND);
                    LogicalFormula *notA = new LogicalFormula(yystack.l_mark[-2].state_formula);
                    LogicalFormula *notB = new LogicalFormula(yystack.l_mark[-2].state_formula);
                    LogicalFormula *notA_and_notB = new LogicalFormula(notA,notB,LogicalFormula::CBF_AND);
                    yyval.state_formula = new LogicalFormula(AandB,notA_and_notB, LogicalFormula::CBF_OR); }
break;
case 19:
#line 136 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new CTLStateFormula(yystack.l_mark[0].state_formula, CTLStateFormula::CTLOP_EX); }
break;
case 20:
#line 137 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new CTLStateFormula(yystack.l_mark[0].state_formula, CTLStateFormula::CTLOP_EF); }
break;
case 21:
#line 138 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new CTLStateFormula(yystack.l_mark[0].state_formula, CTLStateFormula::CTLOP_EG); }
break;
case 22:
#line 139 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new CTLStateFormula(yystack.l_mark[-3].state_formula, yystack.l_mark[-1].state_formula); }
break;
case 23:
#line 140 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ 
                    /* not EX not CTLFormula */
                    LogicalFormula *cbf = new LogicalFormula(yystack.l_mark[0].state_formula); /*not CTLFormula*/
                    CTLStateFormula *co = new CTLStateFormula(cbf, CTLStateFormula::CTLOP_EX); /* EX not CTLFormula*/
                    yyval.state_formula = new LogicalFormula(co); /*not EX not CTLFormula*/
                }
break;
case 24:
#line 146 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ 
                    /* not EG not CTLFormula */
                    LogicalFormula *cbf = new LogicalFormula(yystack.l_mark[0].state_formula); /*not CTLFormula*/
                    CTLStateFormula *co = new CTLStateFormula(cbf, CTLStateFormula::CTLOP_EG); /* EG not CTLFormula*/
                    yyval.state_formula = new LogicalFormula(co); /*not EG not CTLFormula*/
                }
break;
case 25:
#line 152 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ 
                    /* not (E true U not CTLFormula )  =  not EF not CTLFormula*/
                    LogicalFormula *cbf = new LogicalFormula(yystack.l_mark[0].state_formula); /*not CTLFormula*/
                    CTLStateFormula *co = new CTLStateFormula(cbf, CTLStateFormula::CTLOP_EF);
                    yyval.state_formula = new LogicalFormula(co);
                }
break;
case 26:
#line 158 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{
                    /*not (E not CTLFormula2 U (not CTLFormula1 and not CTLFormula2) ) and not EG not CTLFormula2*/
                    LogicalFormula *f1 = new LogicalFormula(yystack.l_mark[-3].state_formula); /*not CTLFormula1*/
                    LogicalFormula *f2 = new LogicalFormula(yystack.l_mark[-1].state_formula); /*not CTLFormula2*/
                    LogicalFormula *f1f2 = new LogicalFormula(f1,f2, LogicalFormula::CBF_AND); /*(not CTLFormula1 and not CTLFormula2)*/
                    CTLStateFormula *eu = new CTLStateFormula(f2, f1f2); /*E not CTLFormula2 U (not CTLFormula1 and not CTLFormula2) */
                    LogicalFormula *neu = new LogicalFormula(eu); /*not (E not CTLFormula2 U (not CTLFormula1 and not CTLFormula2) )*/
                    CTLStateFormula *eg = new CTLStateFormula(f2, CTLStateFormula::CTLOP_EG); /* EG not CTLFormula2*/
                    LogicalFormula *neg = new LogicalFormula(eg); /*not EG not CTLFormula2*/
                    yyval.state_formula = new LogicalFormula(neu,neg, LogicalFormula::CBF_AND); /*total*/
                }
break;
case 27:
#line 169 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new Reachability(yystack.l_mark[0].state_formula, Reachability::RPT_POSSIBILITY); }
break;
case 28:
#line 170 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new Reachability(yystack.l_mark[0].state_formula, Reachability::RPT_IMPOSSIBILITY); }
break;
case 29:
#line 171 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new Reachability(yystack.l_mark[0].state_formula, Reachability::RPT_INVARIANTLY); }
break;
case 30:
#line 174 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new Deadlock(false); }
break;
case 31:
#line 175 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new Deadlock(true); }
break;
case 32:
#line 176 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new BoolLiteral(true); }
break;
case 33:
#line 177 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new BoolLiteral(false); }
break;
case 34:
#line 178 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = new Fireability(yystack.l_mark[-1].transition_id_list); delete yystack.l_mark[-1].transition_id_list; }
break;
case 35:
#line 179 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.state_formula = make_inequality(yystack.l_mark[-2].int_formula, yystack.l_mark[-1].inop, yystack.l_mark[0].int_formula); }
break;
case 36:
#line 182 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.inop = Inequality::IOP_EQ; }
break;
case 37:
#line 183 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.inop = Inequality::IOP_MIN; }
break;
case 38:
#line 184 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.inop = Inequality::IOP_MINEQ; }
break;
case 39:
#line 185 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.inop = Inequality::IOP_MAJ; }
break;
case 40:
#line 186 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.inop = Inequality::IOP_MAJEQ; }
break;
case 41:
#line 187 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.inop = Inequality::IOP_NEQ; }
break;
case 42:
#line 190 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.place_id_list = new std::vector<int>(); yyval.place_id_list->push_back(yystack.l_mark[0].place_id); }
break;
case 43:
#line 191 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.place_id_list = yystack.l_mark[-3].place_id_list; yyval.place_id_list->push_back(yystack.l_mark[0].place_id); }
break;
case 44:
#line 193 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.transition_id_list = new std::vector<int>(); yyval.transition_id_list->push_back(yystack.l_mark[0].transition_id); }
break;
case 45:
#line 194 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.transition_id_list = yystack.l_mark[-2].transition_id_list; yyval.transition_id_list->push_back(yystack.l_mark[0].transition_id); }
break;
case 46:
#line 196 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = yystack.l_mark[-1].int_formula;}
break;
case 47:
#line 197 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = new PlaceTerm(1, yystack.l_mark[0].place_id, PlaceTerm::EOP_TIMES); }
break;
case 48:
#line 198 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = new BoundOfPlaces(yystack.l_mark[-1].place_id_list); delete yystack.l_mark[-1].place_id_list; }
break;
case 49:
#line 199 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = new IntLiteral(yystack.l_mark[0].num); }
break;
case 50:
#line 200 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = new IntLiteral(tabmp[yystack.l_mark[0].mpar_id].mark_val); }
break;
case 51:
#line 201 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = make_expression(new IntLiteral(0), IntFormula::EOP_MINUS, yystack.l_mark[0].int_formula); }
break;
case 52:
#line 202 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = make_expression(yystack.l_mark[-2].int_formula, IntFormula::EOP_TIMES, yystack.l_mark[0].int_formula); }
break;
case 53:
#line 203 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = make_expression(yystack.l_mark[-2].int_formula, IntFormula::EOP_DIV, yystack.l_mark[0].int_formula); }
break;
case 54:
#line 204 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = make_expression(yystack.l_mark[-2].int_formula, IntFormula::EOP_PLUS, yystack.l_mark[0].int_formula); }
break;
case 55:
#line 205 "WN/SOURCE/RGMEDD2/CTLParser.yy"
	{ yyval.int_formula = make_expression(yystack.l_mark[-2].int_formula, IntFormula::EOP_MINUS, yystack.l_mark[0].int_formula); }
break;
#line 1125 "CTLParser.yy.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
