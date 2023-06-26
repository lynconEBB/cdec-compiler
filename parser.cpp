// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// "%code top" blocks.
#line 34 "parser.y"

    #include <iostream>
    #include "scanner.h"
    #include "parser.h"
    #include "driver.h"

    static Cd::Parser::symbol_type yylex(Cd::Scanner& scanner) {
        return scanner.getNextToken();
    }

#line 50 "parser.cpp"




#include "parser.h"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 5 "parser.y"
namespace  Cd  {
#line 131 "parser.cpp"

  /// Build a parser object.
   Parser :: Parser  (Cd::Scanner& scanner_yyarg, Cd::Driver& driver_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg)
  {}

   Parser ::~ Parser  ()
  {}

   Parser ::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
   Parser ::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

   Parser ::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
   Parser ::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
   Parser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

   Parser ::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

   Parser ::symbol_kind_type
   Parser ::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

   Parser ::stack_symbol_type::stack_symbol_type ()
  {}

   Parser ::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_imports: // imports
      case symbol_kind::S_import: // import
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_names: // names
      case symbol_kind::S_variable: // variable
      case symbol_kind::S_array: // array
      case symbol_kind::S_initialization: // initialization
      case symbol_kind::S_scalar_initialization: // scalar_initialization
      case symbol_kind::S_vector_initialization: // vector_initialization
      case symbol_kind::S_values: // values
      case symbol_kind::S_literal: // literal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_else_if: // else_if
      case symbol_kind::S_optional_else: // optional_else
      case symbol_kind::S_for_statement: // for_statement
      case symbol_kind::S_while_statement: // while_statement
      case symbol_kind::S_tail: // tail
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_io_statement: // io_statement
      case symbol_kind::S_statement: // statement
        value.YY_MOVE_OR_COPY< Node* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ID: // ID
        value.YY_MOVE_OR_COPY< SymbolInfo* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_DOUBLE: // DOUBLE
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_STRING: // STRING
        value.YY_MOVE_OR_COPY< TokenType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRLIT: // STRLIT
        value.YY_MOVE_OR_COPY< std::variant<int,double,char,std::string> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

   Parser ::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_imports: // imports
      case symbol_kind::S_import: // import
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_names: // names
      case symbol_kind::S_variable: // variable
      case symbol_kind::S_array: // array
      case symbol_kind::S_initialization: // initialization
      case symbol_kind::S_scalar_initialization: // scalar_initialization
      case symbol_kind::S_vector_initialization: // vector_initialization
      case symbol_kind::S_values: // values
      case symbol_kind::S_literal: // literal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_else_if: // else_if
      case symbol_kind::S_optional_else: // optional_else
      case symbol_kind::S_for_statement: // for_statement
      case symbol_kind::S_while_statement: // while_statement
      case symbol_kind::S_tail: // tail
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_io_statement: // io_statement
      case symbol_kind::S_statement: // statement
        value.move< Node* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ID: // ID
        value.move< SymbolInfo* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_DOUBLE: // DOUBLE
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_STRING: // STRING
        value.move< TokenType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRLIT: // STRLIT
        value.move< std::variant<int,double,char,std::string> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
   Parser ::stack_symbol_type&
   Parser ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_imports: // imports
      case symbol_kind::S_import: // import
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_names: // names
      case symbol_kind::S_variable: // variable
      case symbol_kind::S_array: // array
      case symbol_kind::S_initialization: // initialization
      case symbol_kind::S_scalar_initialization: // scalar_initialization
      case symbol_kind::S_vector_initialization: // vector_initialization
      case symbol_kind::S_values: // values
      case symbol_kind::S_literal: // literal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_else_if: // else_if
      case symbol_kind::S_optional_else: // optional_else
      case symbol_kind::S_for_statement: // for_statement
      case symbol_kind::S_while_statement: // while_statement
      case symbol_kind::S_tail: // tail
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_io_statement: // io_statement
      case symbol_kind::S_statement: // statement
        value.copy< Node* > (that.value);
        break;

      case symbol_kind::S_ID: // ID
        value.copy< SymbolInfo* > (that.value);
        break;

      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_DOUBLE: // DOUBLE
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_STRING: // STRING
        value.copy< TokenType > (that.value);
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRLIT: // STRLIT
        value.copy< std::variant<int,double,char,std::string> > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

   Parser ::stack_symbol_type&
   Parser ::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_imports: // imports
      case symbol_kind::S_import: // import
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_names: // names
      case symbol_kind::S_variable: // variable
      case symbol_kind::S_array: // array
      case symbol_kind::S_initialization: // initialization
      case symbol_kind::S_scalar_initialization: // scalar_initialization
      case symbol_kind::S_vector_initialization: // vector_initialization
      case symbol_kind::S_values: // values
      case symbol_kind::S_literal: // literal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_else_if: // else_if
      case symbol_kind::S_optional_else: // optional_else
      case symbol_kind::S_for_statement: // for_statement
      case symbol_kind::S_while_statement: // while_statement
      case symbol_kind::S_tail: // tail
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_io_statement: // io_statement
      case symbol_kind::S_statement: // statement
        value.move< Node* > (that.value);
        break;

      case symbol_kind::S_ID: // ID
        value.move< SymbolInfo* > (that.value);
        break;

      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_DOUBLE: // DOUBLE
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_STRING: // STRING
        value.move< TokenType > (that.value);
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRLIT: // STRLIT
        value.move< std::variant<int,double,char,std::string> > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
   Parser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
   Parser ::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
   Parser ::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
   Parser ::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
   Parser ::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   Parser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   Parser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   Parser ::debug_level_type
   Parser ::debug_level () const
  {
    return yydebug_;
  }

  void
   Parser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

   Parser ::state_type
   Parser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
   Parser ::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
   Parser ::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
   Parser ::operator() ()
  {
    return parse ();
  }

  int
   Parser ::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (scanner));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_imports: // imports
      case symbol_kind::S_import: // import
      case symbol_kind::S_declarations: // declarations
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_type: // type
      case symbol_kind::S_names: // names
      case symbol_kind::S_variable: // variable
      case symbol_kind::S_array: // array
      case symbol_kind::S_initialization: // initialization
      case symbol_kind::S_scalar_initialization: // scalar_initialization
      case symbol_kind::S_vector_initialization: // vector_initialization
      case symbol_kind::S_values: // values
      case symbol_kind::S_literal: // literal
      case symbol_kind::S_expression: // expression
      case symbol_kind::S_statements: // statements
      case symbol_kind::S_if_statement: // if_statement
      case symbol_kind::S_else_if: // else_if
      case symbol_kind::S_optional_else: // optional_else
      case symbol_kind::S_for_statement: // for_statement
      case symbol_kind::S_while_statement: // while_statement
      case symbol_kind::S_tail: // tail
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_io_statement: // io_statement
      case symbol_kind::S_statement: // statement
        yylhs.value.emplace< Node* > ();
        break;

      case symbol_kind::S_ID: // ID
        yylhs.value.emplace< SymbolInfo* > ();
        break;

      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_DOUBLE: // DOUBLE
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_STRING: // STRING
        yylhs.value.emplace< TokenType > ();
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRLIT: // STRLIT
        yylhs.value.emplace< std::variant<int,double,char,std::string> > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // program: imports declarations statements
#line 78 "parser.y"
    {
        Node* node = new Node("program");
        node->addChild(yystack_[2].value.as < Node* > ());
        node->addChild(yystack_[1].value.as < Node* > ());
        node->addChild(yystack_[0].value.as < Node* > ());
        driver.printAST(node);
    }
#line 755 "parser.cpp"
    break;

  case 3: // imports: imports import
#line 88 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("imports");
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ()); 
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ()); 
    }
#line 765 "parser.cpp"
    break;

  case 4: // imports: %empty
#line 94 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("imports");
    }
#line 773 "parser.cpp"
    break;

  case 5: // import: IMPORT STRLIT SEMI
#line 101 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("import");
        yylhs.value.as < Node* > ()->addChild(new Node("IMPORT"));
        yylhs.value.as < Node* > ()->addChild(new Node("STRLIT", TokenType::STR, std::get<std::string>(yystack_[1].value.as < std::variant<int,double,char,std::string> > ())));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
    }
#line 784 "parser.cpp"
    break;

  case 6: // declarations: declarations declaration
#line 111 "parser.y"
    {
        Node* node = new Node("declarations");
        node->addChild(yystack_[1].value.as < Node* > ());
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 795 "parser.cpp"
    break;

  case 7: // declarations: declaration
#line 118 "parser.y"
    {
        Node* node = new Node("declarations");
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 805 "parser.cpp"
    break;

  case 8: // declaration: type names SEMI
#line 127 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("declaration");
        yylhs.value.as < Node* > ()->type = yystack_[2].value.as < Node* > ()->type;
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));

        std::vector<Node*> variables = yystack_[1].value.as < Node* > ()->getChildsByName("variable");
        for (Node* n : variables) {
            SymbolInfo* symbol = driver.m_symbolTable.find(std::get<std::string>(n->value)); 
            symbol->type = yystack_[2].value.as < Node* > ()->type;
        }

        std::vector<Node*> initializations = yystack_[1].value.as < Node* > ()->getChildsByName("scalar_initialization");
        for (Node* n : initializations) {
            if (n->type != yystack_[2].value.as < Node* > ()->type) {
                std::cout << "[Erro semantico] Tentativa de atribuir valor " << typeToStr(n->type) << " a variavel " 
                << std::get<std::string>(n->children[0]->value) << " do tipo " << typeToStr(yystack_[2].value.as < Node* > ()->type) << " na linha: " 
                << driver.lineNumber << std::endl;
            } else {
                SymbolInfo* symbol = driver.m_symbolTable.find(std::get<std::string>(n->children[0]->value)); 
                symbol->type = yystack_[2].value.as < Node* > ()->type;
                symbol->value = n->value;
            }
        }

        initializations = yystack_[1].value.as < Node* > ()->getChildsByName("vector_initialization");
        for (Node* n : initializations) {
            if (n->children[4]->type != yystack_[2].value.as < Node* > ()->type) {
                std::cout << "[Erro semantico] Tentativa de atribuir valor " << typeToStr(n->children[4]->type) << " a variavel " 
                << std::get<std::string>(n->children[0]->value) << " do tipo vetor de " << typeToStr(yystack_[2].value.as < Node* > ()->type) << " na linha: " 
                << driver.lineNumber << std::endl;
            } else {
                SymbolInfo* symbol = driver.m_symbolTable.find(std::get<std::string>(n->children[0]->value)); 
                symbol->type = yystack_[2].value.as < Node* > ()->type;
            }
        }
    }
#line 848 "parser.cpp"
    break;

  case 9: // declaration: error SEMI
#line 165 "parser.y"
                 {
        std::cout << "[Erro sintático] Não foi possível realizar a declaração da variavel na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 857 "parser.cpp"
    break;

  case 10: // declaration: error RBRACE
#line 169 "parser.y"
                   {
        std::cout << "[Erro sintático] Bloco encontrado anteriormente a todas as declarações na linha : " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 866 "parser.cpp"
    break;

  case 11: // type: INT
#line 177 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("INT", yystack_[0].value.as < TokenType > ()));
    }
#line 875 "parser.cpp"
    break;

  case 12: // type: CHAR
#line 182 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("CHAR", yystack_[0].value.as < TokenType > ()));
    }
#line 884 "parser.cpp"
    break;

  case 13: // type: FLOAT
#line 187 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("FLOAT", yystack_[0].value.as < TokenType > ()));
    }
#line 893 "parser.cpp"
    break;

  case 14: // type: DOUBLE
#line 192 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("DOUBLE", yystack_[0].value.as < TokenType > ()));
    }
#line 902 "parser.cpp"
    break;

  case 15: // type: STRING
#line 197 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("STRING", yystack_[0].value.as < TokenType > ()));
    }
#line 911 "parser.cpp"
    break;

  case 16: // names: names COMMA variable
#line 205 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("COMMA"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 922 "parser.cpp"
    break;

  case 17: // names: names COMMA initialization
#line 212 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("COMMA"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 933 "parser.cpp"
    break;

  case 18: // names: variable
#line 219 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 942 "parser.cpp"
    break;

  case 19: // names: initialization
#line 224 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 951 "parser.cpp"
    break;

  case 20: // variable: ID
#line 232 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("variable", TokenType::UNDEFINED, yystack_[0].value.as < SymbolInfo* > ()->name);
        yylhs.value.as < Node* > ()->addChild(new Node("ID", TokenType::UNDEFINED, yystack_[0].value.as < SymbolInfo* > ()->name));
    }
#line 960 "parser.cpp"
    break;

  case 21: // variable: ID array
#line 237 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("variable", TokenType::ARRAY, yystack_[1].value.as < SymbolInfo* > ()->name);
        yylhs.value.as < Node* > ()->addChild(new Node("ID", TokenType::ARRAY, yystack_[1].value.as < SymbolInfo* > ()->name));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 970 "parser.cpp"
    break;

  case 22: // array: LBRACK expression RBRACK
#line 246 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("array",TokenType::ARRAY);
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACK"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACK"));
    }
#line 981 "parser.cpp"
    break;

  case 23: // array: LBRACK ILIT RBRACK
#line 253 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("array",TokenType::ARRAY);
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACK"));
        yylhs.value.as < Node* > ()->addChild(new Node("ILIT", TokenType::INT, std::get<int>(yystack_[1].value.as < std::variant<int,double,char,std::string> > ())));
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACK"));
    }
#line 992 "parser.cpp"
    break;

  case 24: // initialization: scalar_initialization
#line 263 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("initialization", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1001 "parser.cpp"
    break;

  case 25: // initialization: vector_initialization
#line 268 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("initialization");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1010 "parser.cpp"
    break;

  case 26: // scalar_initialization: ID ASSIGN literal
#line 276 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("scalar_initialization", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value); 
        yylhs.value.as < Node* > ()->type = yystack_[0].value.as < Node* > ()->type;
        yylhs.value.as < Node* > ()->value = yystack_[0].value.as < Node* > ()->value;

        yylhs.value.as < Node* > ()->addChild(new Node("ID", yystack_[0].value.as < Node* > ()->type, yystack_[2].value.as < SymbolInfo* > ()->name));
        yylhs.value.as < Node* > ()->addChild(new Node("ASSIGN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1024 "parser.cpp"
    break;

  case 27: // vector_initialization: ID array ASSIGN LBRACE values RBRACE
#line 289 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("vector_initialization");     
        yylhs.value.as < Node* > ()->addChild(new Node("ID", TokenType::UNDEFINED, yystack_[5].value.as < SymbolInfo* > ()->name));
        yylhs.value.as < Node* > ()->addChild(yystack_[4].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("ASSIGN"));
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACE"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACE"));
    }
#line 1038 "parser.cpp"
    break;

  case 28: // values: values COMMA literal
#line 302 "parser.y"
    {
        if (yystack_[0].value.as < Node* > ()->type != yystack_[2].value.as < Node* > ()->type) {
            std::cout << "[Error semantico] Tipos incopativeis detectados durante inicialiação do vetor na linha: " << driver.lineNumber << std::endl;
            yylhs.value.as < Node* > () = new Node("error");
        } else {
            Node* node = new Node("values", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);     
            node->addChild(yystack_[2].value.as < Node* > ());
            node->addChild(new Node("COMMA"));
            node->addChild(yystack_[0].value.as < Node* > ());
            yylhs.value.as < Node* > () = node;
        }
    }
#line 1055 "parser.cpp"
    break;

  case 29: // values: literal
#line 315 "parser.y"
    {
        Node* node = new Node("values");     
        node->type = yystack_[0].value.as < Node* > ()->type;
        node->value = yystack_[0].value.as < Node* > ()->value;
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 1067 "parser.cpp"
    break;

  case 30: // literal: ILIT
#line 326 "parser.y"
    { 
        Node* node = new Node("ILIT");     
        node->type = TokenType::INT;
        node->value = std::get<int>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 1078 "parser.cpp"
    break;

  case 31: // literal: FLIT
#line 333 "parser.y"
    {
        Node* node = new Node("FLIT");     
        node->type = TokenType::REAL;
        node->value = std::get<double>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 1089 "parser.cpp"
    break;

  case 32: // literal: CHLIT
#line 340 "parser.y"
    {
        Node* node = new Node("CHLIT");     
        node->type = TokenType::CHAR;
        node->value = std::get<char>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 1100 "parser.cpp"
    break;

  case 33: // literal: STRLIT
#line 347 "parser.y"
    {
        Node* node = new Node("STRLIT");     
        node->type = TokenType::STR;
        node->value = std::get<std::string>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 1111 "parser.cpp"
    break;

  case 34: // expression: expression ADD expression
#line 357 "parser.y"
        { 
        if (yystack_[2].value.as < Node* > ()->type != yystack_[0].value.as < Node* > ()->type) {
            std::cout << "[Erro Semantico] Tipos incopativeis encontrados durante uma expressão de soma na linha: " << driver.lineNumber << std::endl;
            yylhs.value.as < Node* > () = new Node("error");
        } else {
            yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
            yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
            yylhs.value.as < Node* > ()->addChild(new Node("ADD"));
            yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
        }
	}
#line 1127 "parser.cpp"
    break;

  case 35: // expression: expression SUB expression
#line 369 "parser.y"
        { 
        if (yystack_[2].value.as < Node* > ()->type != yystack_[0].value.as < Node* > ()->type) {
            error("[Erro Semantico] Tipos incopativeis encontrados durante uma expressão de subtracao");
            yylhs.value.as < Node* > () = new Node("error");
        } else {
            yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
            yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
            yylhs.value.as < Node* > ()->addChild(new Node("SUB"));
            yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
        }
	}
#line 1143 "parser.cpp"
    break;

  case 36: // expression: expression MUL expression
#line 381 "parser.y"
        {
        if (yystack_[2].value.as < Node* > ()->type != yystack_[0].value.as < Node* > ()->type) {
            error("[Erro Semantico] Tipos incopativeis encontrados durante uma expressão de multiplicação");
            yylhs.value.as < Node* > () = new Node("error");
        } else {
            yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
            yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
            yylhs.value.as < Node* > ()->addChild(new Node("MUL"));
            yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
        }
	}
#line 1159 "parser.cpp"
    break;

  case 37: // expression: expression DIV expression
#line 393 "parser.y"
        {
        if (yystack_[2].value.as < Node* > ()->type != yystack_[0].value.as < Node* > ()->type) {
            error("[Erro Semantico] Tipos incopativeis encontrados durante uma expressão de divisão");
            yylhs.value.as < Node* > () = new Node("error");
        } else {
            yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
            yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
            yylhs.value.as < Node* > ()->addChild(new Node("DIV"));
            yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
        }
	}
#line 1175 "parser.cpp"
    break;

  case 38: // expression: ID INC
#line 405 "parser.y"
        {
        SymbolInfo* info = driver.m_symbolTable.find(yystack_[1].value.as < SymbolInfo* > ()->name);
        yylhs.value.as < Node* > () = new Node("expression", info->type, info->value);
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
	}
#line 1186 "parser.cpp"
    break;

  case 39: // expression: INC ID
#line 412 "parser.y"
        {
        SymbolInfo* info = driver.m_symbolTable.find(yystack_[0].value.as < SymbolInfo* > ()->name);
        yylhs.value.as < Node* > () = new Node("expression", info->type, info->value);
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
	}
#line 1197 "parser.cpp"
    break;

  case 40: // expression: ID DEC
#line 419 "parser.y"
        {
        SymbolInfo* info = driver.m_symbolTable.find(yystack_[1].value.as < SymbolInfo* > ()->name);
        yylhs.value.as < Node* > () = new Node("expression", info->type, info->value);
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
	}
#line 1208 "parser.cpp"
    break;

  case 41: // expression: DEC ID
#line 426 "parser.y"
        {
        SymbolInfo* info = driver.m_symbolTable.find(yystack_[0].value.as < SymbolInfo* > ()->name);
        yylhs.value.as < Node* > () = new Node("expression", info->type, info->value);
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID", info->type, info->value));
	}
#line 1219 "parser.cpp"
    break;

  case 42: // expression: expression OR expression
#line 433 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", TokenType::INT);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("OR"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1230 "parser.cpp"
    break;

  case 43: // expression: expression AND expression
#line 440 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", TokenType::INT);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("AND"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1241 "parser.cpp"
    break;

  case 44: // expression: NOT expression
#line 447 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", TokenType::INT);
        yylhs.value.as < Node* > ()->addChild(new Node("NOT"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1251 "parser.cpp"
    break;

  case 45: // expression: expression EQU expression
#line 453 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", TokenType::INT);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("EQU"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1262 "parser.cpp"
    break;

  case 46: // expression: expression REL expression
#line 460 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", TokenType::INT);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("REL"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1273 "parser.cpp"
    break;

  case 47: // expression: LPAREN expression RPAREN
#line 467 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[1].value.as < Node* > ()->type, yystack_[1].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
	}
#line 1284 "parser.cpp"
    break;

  case 48: // expression: variable
#line 474 "parser.y"
        { 
        SymbolInfo* info = driver.m_symbolTable.find(std::get<std::string>(yystack_[0].value.as < Node* > ()->value));
        yylhs.value.as < Node* > () = new Node("expression", info->type, info->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1294 "parser.cpp"
    break;

  case 49: // expression: literal
#line 480 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1303 "parser.cpp"
    break;

  case 50: // statements: %empty
#line 488 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("statements");
    }
#line 1311 "parser.cpp"
    break;

  case 51: // statements: statements statement
#line 492 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("statements");
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1321 "parser.cpp"
    break;

  case 52: // if_statement: IF LPAREN expression RPAREN tail else_if optional_else
#line 501 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("if_statement");
        yylhs.value.as < Node* > ()->addChild(new Node("IF"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[4].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1336 "parser.cpp"
    break;

  case 53: // if_statement: IF LPAREN expression RPAREN tail optional_else
#line 512 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("if_statement");
        yylhs.value.as < Node* > ()->addChild(new Node("IF"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[3].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1350 "parser.cpp"
    break;

  case 54: // if_statement: IF error RBRACE
#line 522 "parser.y"
    {
        std::cout << "[Erro sintático] Bloco if com erro terminado na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1359 "parser.cpp"
    break;

  case 55: // else_if: else_if ELSE IF LPAREN expression RPAREN tail
#line 530 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("else_if");
        yylhs.value.as < Node* > ()->addChild(yystack_[6].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("ELSE"));
        yylhs.value.as < Node* > ()->addChild(new Node("IF"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1374 "parser.cpp"
    break;

  case 56: // else_if: ELSE IF LPAREN expression RPAREN tail
#line 541 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("else_if");
        yylhs.value.as < Node* > ()->addChild(new Node("ELSE"));
        yylhs.value.as < Node* > ()->addChild(new Node("IF"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1388 "parser.cpp"
    break;

  case 57: // else_if: ELSE error RBRACE
#line 551 "parser.y"
    {
        std::cout << "[Erro sintático] Bloco else com erro terminado na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1397 "parser.cpp"
    break;

  case 58: // optional_else: ELSE tail
#line 559 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("optional_else");
        yylhs.value.as < Node* > ()->addChild(new Node("ELSE"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1407 "parser.cpp"
    break;

  case 59: // optional_else: %empty
#line 564 "parser.y"
                 {
        yylhs.value.as < Node* > () = new Node("optional_else");
	}
#line 1415 "parser.cpp"
    break;

  case 60: // for_statement: FOR LPAREN assignment SEMI expression SEMI ID INC RPAREN tail
#line 571 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("for_statement");
        yylhs.value.as < Node* > ()->addChild(new Node("FOR"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[7].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
        yylhs.value.as < Node* > ()->addChild(yystack_[5].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1433 "parser.cpp"
    break;

  case 61: // for_statement: FOR LPAREN assignment SEMI expression SEMI ID DEC RPAREN tail
#line 585 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("for_statement");
        yylhs.value.as < Node* > ()->addChild(new Node("FOR"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[7].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
        yylhs.value.as < Node* > ()->addChild(yystack_[5].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1451 "parser.cpp"
    break;

  case 62: // for_statement: FOR error RBRACE
#line 599 "parser.y"
    {
        std::cout << "[Erro sintático] Bloco FOR com erro terminado na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1460 "parser.cpp"
    break;

  case 63: // while_statement: WHILE LPAREN expression RPAREN tail
#line 607 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("while_statement");
        yylhs.value.as < Node* > ()->addChild(new Node("WHILE"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1473 "parser.cpp"
    break;

  case 64: // while_statement: WHILE error RBRACE
#line 616 "parser.y"
    {
        std::cout << "[Erro sintático] Bloco WHILE com erro terminado na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1482 "parser.cpp"
    break;

  case 65: // tail: LBRACE statements RBRACE
#line 624 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("tail");
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACE"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACE"));
    }
#line 1493 "parser.cpp"
    break;

  case 66: // assignment: variable ASSIGN expression
#line 634 "parser.y"
    {
        SymbolInfo* info = driver.m_symbolTable.find(std::get<std::string>(yystack_[2].value.as < Node* > ()->value));

        if (info->type == TokenType::UNDEFINED) {
            std::cout << "[Erro semantico] Não é possivel atribuir valor a variavel " << std::get<std::string>(yystack_[2].value.as < Node* > ()->value)
            << " pois não foi declarada, erro ocorrido na linha: " << driver.lineNumber << std::endl;
            yylhs.value.as < Node* > () = new Node("error");
        }else if (info->type != yystack_[0].value.as < Node* > ()->type) {
                std::cout << "[Erro semantico] Tentativa de atribuir valor " << typeToStr(yystack_[0].value.as < Node* > ()->type) << " a variavel " 
                << std::get<std::string>(yystack_[2].value.as < Node* > ()->value) << " do tipo " << typeToStr(info->type) << " na linha: " 
                << driver.lineNumber << std::endl;
            yylhs.value.as < Node* > () = new Node("error");
        } else {
            yylhs.value.as < Node* > () = new Node("assignment");
            yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
            yylhs.value.as < Node* > ()->addChild(new Node("ASSIGN"));
            yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
        }
    }
#line 1517 "parser.cpp"
    break;

  case 67: // io_statement: PRINT LPAREN literal RPAREN
#line 657 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("PRINT"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
    }
#line 1529 "parser.cpp"
    break;

  case 68: // io_statement: PRINT LPAREN variable RPAREN
#line 665 "parser.y"
    {

        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("PRINT"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
    }
#line 1542 "parser.cpp"
    break;

  case 69: // io_statement: SCAN LPAREN variable RPAREN
#line 674 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("SCAN"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
    }
#line 1554 "parser.cpp"
    break;

  case 70: // statement: if_statement
#line 685 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1563 "parser.cpp"
    break;

  case 71: // statement: for_statement
#line 690 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1572 "parser.cpp"
    break;

  case 72: // statement: while_statement
#line 695 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1581 "parser.cpp"
    break;

  case 73: // statement: assignment SEMI
#line 700 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1591 "parser.cpp"
    break;

  case 74: // statement: CONTINUE SEMI
#line 706 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("CONTINUE"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1601 "parser.cpp"
    break;

  case 75: // statement: BREAK SEMI
#line 712 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("BREAK"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1611 "parser.cpp"
    break;

  case 76: // statement: ID INC SEMI
#line 718 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1622 "parser.cpp"
    break;

  case 77: // statement: INC ID SEMI
#line 725 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1633 "parser.cpp"
    break;

  case 78: // statement: ID DEC SEMI
#line 732 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1644 "parser.cpp"
    break;

  case 79: // statement: DEC ID SEMI
#line 739 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1655 "parser.cpp"
    break;

  case 80: // statement: io_statement SEMI
#line 746 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
    }
#line 1665 "parser.cpp"
    break;

  case 81: // statement: error SEMI
#line 752 "parser.y"
    {
        std::cout << "[Erro sintático] Expressão mal formatada na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1674 "parser.cpp"
    break;


#line 1678 "parser.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        report_syntax_error (yyctx);
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
   Parser ::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  const char *
   Parser ::symbol_name (symbol_kind_type yysymbol)
  {
    static const char *const yy_sname[] =
    {
    "end of file", "error", "invalid token", "CHAR", "INT", "FLOAT",
  "DOUBLE", "VOID", "STRING", "COMMA", "LPAREN", "RPAREN", "LBRACK",
  "RBRACK", "LBRACE", "RBRACE", "SEMI", "ASSIGN", "REFER", "IF", "ELSE",
  "WHILE", "FOR", "CONTINUE", "BREAK", "RETURN", "IMPORT", "PRINT", "SCAN",
  "ADD", "SUB", "MUL", "DIV", "INC", "DEC", "OR", "AND", "NOT", "EQU",
  "REL", "ILIT", "FLIT", "CHLIT", "STRLIT", "ID", "MINUS", "$accept",
  "program", "imports", "import", "declarations", "declaration", "type",
  "names", "variable", "array", "initialization", "scalar_initialization",
  "vector_initialization", "values", "literal", "expression", "statements",
  "if_statement", "else_if", "optional_else", "for_statement",
  "while_statement", "tail", "assignment", "io_statement", "statement", YY_NULLPTR
    };
    return yy_sname[yysymbol];
  }



  //  Parser ::context.
   Parser ::context::context (const  Parser & yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
   Parser ::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }








  const signed char  Parser ::yypact_ninf_ = -113;

  const signed char  Parser ::yytable_ninf_ = -51;

  const short
   Parser ::yypact_[] =
  {
    -113,    41,    88,  -113,    37,  -113,  -113,  -113,  -113,  -113,
     -12,  -113,    79,  -113,    -1,  -113,  -113,    52,  -113,   110,
      27,    31,  -113,  -113,  -113,  -113,  -113,    54,     9,    10,
      12,    62,    70,    45,    47,    44,    46,   -10,    78,  -113,
    -113,  -113,    89,    92,  -113,   132,   105,   102,    -1,  -113,
    -113,   111,   149,   113,   149,   115,    76,  -113,  -113,   239,
      76,   120,   123,   124,   125,  -113,   149,  -113,  -113,   149,
     106,   107,   149,   139,  -113,  -113,  -113,     4,  -113,  -113,
      86,  -113,  -113,   146,  -113,  -113,  -113,    -3,  -113,   166,
    -113,   151,   148,   159,   160,   168,  -113,  -113,  -113,  -113,
     227,   177,  -113,  -113,  -113,  -113,  -113,  -113,  -113,   149,
     149,   149,   149,   149,   149,   149,   149,   105,   167,   167,
     149,  -113,  -113,  -113,  -113,    35,    35,  -113,  -113,   238,
     211,    42,   255,    39,  -113,  -113,   164,  -113,   216,   105,
    -113,   134,    11,   165,  -113,   136,  -113,  -113,   172,   184,
    -113,    -5,  -113,    43,  -113,   149,   190,   192,   200,   188,
     149,   167,   167,   167,   199,  -113,  -113,  -113,   167,  -113
  };

  const signed char
   Parser ::yydefact_[] =
  {
       4,     0,     0,     1,     0,    12,    11,    13,    14,    15,
       0,     3,     0,     7,     0,    10,     9,     0,     6,     0,
      20,     0,    18,    19,    24,    25,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,    70,
      71,    72,     0,     0,    51,     0,     0,    21,     0,     8,
      81,     0,     0,     0,     0,     0,     0,    74,    75,     0,
       0,     0,     0,     0,     0,    21,     0,    73,    80,     0,
       0,     0,     0,    30,    31,    32,    33,    20,    48,    49,
       0,    30,    26,     0,    16,    17,    54,     0,    64,     0,
      62,    20,     0,     0,     0,     0,    77,    79,    76,    78,
      66,     0,    39,    41,    44,    23,    38,    40,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    67,    69,    47,    34,    35,    36,    37,    42,
      43,    45,    46,     0,    29,    50,    59,    63,     0,     0,
      27,     0,     0,    59,    53,     0,    28,    65,     0,     0,
      58,     0,    52,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,    61,    56,     0,    55
  };

  const short
   Parser ::yypgoto_[] =
  {
    -113,  -113,  -113,  -113,  -113,   202,  -113,  -113,   -14,   201,
     174,  -113,  -113,  -113,   -42,   -51,    90,  -113,  -113,    93,
    -113,  -113,  -112,   183,  -113,  -113
  };

  const unsigned char
   Parser ::yydefgoto_[] =
  {
       0,     1,     2,    11,    12,    13,    14,    21,    78,    65,
      23,    24,    25,   133,    79,    80,    19,    39,   143,   144,
      40,    41,   150,    42,    43,    44
  };

  const short
   Parser ::yytable_[] =
  {
      22,    87,    45,    89,    82,    38,   136,   137,   118,   135,
      51,    53,   148,    55,   156,   100,    45,    94,   101,    52,
      54,   104,    56,    63,    64,   135,   109,   110,   111,   112,
     149,    17,   113,   114,    84,   115,   116,   106,   107,    45,
      48,     3,    38,    20,    46,    93,    95,    49,   139,   165,
     166,   167,    15,    16,   140,    59,   169,    60,   125,   126,
     127,   128,   129,   130,   131,   132,   111,   112,    26,   138,
      50,   109,   110,   111,   112,   134,   157,   158,    57,   -50,
       4,   116,     5,     6,     7,     8,    58,     9,    61,     4,
      62,     5,     6,     7,     8,    66,     9,   146,   -50,   108,
     -50,   -50,   -50,   -50,   159,    67,   -50,   -50,    68,   164,
      -2,    27,   -50,   -50,    10,   109,   110,   111,   112,    83,
      91,   113,   114,   -50,   115,   116,    86,    38,    88,    28,
      90,    29,    30,    31,    32,    27,    96,    33,    34,    97,
      98,    99,    69,    35,    36,    81,    74,    75,    76,   147,
     102,   103,   105,    28,    37,    29,    30,    31,    32,    69,
     117,    33,    34,    45,   120,    70,    71,    35,    36,    72,
     121,   122,    73,    74,    75,    76,    77,   119,    37,   123,
     153,   135,    70,    71,   142,   151,    72,   154,   124,    81,
      74,    75,    76,    77,   155,   109,   110,   111,   112,   163,
     160,   113,   114,   161,   115,   116,   109,   110,   111,   112,
     168,   162,   113,   114,    18,   115,   116,   109,   110,   111,
     112,    47,    85,   113,   114,   141,   115,   116,   109,   110,
     111,   112,   145,     0,   113,   114,   152,   115,   116,    92,
     109,   110,   111,   112,     0,   109,   110,   111,   112,   115,
     116,   113,   114,     0,   115,   116,   109,   110,   111,   112,
       0,     0,   113,   114,     0,   115,   116,   109,   110,   111,
     112,     0,     0,     0,   114,     0,   115,   116,     0,    81,
      74,    75,    76,    91,   109,   110,   111,   112
  };

  const short
   Parser ::yycheck_[] =
  {
      14,    52,    12,    54,    46,    19,   118,   119,    11,    14,
       1,     1,     1,     1,    19,    66,    12,    59,    69,    10,
      10,    72,    10,    33,    34,    14,    29,    30,    31,    32,
      19,    43,    35,    36,    48,    38,    39,    33,    34,    12,
       9,     0,    56,    44,    17,    59,    60,    16,     9,   161,
     162,   163,    15,    16,    15,    10,   168,    10,   109,   110,
     111,   112,   113,   114,   115,   116,    31,    32,    16,   120,
      16,    29,    30,    31,    32,   117,    33,    34,    16,     0,
       1,    39,     3,     4,     5,     6,    16,     8,    44,     1,
      44,     3,     4,     5,     6,    17,     8,   139,    19,    13,
      21,    22,    23,    24,   155,    16,    27,    28,    16,   160,
       0,     1,    33,    34,    26,    29,    30,    31,    32,    17,
      44,    35,    36,    44,    38,    39,    15,   141,    15,    19,
      15,    21,    22,    23,    24,     1,    16,    27,    28,    16,
      16,    16,    10,    33,    34,    40,    41,    42,    43,    15,
      44,    44,    13,    19,    44,    21,    22,    23,    24,    10,
      14,    27,    28,    12,    16,    33,    34,    33,    34,    37,
      11,    11,    40,    41,    42,    43,    44,    11,    44,    11,
      44,    14,    33,    34,    20,    20,    37,    15,    11,    40,
      41,    42,    43,    44,    10,    29,    30,    31,    32,    11,
      10,    35,    36,    11,    38,    39,    29,    30,    31,    32,
      11,    11,    35,    36,    12,    38,    39,    29,    30,    31,
      32,    20,    48,    35,    36,   135,    38,    39,    29,    30,
      31,    32,    16,    -1,    35,    36,   143,    38,    39,    56,
      29,    30,    31,    32,    -1,    29,    30,    31,    32,    38,
      39,    35,    36,    -1,    38,    39,    29,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    38,    39,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    -1,    38,    39,    -1,    40,
      41,    42,    43,    44,    29,    30,    31,    32
  };

  const signed char
   Parser ::yystos_[] =
  {
       0,    47,    48,     0,     1,     3,     4,     5,     6,     8,
      26,    49,    50,    51,    52,    15,    16,    43,    51,    62,
      44,    53,    54,    56,    57,    58,    16,     1,    19,    21,
      22,    23,    24,    27,    28,    33,    34,    44,    54,    63,
      66,    67,    69,    70,    71,    12,    17,    55,     9,    16,
      16,     1,    10,     1,    10,     1,    10,    16,    16,    10,
      10,    44,    44,    33,    34,    55,    17,    16,    16,    10,
      33,    34,    37,    40,    41,    42,    43,    44,    54,    60,
      61,    40,    60,    17,    54,    56,    15,    61,    15,    61,
      15,    44,    69,    54,    60,    54,    16,    16,    16,    16,
      61,    61,    44,    44,    61,    13,    33,    34,    13,    29,
      30,    31,    32,    35,    36,    38,    39,    14,    11,    11,
      16,    11,    11,    11,    11,    61,    61,    61,    61,    61,
      61,    61,    61,    59,    60,    14,    68,    68,    61,     9,
      15,    62,    20,    64,    65,    16,    60,    15,     1,    19,
      68,    20,    65,    44,    15,    10,    19,    33,    34,    61,
      10,    11,    11,    11,    61,    68,    68,    68,    11,    68
  };

  const signed char
   Parser ::yyr1_[] =
  {
       0,    46,    47,    48,    48,    49,    50,    50,    51,    51,
      51,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      54,    54,    55,    55,    56,    56,    57,    58,    59,    59,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    63,    63,    64,    64,    64,    65,    65,
      66,    66,    66,    67,    67,    68,    69,    70,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71
  };

  const signed char
   Parser ::yyr2_[] =
  {
       0,     2,     3,     2,     0,     3,     2,     1,     3,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     2,     3,     3,     1,     1,     3,     6,     3,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     2,     3,     3,     3,     1,     1,
       0,     2,     7,     6,     3,     7,     6,     3,     2,     0,
      10,    10,     3,     5,     3,     3,     3,     4,     4,     4,
       1,     1,     1,     2,     2,     2,     3,     3,     3,     3,
       2,     2
  };




#if YYDEBUG
  const short
   Parser ::yyrline_[] =
  {
       0,    77,    77,    87,    93,   100,   110,   117,   126,   165,
     169,   176,   181,   186,   191,   196,   204,   211,   218,   223,
     231,   236,   245,   252,   262,   267,   275,   288,   301,   314,
     325,   332,   339,   346,   356,   368,   380,   392,   404,   411,
     418,   425,   432,   439,   446,   452,   459,   466,   473,   479,
     487,   491,   500,   511,   521,   529,   540,   550,   558,   564,
     570,   584,   598,   606,   615,   623,   633,   656,   664,   673,
     684,   689,   694,   699,   705,   711,   717,   724,   731,   738,
     745,   751
  };

  void
   Parser ::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
   Parser ::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 5 "parser.y"
} //  Cd 
#line 2150 "parser.cpp"

#line 758 "parser.y"


void Cd::Parser::error(const std::string& message) 
{
    std::cout << "[Error sintático] Na linha: " << driver.lineNumber << " aaaa " <<  message << std::endl;
}

void Cd::Parser::report_syntax_error (const context& ctx) const
{
    int res = 0;
    std::cout << "[Erro sintático] ";
    // Report the tokens expected at this point.
    {
        symbol_kind_type expected[10];

        std::cout << "Esperava-se ";
        int n = ctx.expected_tokens(expected, 10);
        for (int i = 0; i < n; ++i) {
            if (i != 0)
                std::cout << " ou ";

            std::cout << symbol_name (expected[i]);
        }
    }

    {
    symbol_kind_type lookahead = ctx.token();
    if (lookahead != symbol_kind::S_YYEMPTY)
      std::cout << " porém foi colocado " << symbol_name (lookahead);
    }
    std::cout << " na linha " << driver.lineNumber << '\n';
}
