/* A Bison parser, made by GNU Bison 3.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 1 "bison_parser.y"

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 106 "bison_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y"

// %code requires block

#include "../sql/statements.h"
#include "../SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 181 "bison_parser.cpp"

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_INTEGER = 279,
    SQL_NATURAL = 280,
    SQL_PREPARE = 281,
    SQL_PRIMARY = 282,
    SQL_SCHEMAS = 283,
    SQL_SPATIAL = 284,
    SQL_VARCHAR = 285,
    SQL_VIRTUAL = 286,
    SQL_DESCRIBE = 287,
    SQL_BEFORE = 288,
    SQL_COLUMN = 289,
    SQL_CREATE = 290,
    SQL_DELETE = 291,
    SQL_DIRECT = 292,
    SQL_DOUBLE = 293,
    SQL_ESCAPE = 294,
    SQL_EXCEPT = 295,
    SQL_EXISTS = 296,
    SQL_EXTRACT = 297,
    SQL_FORMAT = 298,
    SQL_GLOBAL = 299,
    SQL_HAVING = 300,
    SQL_IMPORT = 301,
    SQL_INSERT = 302,
    SQL_ISNULL = 303,
    SQL_OFFSET = 304,
    SQL_RENAME = 305,
    SQL_SCHEMA = 306,
    SQL_SELECT = 307,
    SQL_SORTED = 308,
    SQL_TABLES = 309,
    SQL_UNIQUE = 310,
    SQL_UNLOAD = 311,
    SQL_UPDATE = 312,
    SQL_VALUES = 313,
    SQL_AFTER = 314,
    SQL_ALTER = 315,
    SQL_CROSS = 316,
    SQL_DELTA = 317,
    SQL_FLOAT = 318,
    SQL_GROUP = 319,
    SQL_INDEX = 320,
    SQL_INNER = 321,
    SQL_LIMIT = 322,
    SQL_LOCAL = 323,
    SQL_MERGE = 324,
    SQL_MINUS = 325,
    SQL_ORDER = 326,
    SQL_OUTER = 327,
    SQL_RIGHT = 328,
    SQL_TABLE = 329,
    SQL_UNION = 330,
    SQL_USING = 331,
    SQL_WHERE = 332,
    SQL_CALL = 333,
    SQL_CASE = 334,
    SQL_CHAR = 335,
    SQL_COPY = 336,
    SQL_DATE = 337,
    SQL_DESC = 338,
    SQL_DROP = 339,
    SQL_ELSE = 340,
    SQL_FILE = 341,
    SQL_FROM = 342,
    SQL_FULL = 343,
    SQL_HASH = 344,
    SQL_HINT = 345,
    SQL_INTO = 346,
    SQL_JOIN = 347,
    SQL_LEFT = 348,
    SQL_LIKE = 349,
    SQL_LOAD = 350,
    SQL_LONG = 351,
    SQL_NULL = 352,
    SQL_PLAN = 353,
    SQL_SHOW = 354,
    SQL_TEXT = 355,
    SQL_THEN = 356,
    SQL_TIME = 357,
    SQL_VIEW = 358,
    SQL_WHEN = 359,
    SQL_WITH = 360,
    SQL_ADD = 361,
    SQL_ALL = 362,
    SQL_AND = 363,
    SQL_ASC = 364,
    SQL_END = 365,
    SQL_FOR = 366,
    SQL_INT = 367,
    SQL_KEY = 368,
    SQL_NOT = 369,
    SQL_OFF = 370,
    SQL_SET = 371,
    SQL_TOP = 372,
    SQL_AS = 373,
    SQL_BY = 374,
    SQL_IF = 375,
    SQL_IN = 376,
    SQL_IS = 377,
    SQL_OF = 378,
    SQL_ON = 379,
    SQL_OR = 380,
    SQL_TO = 381,
    SQL_ARRAY = 382,
    SQL_CONCAT = 383,
    SQL_ILIKE = 384,
    SQL_SECOND = 385,
    SQL_MINUTE = 386,
    SQL_HOUR = 387,
    SQL_DAY = 388,
    SQL_MONTH = 389,
    SQL_YEAR = 390,
    SQL_TRUE = 391,
    SQL_FALSE = 392,
    SQL_USE = 393,
    SQL_EQUALS = 394,
    SQL_NOTEQUALS = 395,
    SQL_LESS = 396,
    SQL_GREATER = 397,
    SQL_LESSEQ = 398,
    SQL_GREATEREQ = 399,
    SQL_NOTNULL = 400,
    SQL_UMINUS = 401
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 95 "bison_parser.y"

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::ExportStatement* 	export_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*  drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*  show_stmt;
	hsql::UseStatement*  use_stmt;

	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::WithDescription* with_description_t;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::ImportType import_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 386 "bison_parser.cpp"

};
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   711

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  164
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  252
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  457

#define YYUNDEFTOK  2
#define YYMAXUTOK   401


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   153,     2,     2,
     158,   159,   151,   149,   162,   150,   160,   152,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   161,
     142,   139,   143,   163,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   156,     2,   157,   154,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   140,   141,   144,   145,   146,   147,
     148,   155
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   267,   267,   288,   294,   303,   307,   311,   314,   317,
     320,   327,   328,   329,   330,   331,   332,   333,   334,   343,
     344,   349,   350,   354,   358,   370,   377,   380,   384,   398,
     404,   413,   430,   434,   437,   446,   460,   463,   468,   480,
     492,   505,   512,   519,   530,   531,   535,   536,   540,   546,
     547,   548,   549,   550,   551,   552,   553,   557,   558,   559,
     569,   575,   581,   589,   590,   599,   608,   621,   628,   639,
     640,   650,   659,   660,   664,   676,   680,   684,   702,   703,
     707,   708,   712,   722,   739,   743,   744,   745,   749,   750,
     754,   766,   767,   771,   775,   776,   780,   785,   786,   790,
     795,   799,   800,   804,   805,   809,   810,   814,   818,   819,
     820,   826,   827,   831,   832,   833,   834,   835,   836,   843,
     844,   848,   849,   853,   854,   858,   868,   869,   870,   871,
     872,   876,   877,   878,   879,   880,   881,   882,   883,   884,
     885,   889,   890,   894,   895,   896,   897,   898,   902,   903,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   916,
     917,   921,   922,   923,   924,   930,   931,   932,   933,   937,
     938,   942,   943,   947,   948,   949,   950,   951,   952,   953,
     957,   958,   962,   966,   967,   968,   969,   970,   971,   975,
     979,   983,   987,   988,   989,   990,   994,   995,   996,   997,
     998,  1002,  1006,  1007,  1011,  1012,  1016,  1020,  1024,  1036,
    1037,  1047,  1048,  1052,  1053,  1062,  1063,  1068,  1079,  1088,
    1089,  1094,  1095,  1100,  1101,  1106,  1107,  1112,  1113,  1122,
    1123,  1127,  1131,  1135,  1142,  1155,  1163,  1173,  1192,  1193,
    1194,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1206,  1215,
    1216,  1221,  1222
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL",
  "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE",
  "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA",
  "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS",
  "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL",
  "CASE", "CHAR", "COPY", "DATE", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG",
  "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME", "VIEW", "WHEN", "WITH",
  "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT", "KEY", "NOT", "OFF",
  "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO",
  "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH",
  "YEAR", "TRUE", "FALSE", "USE", "'='", "EQUALS", "NOTEQUALS", "'<'",
  "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'",
  "';'", "','", "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path", "opt_file_type",
  "export_statement", "show_statement", "use_statement",
  "create_statement", "opt_not_exists", "column_def_commalist",
  "column_def", "column_type", "opt_column_nullable", "drop_statement",
  "opt_exists", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_with_paren", "select_paren_or_clause", "select_no_paren",
  "set_operator", "set_type", "opt_all", "select_clause", "opt_distinct",
  "select_list", "opt_from_clause", "from_clause", "opt_where",
  "opt_group", "opt_having", "opt_order", "order_list", "order_desc",
  "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "opt_literal_list", "literal_list", "expr_alias", "expr", "operand",
  "scalar_expr", "unary_expr", "binary_expr", "logic_expr", "in_expr",
  "case_expr", "case_list", "exists_expr", "comp_expr", "function_expr",
  "extract_expr", "datetime_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "param_expr", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_with_clause",
  "with_clause", "with_description_list", "with_description",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,    61,
     394,   395,    60,    62,   396,   397,   398,   399,   400,    43,
      45,    42,    47,    37,    94,   401,    91,    93,    40,    41,
      46,    59,    44,    63
};
# endif

#define YYPACT_NINF (-361)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-250)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     446,     9,    45,    79,    91,    45,   -18,    -6,    19,    57,
      45,    45,    68,     6,   153,   167,   149,    -3,  -361,    87,
      87,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,   -26,  -361,   190,    44,  -361,    61,   128,
    -361,   106,   106,    45,   224,    45,   119,  -361,   -48,   117,
     117,    45,  -361,   130,    95,  -361,  -361,  -361,   444,  -361,
     174,  -361,  -361,   152,   -26,   143,  -361,   142,  -361,   260,
      84,   273,   164,    45,    45,   206,  -361,   205,   137,   305,
     311,   311,   287,    45,    45,  -361,   158,   153,  -361,   162,
     323,   322,   184,   191,  -361,  -361,  -361,   -26,   247,   236,
     -26,    31,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
     201,   200,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,   330,   -54,   137,   182,  -361,   311,   369,    -8,   239,
     -65,  -361,   272,  -361,   272,  -361,  -361,  -361,  -361,  -361,
     377,  -361,  -361,   182,  -361,  -361,  -361,   310,  -361,  -361,
    -361,   182,   310,   182,   131,  -361,  -361,    84,  -361,   380,
     280,   383,   274,   -53,   233,   237,   135,   270,   242,   238,
    -361,    17,   -22,   296,  -361,  -361,  -361,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,  -361,   309,
    -361,  -105,   244,  -361,   182,   305,  -361,   360,  -361,  -361,
     246,   148,  -361,   318,   249,  -361,    25,    31,   250,  -361,
     -46,    31,   -22,   359,   -17,  -361,   329,  -361,   599,   163,
    -361,   280,     7,    13,   364,   171,   182,   -33,   146,   261,
     238,   466,   182,    46,   263,   -72,   182,   182,   238,  -361,
     238,   -60,   268,    97,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   323,
      45,  -361,   420,    84,   -22,  -361,   224,    84,  -361,   377,
      11,   206,  -361,   182,  -361,   426,  -361,  -361,  -361,   182,
    -361,  -361,  -361,  -361,   182,   182,   311,  -361,   276,  -361,
    -361,   282,  -361,  -361,  -361,   173,  -361,   383,  -361,  -361,
     182,  -361,  -361,   271,  -361,  -361,  -361,  -361,  -361,  -361,
     344,   108,   155,   182,   182,  -361,   364,   338,    22,  -361,
    -361,  -361,   333,   425,   502,   238,   297,    17,  -361,   357,
     300,   502,   502,   502,   502,   535,   535,   535,   535,    46,
      46,    80,    80,    80,   -63,   301,  -361,  -361,   168,  -361,
     180,  -361,   280,  -361,   265,  -361,   295,  -361,    28,  -361,
     396,  -361,  -361,  -361,   -22,   -22,  -361,   456,   457,  -361,
     367,  -361,  -361,   197,  -361,   182,   182,   182,  -361,    37,
     121,   306,  -361,   238,   502,    17,   308,   202,  -361,  -361,
    -361,  -361,   312,   382,  -361,  -361,  -361,   397,   403,   405,
     392,    11,   482,  -361,  -361,  -361,   368,  -361,   327,   335,
    -361,  -361,   -59,   -22,   189,  -361,   182,  -361,   466,   336,
     207,  -361,  -361,    28,    11,  -361,  -361,  -361,    11,   321,
     331,   182,  -361,  -361,  -361,  -361,   -22,  -361,  -361,  -361,
    -361,   275,   369,   -32,   339,   182,   211,   182,  -361,    14,
     -22,  -361,  -361,   -22,   328,   337,  -361
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     230,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     3,    20,
      20,    18,     8,     9,     7,    10,    12,    17,    14,    15,
      13,    16,    11,     0,   229,     0,   219,    66,    27,     0,
      38,    45,    45,     0,     0,     0,     0,   218,     0,    64,
      64,     0,    36,     0,   231,   232,    39,     1,   230,     2,
       0,     6,     5,   112,     0,    75,    76,   104,    62,     0,
     122,     0,     0,     0,     0,    98,    31,     0,    70,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     4,     0,
       0,    92,     0,     0,    86,    87,    85,     0,    89,     0,
       0,   118,   220,   201,   204,   206,   207,   202,   203,   208,
       0,   121,   123,   196,   197,   198,   205,   199,   200,    26,
      25,     0,     0,    70,     0,    65,     0,     0,     0,     0,
      98,    72,    34,    32,    34,    63,    60,    61,   234,   233,
       0,   111,    91,     0,    79,    78,    80,   104,    81,    88,
      84,     0,   104,     0,     0,    82,    28,     0,    44,     0,
     230,     0,     0,   192,     0,     0,     0,     0,     0,     0,
     194,     0,    97,   126,   133,   134,   135,   128,   130,   136,
     129,   148,   137,   138,   139,   132,   127,   141,   142,     0,
     251,     0,     0,    68,     0,     0,    71,     0,    30,    35,
      23,     0,    21,    95,    93,   119,   228,   118,   103,   105,
     110,   118,   114,   116,   113,   124,     0,    42,     0,     0,
      46,   230,    92,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,   143,     0,     0,     0,     0,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,    74,    73,     0,     0,    19,     0,
       0,    98,    94,     0,   226,     0,   227,   125,    77,     0,
     109,   108,   107,    83,     0,     0,     0,    50,     0,    53,
      52,     0,    51,    56,    49,    59,    41,     0,    43,   180,
       0,   193,   195,     0,   183,   184,   185,   186,   187,   188,
       0,     0,     0,     0,     0,   167,     0,     0,     0,   140,
     131,   159,   160,     0,   155,     0,     0,     0,   146,     0,
     158,   157,   173,   174,   175,   176,   177,   178,   179,   150,
     149,   152,   151,   153,   154,     0,    29,   252,     0,    33,
       0,    22,   230,    96,   209,   211,     0,   213,   224,   212,
     100,   120,   225,   106,   117,   115,    40,     0,     0,    57,
       0,    48,    47,     0,   171,     0,     0,     0,   165,     0,
       0,     0,   189,     0,   156,     0,     0,     0,   147,   190,
      67,    24,     0,     0,   246,   238,   244,   242,   245,   240,
       0,     0,     0,   223,   217,   221,     0,    90,     0,     0,
      58,   181,     0,   169,     0,   168,     0,   172,   191,     0,
       0,   163,   161,   224,     0,   241,   243,   239,     0,   210,
     225,     0,    54,    55,   182,   166,   170,   164,   162,   214,
     235,   247,     0,   102,     0,     0,     0,     0,    99,     0,
     248,   236,   222,   101,   192,     0,   237
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -361,  -361,  -361,   440,  -361,   479,  -361,   231,  -361,  -361,
    -361,  -361,   240,   -80,   370,  -361,  -361,  -361,  -361,   460,
    -361,   208,  -361,  -361,  -361,   458,  -361,  -361,  -361,   384,
    -361,  -361,   314,  -145,    -9,   410,   -61,   445,  -361,  -361,
     279,   289,  -361,  -361,  -361,  -112,  -361,  -361,    78,  -361,
     234,  -361,  -361,   -16,  -228,  -361,    21,   243,  -124,  -129,
    -361,  -361,  -361,  -361,  -361,  -361,   288,  -361,  -361,  -361,
    -361,  -361,  -361,  -361,  -361,    69,   -62,   -74,  -361,  -361,
     -81,  -361,  -361,  -361,  -360,    93,  -361,  -361,  -361,     0,
    -361,    98,   316,  -361,  -361,  -361,  -361,   433,  -361,  -361,
    -361,  -361,    81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    18,    19,    61,   201,   202,    20,   120,
      21,    22,    77,   132,   198,    23,    24,    25,    26,    73,
     219,   220,   295,   371,    27,    83,    28,    29,    30,   128,
      31,   130,   131,    32,   146,   147,    66,    97,    98,   150,
      67,   143,   203,   271,   272,   125,   407,   448,   101,   208,
     209,   282,    91,   155,   204,   110,   111,   205,   206,   173,
     174,   175,   176,   177,   178,   179,   228,   180,   181,   182,
     183,   310,   184,   185,   186,   187,   188,   113,   114,   115,
     116,   117,   118,   353,   354,   355,   356,   357,    46,   358,
     403,   404,   405,   277,    33,    34,    54,    55,   359,   400,
     451,    59,   191
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     172,   134,    37,    93,   318,    40,   133,   133,   112,   141,
      47,    48,   124,   447,    36,   217,   301,   454,   196,   142,
     163,   103,   104,   105,    65,    51,    63,   210,   274,   212,
     214,   274,   285,   159,   325,    35,   236,   280,   231,    80,
     233,   429,   227,    75,    63,    78,   189,   235,    36,   236,
     192,    85,   133,   237,   261,    92,    41,   262,   164,   165,
      52,   326,   236,   281,   160,   244,   237,   193,   441,    63,
     264,   226,   373,   122,   123,   236,   298,   138,    81,   237,
     153,    43,    38,   136,   137,    42,   236,   320,   103,   104,
     105,   236,   237,   259,    39,   215,   166,   195,   154,   387,
     434,   231,   311,   237,   161,   222,    44,   223,   237,   323,
     234,   324,   321,   322,   106,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     273,   167,    64,   236,   163,   103,   104,   105,   163,   103,
     104,   105,    49,   275,   168,   236,   402,   415,    45,    57,
     237,    94,    94,   107,   108,   210,    53,   420,    58,   360,
     364,   365,   237,   303,   302,   170,   299,   169,   170,   352,
      56,    50,   164,   165,   244,   171,   164,   165,   345,   382,
     109,   106,    95,    95,   273,   163,   103,   104,   105,   379,
     380,   278,    60,    68,   328,   283,   384,   255,   256,   257,
     258,   112,   259,   443,    69,   112,   366,   392,   244,   376,
     166,   329,   133,    99,   166,    71,   236,    96,    96,    70,
     107,   108,   416,   164,   165,   207,    72,    76,   106,   236,
     211,   313,   106,   237,   258,    79,   259,    82,   213,   226,
     377,   163,   103,   104,   105,   167,   237,   109,    86,   167,
     314,   412,   413,   414,   418,   381,   315,    87,   168,   314,
     346,   166,   168,   102,    89,   378,   386,   107,   108,    90,
     369,   107,   108,   163,   103,   104,   105,   119,   121,   106,
     165,   169,   170,   124,   348,   169,   170,   370,   350,   171,
     393,   126,   436,   171,   109,   127,   167,   236,   109,   435,
     393,   304,   305,   306,   307,   308,   309,   268,   129,   168,
     269,   229,   165,   238,   237,   103,    64,   166,   107,   108,
     140,   450,   296,   453,   419,   297,   394,   390,   135,   105,
     157,   395,   169,   170,   142,   106,   394,   396,   397,   391,
     171,   395,   157,   144,   239,   109,   393,   396,   397,   166,
     145,   444,   230,   398,   149,   151,   411,  -247,   399,   273,
     156,   422,   157,   398,   273,   168,   438,   106,   399,   273,
     452,   158,   190,   262,   107,   108,   148,   197,   194,   148,
     200,    99,   394,   216,   230,    14,   218,   395,   169,   170,
     240,   224,   221,   396,   397,   225,   171,   168,   232,   445,
     260,   109,   263,   266,   267,   270,   107,   108,   284,   398,
     241,   273,   279,  -247,   399,   286,    63,   242,   243,   316,
     169,   170,   319,   347,   244,   245,   327,  -215,   171,   362,
     374,   375,   325,   109,   367,   246,   247,   248,   249,   250,
     368,   236,   251,   252,  -249,   253,   254,   255,   256,   257,
     258,     1,   259,     1,   388,   385,   259,   401,   389,     2,
     406,     2,   408,   409,   410,   417,     3,   421,     3,   425,
       4,   423,     4,   239,   424,   426,     5,   427,     5,     6,
       7,     6,     7,  -216,   428,   430,   432,   431,   223,   442,
       8,     9,     8,     9,   433,   437,   456,   449,    88,    62,
     351,    10,    74,    10,   199,   372,   349,   162,    84,   265,
     152,   300,   100,   363,   239,   312,   361,   440,   455,   240,
     139,   439,   276,   446,     0,    11,     0,    11,    12,     0,
      12,     0,     0,   383,     0,     0,     0,     0,     0,   317,
       0,     0,     0,    13,     0,    13,     0,   243,     0,    14,
     239,    14,     0,   244,   245,     0,     0,     0,     0,     0,
     240,     0,     0,     0,   246,   247,   248,   249,   250,     0,
       0,   251,   252,     0,   253,   254,   255,   256,   257,   258,
     317,   259,    15,   239,    15,     0,     0,     0,   243,     0,
       0,     0,     0,     0,   244,   245,  -250,     0,     0,     0,
       0,     0,     0,     0,     0,   246,   247,   248,   249,   250,
       0,     0,   251,   252,     0,   253,   254,   255,   256,   257,
     258,     0,   259,   287,   243,     0,     0,     0,     0,   288,
     244,  -250,     0,     0,     0,     0,     0,   289,     0,     0,
       0,  -250,  -250,  -250,   249,   250,     0,     0,   251,   252,
       0,   253,   254,   255,   256,   257,   258,   243,   259,     0,
       0,     0,   290,   244,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -250,  -250,   291,
       0,  -250,  -250,     0,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,   292,     0,     0,     0,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   294
};

static const yytype_int16 yycheck[] =
{
     124,    81,     2,    64,   232,     5,    80,    81,    70,    90,
      10,    11,    77,    45,     3,   160,     3,     3,   130,    12,
       3,     4,     5,     6,    33,    19,    52,   151,     3,   153,
     154,     3,    49,    87,    94,    26,   108,    83,   167,    87,
     169,   401,   166,    43,    52,    45,   126,   171,     3,   108,
      58,    51,   126,   125,   159,    64,    74,   162,    41,    42,
      54,   121,   108,   109,   118,   128,   125,   128,   428,    52,
     194,   104,   300,    73,    74,   108,   221,    86,   126,   125,
      49,    87,     3,    83,    84,   103,   108,   159,     4,     5,
       6,   108,   125,   156,     3,   157,    79,   162,    67,   327,
     159,   230,   226,   125,   158,   158,    87,   160,   125,   238,
     171,   240,   236,   237,    97,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     162,   114,   158,   108,     3,     4,     5,     6,     3,     4,
       5,     6,    74,   118,   127,   108,   118,   110,    91,     0,
     125,     9,     9,   136,   137,   279,     3,   385,   161,   271,
     284,   285,   125,   224,   151,   151,   159,   150,   151,   158,
       3,   103,    41,    42,   128,   158,    41,    42,   259,   157,
     163,    97,    40,    40,   162,     3,     4,     5,     6,   313,
     314,   207,   105,     3,    97,   211,   325,   151,   152,   153,
     154,   263,   156,   431,   160,   267,   286,   352,   128,   101,
      79,   114,   286,    71,    79,    87,   108,    75,    75,   158,
     136,   137,   101,    41,    42,   147,   120,     3,    97,   108,
     152,    85,    97,   125,   154,   116,   156,   120,   107,   104,
      85,     3,     4,     5,     6,   114,   125,   163,   118,   114,
     104,   375,   376,   377,   383,   316,   110,   162,   127,   104,
     260,    79,   127,     3,    90,   110,   327,   136,   137,   117,
      97,   136,   137,     3,     4,     5,     6,     4,   114,    97,
      42,   150,   151,    77,   263,   150,   151,   114,   267,   158,
      25,    86,   416,   158,   163,   158,   114,   108,   163,   110,
      25,   130,   131,   132,   133,   134,   135,   159,     3,   127,
     162,    41,    42,    17,   125,     4,   158,    79,   136,   137,
     158,   445,   159,   447,   385,   162,    61,   159,    41,     6,
     162,    66,   150,   151,    12,    97,    61,    72,    73,   159,
     158,    66,   162,   159,    48,   163,    25,    72,    73,    79,
     159,    76,   114,    88,   107,   119,   159,    92,    93,   162,
     159,   159,   162,    88,   162,   127,   159,    97,    93,   162,
     159,    41,     3,   162,   136,   137,    97,   105,   139,   100,
       3,    71,    61,     3,   114,   105,     3,    66,   150,   151,
      94,   158,   118,    72,    73,   158,   158,   127,   156,   124,
      91,   163,   158,    43,   158,    87,   136,   137,    49,    88,
     114,   162,   162,    92,    93,    86,    52,   121,   122,   158,
     150,   151,   159,     3,   128,   129,   158,   162,   158,     3,
     159,    87,    94,   163,   158,   139,   140,   141,   142,   143,
     158,   108,   146,   147,     0,   149,   150,   151,   152,   153,
     154,     7,   156,     7,    97,   158,   156,   162,   157,    15,
      64,    15,     6,     6,    97,   159,    22,   159,    22,    72,
      26,   159,    26,    48,    92,    72,    32,    72,    32,    35,
      36,    35,    36,   162,    92,     3,   159,   119,   160,   158,
      46,    47,    46,    47,   159,   159,   159,   158,    58,    20,
     269,    57,    42,    57,   134,   297,   266,   123,    50,   195,
     100,   222,    67,   279,    48,   227,   273,   424,   449,    94,
      87,   423,   206,   442,    -1,    81,    -1,    81,    84,    -1,
      84,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    -1,    -1,    99,    -1,    99,    -1,   122,    -1,   105,
      48,   105,    -1,   128,   129,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,   150,   151,   152,   153,   154,
     114,   156,   138,    48,   138,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,   128,   129,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,   146,   147,    -1,   149,   150,   151,   152,   153,
     154,    -1,   156,    24,   122,    -1,    -1,    -1,    -1,    30,
     128,   129,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,   146,   147,
      -1,   149,   150,   151,   152,   153,   154,   122,   156,    -1,
      -1,    -1,    63,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    80,
      -1,   146,   147,    -1,   149,   150,   151,   152,   153,   154,
      -1,   156,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    26,    32,    35,    36,    46,    47,
      57,    81,    84,    99,   105,   138,   165,   166,   167,   168,
     172,   174,   175,   179,   180,   181,   182,   188,   190,   191,
     192,   194,   197,   258,   259,    26,     3,   253,     3,     3,
     253,    74,   103,    87,    87,    91,   252,   253,   253,    74,
     103,    19,    54,     3,   260,   261,     3,     0,   161,   265,
     105,   169,   169,    52,   158,   198,   200,   204,     3,   160,
     158,    87,   120,   183,   183,   253,     3,   176,   253,   116,
      87,   126,   120,   189,   189,   253,   118,   162,   167,    90,
     117,   216,   198,   200,     9,    40,    75,   201,   202,    71,
     201,   212,     3,     4,     5,     6,    97,   136,   137,   163,
     219,   220,   240,   241,   242,   243,   244,   245,   246,     4,
     173,   114,   253,   253,    77,   209,    86,   158,   193,     3,
     195,   196,   177,   241,   177,    41,   253,   253,   198,   261,
     158,   244,    12,   205,   159,   159,   198,   199,   204,   107,
     203,   119,   199,    49,    67,   217,   159,   162,    41,    87,
     118,   158,   193,     3,    41,    42,    79,   114,   127,   150,
     151,   158,   222,   223,   224,   225,   226,   227,   228,   229,
     231,   232,   233,   234,   236,   237,   238,   239,   240,   177,
       3,   266,    58,   200,   139,   162,   209,   105,   178,   178,
       3,   170,   171,   206,   218,   221,   222,   212,   213,   214,
     222,   212,   222,   107,   222,   240,     3,   197,     3,   184,
     185,   118,   158,   160,   158,   158,   104,   222,   230,    41,
     114,   223,   156,   223,   200,   222,   108,   125,    17,    48,
      94,   114,   121,   122,   128,   129,   139,   140,   141,   142,
     143,   146,   147,   149,   150,   151,   152,   153,   154,   156,
      91,   159,   162,   158,   222,   196,    43,   158,   159,   162,
      87,   207,   208,   162,     3,   118,   256,   257,   217,   162,
      83,   109,   215,   217,    49,    49,    86,    24,    30,    38,
      63,    80,    96,   100,   112,   186,   159,   162,   197,   159,
     205,     3,   151,   200,   130,   131,   132,   133,   134,   135,
     235,   222,   230,    85,   104,   110,   158,   114,   218,   159,
     159,   222,   222,   223,   223,    94,   121,   158,    97,   114,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   244,   253,     3,   220,   176,
     220,   171,   158,   247,   248,   249,   250,   251,   253,   262,
     209,   221,     3,   214,   222,   222,   177,   158,   158,    97,
     114,   187,   185,   218,   159,    87,   101,    85,   110,   222,
     222,   200,   157,   108,   223,   158,   200,   218,    97,   157,
     159,   159,   197,    25,    61,    66,    72,    73,    88,    93,
     263,   162,   118,   254,   255,   256,    64,   210,     6,     6,
      97,   159,   222,   222,   222,   110,   101,   159,   223,   200,
     218,   159,   159,   159,    92,    72,    72,    72,    92,   248,
       3,   119,   159,   159,   159,   110,   222,   159,   159,   255,
     249,   248,   158,   218,    76,   124,   266,    45,   211,   158,
     222,   264,   159,   222,     3,   239,   159
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   164,   165,   166,   166,   167,   167,   167,   167,   167,
     167,   168,   168,   168,   168,   168,   168,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   173,   174,   174,   175,
     175,   176,   177,   178,   178,   179,   180,   180,   180,   181,
     182,   182,   182,   182,   183,   183,   184,   184,   185,   186,
     186,   186,   186,   186,   186,   186,   186,   187,   187,   187,
     188,   188,   188,   189,   189,   190,   191,   192,   192,   193,
     193,   194,   195,   195,   196,   197,   197,   197,   198,   198,
     199,   199,   200,   200,   201,   202,   202,   202,   203,   203,
     204,   205,   205,   206,   207,   207,   208,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   214,   215,   215,
     215,   216,   216,   217,   217,   217,   217,   217,   217,   218,
     218,   219,   219,   220,   220,   221,   222,   222,   222,   222,
     222,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   224,   224,   225,   225,   225,   225,   225,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   227,
     227,   228,   228,   228,   228,   229,   229,   229,   229,   230,
     230,   231,   231,   232,   232,   232,   232,   232,   232,   232,
     233,   233,   234,   235,   235,   235,   235,   235,   235,   236,
     237,   238,   239,   239,   239,   239,   240,   240,   240,   240,
     240,   241,   242,   242,   243,   243,   244,   245,   246,   247,
     247,   248,   248,   249,   249,   250,   250,   251,   252,   253,
     253,   254,   254,   255,   255,   256,   256,   257,   257,   258,
     258,   259,   260,   260,   261,   262,   262,   262,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   264,   265,
     265,   266,   266
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     4,     1,     2,     5,     7,
       5,     1,     1,     3,     0,     5,     2,     3,     2,     2,
       8,     7,     6,     7,     3,     0,     1,     3,     3,     1,
       1,     1,     1,     1,     4,     4,     1,     1,     2,     0,
       4,     4,     3,     2,     0,     4,     2,     8,     5,     3,
       0,     5,     1,     3,     3,     2,     2,     6,     3,     3,
       1,     1,     3,     5,     2,     1,     1,     1,     1,     0,
       7,     1,     0,     1,     1,     0,     2,     2,     0,     4,
       0,     2,     0,     3,     0,     1,     3,     2,     1,     1,
       0,     2,     0,     2,     2,     4,     2,     4,     0,     1,
       3,     1,     0,     1,     3,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     2,     2,     2,     3,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     5,     6,     5,     6,     4,     6,     3,     5,     4,
       5,     4,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     6,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     4,     1,     3,     2,     1,     1,
       3,     1,     5,     1,     0,     2,     1,     1,     0,     1,
       0,     2,     1,     3,     3,     4,     6,     8,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     0,     1,     1,
       0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* IDENTIFIER  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1827 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1833 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 146 "bison_parser.y"
            { }
#line 1839 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 146 "bison_parser.y"
            { }
#line 1845 "bison_parser.cpp"
        break;

    case 166: /* statement_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1858 "bison_parser.cpp"
        break;

    case 167: /* statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1864 "bison_parser.cpp"
        break;

    case 168: /* preparable_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1870 "bison_parser.cpp"
        break;

    case 169: /* opt_hints  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1883 "bison_parser.cpp"
        break;

    case 170: /* hint_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1896 "bison_parser.cpp"
        break;

    case 171: /* hint  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 1902 "bison_parser.cpp"
        break;

    case 172: /* prepare_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 1908 "bison_parser.cpp"
        break;

    case 173: /* prepare_target_query  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1914 "bison_parser.cpp"
        break;

    case 174: /* execute_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 1920 "bison_parser.cpp"
        break;

    case 175: /* import_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 1926 "bison_parser.cpp"
        break;

    case 176: /* file_type  */
#line 146 "bison_parser.y"
            { }
#line 1932 "bison_parser.cpp"
        break;

    case 177: /* file_path  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1938 "bison_parser.cpp"
        break;

    case 178: /* opt_file_type  */
#line 146 "bison_parser.y"
            { }
#line 1944 "bison_parser.cpp"
        break;

    case 179: /* export_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 1950 "bison_parser.cpp"
        break;

    case 180: /* show_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 1956 "bison_parser.cpp"
        break;

    case 181: /* use_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).use_stmt)); }
#line 1962 "bison_parser.cpp"
        break;

    case 182: /* create_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 1968 "bison_parser.cpp"
        break;

    case 183: /* opt_not_exists  */
#line 146 "bison_parser.y"
            { }
#line 1974 "bison_parser.cpp"
        break;

    case 184: /* column_def_commalist  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 1987 "bison_parser.cpp"
        break;

    case 185: /* column_def  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 1993 "bison_parser.cpp"
        break;

    case 186: /* column_type  */
#line 146 "bison_parser.y"
            { }
#line 1999 "bison_parser.cpp"
        break;

    case 187: /* opt_column_nullable  */
#line 146 "bison_parser.y"
            { }
#line 2005 "bison_parser.cpp"
        break;

    case 188: /* drop_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2011 "bison_parser.cpp"
        break;

    case 189: /* opt_exists  */
#line 146 "bison_parser.y"
            { }
#line 2017 "bison_parser.cpp"
        break;

    case 190: /* delete_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2023 "bison_parser.cpp"
        break;

    case 191: /* truncate_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2029 "bison_parser.cpp"
        break;

    case 192: /* insert_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2035 "bison_parser.cpp"
        break;

    case 193: /* opt_column_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2048 "bison_parser.cpp"
        break;

    case 194: /* update_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2054 "bison_parser.cpp"
        break;

    case 195: /* update_clause_commalist  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2067 "bison_parser.cpp"
        break;

    case 196: /* update_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2073 "bison_parser.cpp"
        break;

    case 197: /* select_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2079 "bison_parser.cpp"
        break;

    case 198: /* select_with_paren  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2085 "bison_parser.cpp"
        break;

    case 199: /* select_paren_or_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2091 "bison_parser.cpp"
        break;

    case 200: /* select_no_paren  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2097 "bison_parser.cpp"
        break;

    case 204: /* select_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2103 "bison_parser.cpp"
        break;

    case 205: /* opt_distinct  */
#line 146 "bison_parser.y"
            { }
#line 2109 "bison_parser.cpp"
        break;

    case 206: /* select_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2122 "bison_parser.cpp"
        break;

    case 207: /* opt_from_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2128 "bison_parser.cpp"
        break;

    case 208: /* from_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2134 "bison_parser.cpp"
        break;

    case 209: /* opt_where  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2140 "bison_parser.cpp"
        break;

    case 210: /* opt_group  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2146 "bison_parser.cpp"
        break;

    case 211: /* opt_having  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2152 "bison_parser.cpp"
        break;

    case 212: /* opt_order  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2165 "bison_parser.cpp"
        break;

    case 213: /* order_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2178 "bison_parser.cpp"
        break;

    case 214: /* order_desc  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2184 "bison_parser.cpp"
        break;

    case 215: /* opt_order_type  */
#line 146 "bison_parser.y"
            { }
#line 2190 "bison_parser.cpp"
        break;

    case 216: /* opt_top  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2196 "bison_parser.cpp"
        break;

    case 217: /* opt_limit  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2202 "bison_parser.cpp"
        break;

    case 218: /* expr_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2215 "bison_parser.cpp"
        break;

    case 219: /* opt_literal_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2228 "bison_parser.cpp"
        break;

    case 220: /* literal_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2241 "bison_parser.cpp"
        break;

    case 221: /* expr_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2247 "bison_parser.cpp"
        break;

    case 222: /* expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2253 "bison_parser.cpp"
        break;

    case 223: /* operand  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2259 "bison_parser.cpp"
        break;

    case 224: /* scalar_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2265 "bison_parser.cpp"
        break;

    case 225: /* unary_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2271 "bison_parser.cpp"
        break;

    case 226: /* binary_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2277 "bison_parser.cpp"
        break;

    case 227: /* logic_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2283 "bison_parser.cpp"
        break;

    case 228: /* in_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2289 "bison_parser.cpp"
        break;

    case 229: /* case_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2295 "bison_parser.cpp"
        break;

    case 230: /* case_list  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2301 "bison_parser.cpp"
        break;

    case 231: /* exists_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2307 "bison_parser.cpp"
        break;

    case 232: /* comp_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2313 "bison_parser.cpp"
        break;

    case 233: /* function_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2319 "bison_parser.cpp"
        break;

    case 234: /* extract_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2325 "bison_parser.cpp"
        break;

    case 235: /* datetime_field  */
#line 146 "bison_parser.y"
            { }
#line 2331 "bison_parser.cpp"
        break;

    case 236: /* array_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2337 "bison_parser.cpp"
        break;

    case 237: /* array_index  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2343 "bison_parser.cpp"
        break;

    case 238: /* between_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2349 "bison_parser.cpp"
        break;

    case 239: /* column_name  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2355 "bison_parser.cpp"
        break;

    case 240: /* literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2361 "bison_parser.cpp"
        break;

    case 241: /* string_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2367 "bison_parser.cpp"
        break;

    case 242: /* bool_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2373 "bison_parser.cpp"
        break;

    case 243: /* num_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2379 "bison_parser.cpp"
        break;

    case 244: /* int_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2385 "bison_parser.cpp"
        break;

    case 245: /* null_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2391 "bison_parser.cpp"
        break;

    case 246: /* param_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2397 "bison_parser.cpp"
        break;

    case 247: /* table_ref  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2403 "bison_parser.cpp"
        break;

    case 248: /* table_ref_atomic  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2409 "bison_parser.cpp"
        break;

    case 249: /* nonjoin_table_ref_atomic  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2415 "bison_parser.cpp"
        break;

    case 250: /* table_ref_commalist  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2428 "bison_parser.cpp"
        break;

    case 251: /* table_ref_name  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2434 "bison_parser.cpp"
        break;

    case 252: /* table_ref_name_no_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2440 "bison_parser.cpp"
        break;

    case 253: /* table_name  */
#line 147 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2446 "bison_parser.cpp"
        break;

    case 254: /* table_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2452 "bison_parser.cpp"
        break;

    case 255: /* opt_table_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2458 "bison_parser.cpp"
        break;

    case 256: /* alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2464 "bison_parser.cpp"
        break;

    case 257: /* opt_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2470 "bison_parser.cpp"
        break;

    case 258: /* opt_with_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2476 "bison_parser.cpp"
        break;

    case 259: /* with_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2482 "bison_parser.cpp"
        break;

    case 260: /* with_description_list  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2488 "bison_parser.cpp"
        break;

    case 261: /* with_description  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2494 "bison_parser.cpp"
        break;

    case 262: /* join_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2500 "bison_parser.cpp"
        break;

    case 263: /* opt_join_type  */
#line 146 "bison_parser.y"
            { }
#line 2506 "bison_parser.cpp"
        break;

    case 264: /* join_condition  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2512 "bison_parser.cpp"
        break;

    case 266: /* ident_commalist  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2525 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2643 "bison_parser.cpp"

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 267 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2858 "bison_parser.cpp"
    break;

  case 3:
#line 288 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2869 "bison_parser.cpp"
    break;

  case 4:
#line 294 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2880 "bison_parser.cpp"
    break;

  case 5:
#line 303 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2889 "bison_parser.cpp"
    break;

  case 6:
#line 307 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2898 "bison_parser.cpp"
    break;

  case 7:
#line 311 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2906 "bison_parser.cpp"
    break;

  case 8:
#line 314 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		}
#line 2914 "bison_parser.cpp"
    break;

  case 9:
#line 317 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		}
#line 2922 "bison_parser.cpp"
    break;

  case 10:
#line 320 "bison_parser.y"
                          {
			(yyval.statement) = (yyvsp[0].use_stmt);
	    }
#line 2930 "bison_parser.cpp"
    break;

  case 11:
#line 327 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2936 "bison_parser.cpp"
    break;

  case 12:
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2942 "bison_parser.cpp"
    break;

  case 13:
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2948 "bison_parser.cpp"
    break;

  case 14:
#line 330 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2954 "bison_parser.cpp"
    break;

  case 15:
#line 331 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 2960 "bison_parser.cpp"
    break;

  case 16:
#line 332 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 2966 "bison_parser.cpp"
    break;

  case 17:
#line 333 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 2972 "bison_parser.cpp"
    break;

  case 18:
#line 334 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 2978 "bison_parser.cpp"
    break;

  case 19:
#line 343 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 2984 "bison_parser.cpp"
    break;

  case 20:
#line 344 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 2990 "bison_parser.cpp"
    break;

  case 21:
#line 349 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 2996 "bison_parser.cpp"
    break;

  case 22:
#line 350 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3002 "bison_parser.cpp"
    break;

  case 23:
#line 354 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3011 "bison_parser.cpp"
    break;

  case 24:
#line 358 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3021 "bison_parser.cpp"
    break;

  case 25:
#line 370 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3031 "bison_parser.cpp"
    break;

  case 27:
#line 380 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3040 "bison_parser.cpp"
    break;

  case 28:
#line 384 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3050 "bison_parser.cpp"
    break;

  case 29:
#line 398 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3061 "bison_parser.cpp"
    break;

  case 30:
#line 404 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3072 "bison_parser.cpp"
    break;

  case 31:
#line 413 "bison_parser.y"
                           {
			if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
				(yyval.import_type_t) = kImportCSV;
			} else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
				(yyval.import_type_t) = kImportTbl;
			} else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
				(yyval.import_type_t) = kImportBinary;
			} else {
				free((yyvsp[0].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
				YYERROR;
			}
			free((yyvsp[0].sval));
		}
#line 3091 "bison_parser.cpp"
    break;

  case 32:
#line 430 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3097 "bison_parser.cpp"
    break;

  case 33:
#line 434 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3105 "bison_parser.cpp"
    break;

  case 34:
#line 437 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3111 "bison_parser.cpp"
    break;

  case 35:
#line 446 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3122 "bison_parser.cpp"
    break;

  case 36:
#line 460 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3130 "bison_parser.cpp"
    break;

  case 37:
#line 463 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3140 "bison_parser.cpp"
    break;

  case 38:
#line 468 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3150 "bison_parser.cpp"
    break;

  case 39:
#line 480 "bison_parser.y"
                               {
			(yyval.use_stmt) = new UseStatement();
			(yyval.use_stmt)->name = (yyvsp[0].sval);
		}
#line 3159 "bison_parser.cpp"
    break;

  case 40:
#line 492 "bison_parser.y"
                                                                                      {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
				free((yyvsp[-2].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
			 	YYERROR;
			}
			free((yyvsp[-2].sval));
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3177 "bison_parser.cpp"
    break;

  case 41:
#line 505 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3189 "bison_parser.cpp"
    break;

  case 42:
#line 512 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3201 "bison_parser.cpp"
    break;

  case 43:
#line 519 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3214 "bison_parser.cpp"
    break;

  case 44:
#line 530 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3220 "bison_parser.cpp"
    break;

  case 45:
#line 531 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3226 "bison_parser.cpp"
    break;

  case 46:
#line 535 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3232 "bison_parser.cpp"
    break;

  case 47:
#line 536 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3238 "bison_parser.cpp"
    break;

  case 48:
#line 540 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3246 "bison_parser.cpp"
    break;

  case 49:
#line 546 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3252 "bison_parser.cpp"
    break;

  case 50:
#line 547 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3258 "bison_parser.cpp"
    break;

  case 51:
#line 548 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3264 "bison_parser.cpp"
    break;

  case 52:
#line 549 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3270 "bison_parser.cpp"
    break;

  case 53:
#line 550 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3276 "bison_parser.cpp"
    break;

  case 54:
#line 551 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3282 "bison_parser.cpp"
    break;

  case 55:
#line 552 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3288 "bison_parser.cpp"
    break;

  case 56:
#line 553 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3294 "bison_parser.cpp"
    break;

  case 57:
#line 557 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3300 "bison_parser.cpp"
    break;

  case 58:
#line 558 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3306 "bison_parser.cpp"
    break;

  case 59:
#line 559 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3312 "bison_parser.cpp"
    break;

  case 60:
#line 569 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3323 "bison_parser.cpp"
    break;

  case 61:
#line 575 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3334 "bison_parser.cpp"
    break;

  case 62:
#line 581 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3344 "bison_parser.cpp"
    break;

  case 63:
#line 589 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3350 "bison_parser.cpp"
    break;

  case 64:
#line 590 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3356 "bison_parser.cpp"
    break;

  case 65:
#line 599 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3367 "bison_parser.cpp"
    break;

  case 66:
#line 608 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3377 "bison_parser.cpp"
    break;

  case 67:
#line 621 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3389 "bison_parser.cpp"
    break;

  case 68:
#line 628 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3401 "bison_parser.cpp"
    break;

  case 69:
#line 639 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3407 "bison_parser.cpp"
    break;

  case 70:
#line 640 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3413 "bison_parser.cpp"
    break;

  case 71:
#line 650 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3424 "bison_parser.cpp"
    break;

  case 72:
#line 659 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3430 "bison_parser.cpp"
    break;

  case 73:
#line 660 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3436 "bison_parser.cpp"
    break;

  case 74:
#line 664 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3446 "bison_parser.cpp"
    break;

  case 75:
#line 676 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3455 "bison_parser.cpp"
    break;

  case 76:
#line 680 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3464 "bison_parser.cpp"
    break;

  case 77:
#line 684 "bison_parser.y"
                                                                                                          {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3484 "bison_parser.cpp"
    break;

  case 78:
#line 702 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3490 "bison_parser.cpp"
    break;

  case 79:
#line 703 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3496 "bison_parser.cpp"
    break;

  case 82:
#line 712 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3511 "bison_parser.cpp"
    break;

  case 83:
#line 722 "bison_parser.y"
                                                                                      {
			// TODO: allow multiple unions (through linked list)
			// TODO: capture type of set_operator
			// TODO: might overwrite order and limit of first select here
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			(yyval.select_stmt)->unionSelect = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3530 "bison_parser.cpp"
    break;

  case 90:
#line 754 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3544 "bison_parser.cpp"
    break;

  case 91:
#line 766 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3550 "bison_parser.cpp"
    break;

  case 92:
#line 767 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3556 "bison_parser.cpp"
    break;

  case 94:
#line 775 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3562 "bison_parser.cpp"
    break;

  case 95:
#line 776 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 3568 "bison_parser.cpp"
    break;

  case 96:
#line 780 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3574 "bison_parser.cpp"
    break;

  case 97:
#line 785 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3580 "bison_parser.cpp"
    break;

  case 98:
#line 786 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3586 "bison_parser.cpp"
    break;

  case 99:
#line 790 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3596 "bison_parser.cpp"
    break;

  case 100:
#line 795 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 3602 "bison_parser.cpp"
    break;

  case 101:
#line 799 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 3608 "bison_parser.cpp"
    break;

  case 102:
#line 800 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 3614 "bison_parser.cpp"
    break;

  case 103:
#line 804 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3620 "bison_parser.cpp"
    break;

  case 104:
#line 805 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 3626 "bison_parser.cpp"
    break;

  case 105:
#line 809 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3632 "bison_parser.cpp"
    break;

  case 106:
#line 810 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3638 "bison_parser.cpp"
    break;

  case 107:
#line 814 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3644 "bison_parser.cpp"
    break;

  case 108:
#line 818 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3650 "bison_parser.cpp"
    break;

  case 109:
#line 819 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3656 "bison_parser.cpp"
    break;

  case 110:
#line 820 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 3662 "bison_parser.cpp"
    break;

  case 111:
#line 826 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3668 "bison_parser.cpp"
    break;

  case 112:
#line 827 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3674 "bison_parser.cpp"
    break;

  case 113:
#line 831 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3680 "bison_parser.cpp"
    break;

  case 114:
#line 832 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3686 "bison_parser.cpp"
    break;

  case 115:
#line 833 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3692 "bison_parser.cpp"
    break;

  case 116:
#line 834 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3698 "bison_parser.cpp"
    break;

  case 117:
#line 835 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3704 "bison_parser.cpp"
    break;

  case 118:
#line 836 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 3710 "bison_parser.cpp"
    break;

  case 119:
#line 843 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3716 "bison_parser.cpp"
    break;

  case 120:
#line 844 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3722 "bison_parser.cpp"
    break;

  case 121:
#line 848 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3728 "bison_parser.cpp"
    break;

  case 122:
#line 849 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 3734 "bison_parser.cpp"
    break;

  case 123:
#line 853 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3740 "bison_parser.cpp"
    break;

  case 124:
#line 854 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3746 "bison_parser.cpp"
    break;

  case 125:
#line 858 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3758 "bison_parser.cpp"
    break;

  case 131:
#line 876 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 3764 "bison_parser.cpp"
    break;

  case 140:
#line 885 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3770 "bison_parser.cpp"
    break;

  case 143:
#line 894 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3776 "bison_parser.cpp"
    break;

  case 144:
#line 895 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3782 "bison_parser.cpp"
    break;

  case 145:
#line 896 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3788 "bison_parser.cpp"
    break;

  case 146:
#line 897 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3794 "bison_parser.cpp"
    break;

  case 147:
#line 898 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3800 "bison_parser.cpp"
    break;

  case 149:
#line 903 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3806 "bison_parser.cpp"
    break;

  case 150:
#line 904 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3812 "bison_parser.cpp"
    break;

  case 151:
#line 905 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3818 "bison_parser.cpp"
    break;

  case 152:
#line 906 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3824 "bison_parser.cpp"
    break;

  case 153:
#line 907 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3830 "bison_parser.cpp"
    break;

  case 154:
#line 908 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3836 "bison_parser.cpp"
    break;

  case 155:
#line 909 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3842 "bison_parser.cpp"
    break;

  case 156:
#line 910 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3848 "bison_parser.cpp"
    break;

  case 157:
#line 911 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3854 "bison_parser.cpp"
    break;

  case 158:
#line 912 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 3860 "bison_parser.cpp"
    break;

  case 159:
#line 916 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 3866 "bison_parser.cpp"
    break;

  case 160:
#line 917 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 3872 "bison_parser.cpp"
    break;

  case 161:
#line 921 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 3878 "bison_parser.cpp"
    break;

  case 162:
#line 922 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 3884 "bison_parser.cpp"
    break;

  case 163:
#line 923 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 3890 "bison_parser.cpp"
    break;

  case 164:
#line 924 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 3896 "bison_parser.cpp"
    break;

  case 165:
#line 930 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 3902 "bison_parser.cpp"
    break;

  case 166:
#line 931 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3908 "bison_parser.cpp"
    break;

  case 167:
#line 932 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 3914 "bison_parser.cpp"
    break;

  case 168:
#line 933 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 3920 "bison_parser.cpp"
    break;

  case 169:
#line 937 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3926 "bison_parser.cpp"
    break;

  case 170:
#line 938 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 3932 "bison_parser.cpp"
    break;

  case 171:
#line 942 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 3938 "bison_parser.cpp"
    break;

  case 172:
#line 943 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 3944 "bison_parser.cpp"
    break;

  case 173:
#line 947 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3950 "bison_parser.cpp"
    break;

  case 174:
#line 948 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 3956 "bison_parser.cpp"
    break;

  case 175:
#line 949 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 3962 "bison_parser.cpp"
    break;

  case 176:
#line 950 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 3968 "bison_parser.cpp"
    break;

  case 177:
#line 951 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 3974 "bison_parser.cpp"
    break;

  case 178:
#line 952 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 3980 "bison_parser.cpp"
    break;

  case 179:
#line 953 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 3986 "bison_parser.cpp"
    break;

  case 180:
#line 957 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 3992 "bison_parser.cpp"
    break;

  case 181:
#line 958 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 3998 "bison_parser.cpp"
    break;

  case 182:
#line 962 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4004 "bison_parser.cpp"
    break;

  case 183:
#line 966 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4010 "bison_parser.cpp"
    break;

  case 184:
#line 967 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4016 "bison_parser.cpp"
    break;

  case 185:
#line 968 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4022 "bison_parser.cpp"
    break;

  case 186:
#line 969 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4028 "bison_parser.cpp"
    break;

  case 187:
#line 970 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4034 "bison_parser.cpp"
    break;

  case 188:
#line 971 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4040 "bison_parser.cpp"
    break;

  case 189:
#line 975 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4046 "bison_parser.cpp"
    break;

  case 190:
#line 979 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4052 "bison_parser.cpp"
    break;

  case 191:
#line 983 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4058 "bison_parser.cpp"
    break;

  case 192:
#line 987 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4064 "bison_parser.cpp"
    break;

  case 193:
#line 988 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4070 "bison_parser.cpp"
    break;

  case 194:
#line 989 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4076 "bison_parser.cpp"
    break;

  case 195:
#line 990 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4082 "bison_parser.cpp"
    break;

  case 201:
#line 1002 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4088 "bison_parser.cpp"
    break;

  case 202:
#line 1006 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4094 "bison_parser.cpp"
    break;

  case 203:
#line 1007 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4100 "bison_parser.cpp"
    break;

  case 204:
#line 1011 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4106 "bison_parser.cpp"
    break;

  case 206:
#line 1016 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4112 "bison_parser.cpp"
    break;

  case 207:
#line 1020 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4118 "bison_parser.cpp"
    break;

  case 208:
#line 1024 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4128 "bison_parser.cpp"
    break;

  case 210:
#line 1037 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4139 "bison_parser.cpp"
    break;

  case 214:
#line 1053 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4150 "bison_parser.cpp"
    break;

  case 215:
#line 1062 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4156 "bison_parser.cpp"
    break;

  case 216:
#line 1063 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4162 "bison_parser.cpp"
    break;

  case 217:
#line 1068 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4174 "bison_parser.cpp"
    break;

  case 218:
#line 1079 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4184 "bison_parser.cpp"
    break;

  case 219:
#line 1088 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4190 "bison_parser.cpp"
    break;

  case 220:
#line 1089 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4196 "bison_parser.cpp"
    break;

  case 222:
#line 1095 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4202 "bison_parser.cpp"
    break;

  case 224:
#line 1101 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4208 "bison_parser.cpp"
    break;

  case 225:
#line 1106 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4214 "bison_parser.cpp"
    break;

  case 226:
#line 1107 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4220 "bison_parser.cpp"
    break;

  case 228:
#line 1113 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4226 "bison_parser.cpp"
    break;

  case 230:
#line 1123 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4232 "bison_parser.cpp"
    break;

  case 231:
#line 1127 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4238 "bison_parser.cpp"
    break;

  case 232:
#line 1131 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4247 "bison_parser.cpp"
    break;

  case 233:
#line 1135 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4256 "bison_parser.cpp"
    break;

  case 234:
#line 1142 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4266 "bison_parser.cpp"
    break;

  case 235:
#line 1156 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4278 "bison_parser.cpp"
    break;

  case 236:
#line 1164 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4291 "bison_parser.cpp"
    break;

  case 237:
#line 1174 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4311 "bison_parser.cpp"
    break;

  case 238:
#line 1192 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4317 "bison_parser.cpp"
    break;

  case 239:
#line 1193 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4323 "bison_parser.cpp"
    break;

  case 240:
#line 1194 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4329 "bison_parser.cpp"
    break;

  case 241:
#line 1195 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4335 "bison_parser.cpp"
    break;

  case 242:
#line 1196 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4341 "bison_parser.cpp"
    break;

  case 243:
#line 1197 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4347 "bison_parser.cpp"
    break;

  case 244:
#line 1198 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4353 "bison_parser.cpp"
    break;

  case 245:
#line 1199 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4359 "bison_parser.cpp"
    break;

  case 246:
#line 1200 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4365 "bison_parser.cpp"
    break;

  case 247:
#line 1201 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4371 "bison_parser.cpp"
    break;

  case 251:
#line 1221 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4377 "bison_parser.cpp"
    break;

  case 252:
#line 1222 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4383 "bison_parser.cpp"
    break;


#line 4387 "bison_parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1225 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
