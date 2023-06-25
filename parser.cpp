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
      case symbol_kind::S_assigment: // assigment
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
        value.YY_MOVE_OR_COPY< TokenType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRING: // STRING
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
      case symbol_kind::S_assigment: // assigment
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
        value.move< TokenType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRING: // STRING
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
      case symbol_kind::S_assigment: // assigment
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
        value.copy< TokenType > (that.value);
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRING: // STRING
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
      case symbol_kind::S_assigment: // assigment
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
        value.move< TokenType > (that.value);
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRING: // STRING
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
      case symbol_kind::S_assigment: // assigment
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
        yylhs.value.emplace< TokenType > ();
        break;

      case symbol_kind::S_ILIT: // ILIT
      case symbol_kind::S_FLIT: // FLIT
      case symbol_kind::S_CHLIT: // CHLIT
      case symbol_kind::S_STRING: // STRING
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
  case 2: // program: declarations statements
#line 78 "parser.y"
    {
        Node* node = new Node("program");
        node->addChild(yystack_[1].value.as < Node* > ());
        node->addChild(yystack_[0].value.as < Node* > ());
        driver.printAST(node);
    }
#line 734 "parser.cpp"
    break;

  case 3: // declarations: declarations declaration
#line 88 "parser.y"
    {
        Node* node = new Node("declarations");
        node->addChild(yystack_[1].value.as < Node* > ());
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 745 "parser.cpp"
    break;

  case 4: // declarations: declaration
#line 95 "parser.y"
    {
        Node* node = new Node("declarations");
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 755 "parser.cpp"
    break;

  case 5: // declaration: type names SEMI
#line 104 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("declaration");
        yylhs.value.as < Node* > ()->type = yystack_[2].value.as < Node* > ()->type;
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
    }
#line 767 "parser.cpp"
    break;

  case 6: // declaration: error SEMI
#line 111 "parser.y"
                 {
        std::cout << "ERROR PORRA" << std::endl;
        error("AAAA");
        yyerrok;
        yyclearin;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 779 "parser.cpp"
    break;

  case 7: // type: INT
#line 122 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("INT", yystack_[0].value.as < TokenType > ()));
    }
#line 788 "parser.cpp"
    break;

  case 8: // type: CHAR
#line 127 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("CHAR", yystack_[0].value.as < TokenType > ()));
    }
#line 797 "parser.cpp"
    break;

  case 9: // type: FLOAT
#line 132 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("FLOAT", yystack_[0].value.as < TokenType > ()));
    }
#line 806 "parser.cpp"
    break;

  case 10: // type: DOUBLE
#line 137 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("DOUBLE", yystack_[0].value.as < TokenType > ()));
    }
#line 815 "parser.cpp"
    break;

  case 11: // names: names COMMA variable
#line 145 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("COMMA"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 826 "parser.cpp"
    break;

  case 12: // names: names COMMA initialization
#line 152 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("COMMA"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 837 "parser.cpp"
    break;

  case 13: // names: variable
#line 159 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 846 "parser.cpp"
    break;

  case 14: // names: initialization
#line 164 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 855 "parser.cpp"
    break;

  case 15: // variable: ID
#line 172 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("variable");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
    }
#line 864 "parser.cpp"
    break;

  case 16: // variable: ID array
#line 177 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("variable");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 874 "parser.cpp"
    break;

  case 17: // array: LBRACK expression RBRACK
#line 186 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("array",TokenType::ARRAY);
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACK"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACK"));
    }
#line 885 "parser.cpp"
    break;

  case 18: // array: LBRACK ILIT RBRACK
#line 193 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("array",TokenType::ARRAY);
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACK"));
        yylhs.value.as < Node* > ()->addChild(new Node("ILIT", TokenType::INT, std::get<int>(yystack_[1].value.as < std::variant<int,double,char,std::string> > ())));
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACK"));
    }
#line 896 "parser.cpp"
    break;

  case 19: // initialization: scalar_initialization
#line 203 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("initialization");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 905 "parser.cpp"
    break;

  case 20: // initialization: vector_initialization
#line 208 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("initialization");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 914 "parser.cpp"
    break;

  case 21: // scalar_initialization: ID ASSIGN expression
#line 216 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("scalar_initialization"); 
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("ASSIGN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 925 "parser.cpp"
    break;

  case 22: // vector_initialization: ID array ASSIGN LBRACE values RBRACE
#line 226 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("vector_initialization");     
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(yystack_[4].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("ASSIGN"));
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACE"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACE"));
    }
#line 939 "parser.cpp"
    break;

  case 23: // values: values COMMA literal
#line 239 "parser.y"
    {
        Node* node = new Node("literal");     
        node->addChild(yystack_[2].value.as < Node* > ());
        node->addChild(new Node("COMMA"));
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 951 "parser.cpp"
    break;

  case 24: // values: literal
#line 247 "parser.y"
    {
        Node* node = new Node("literal");     
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 961 "parser.cpp"
    break;

  case 25: // literal: ILIT
#line 256 "parser.y"
    { 
        Node* node = new Node("ILIT");     
        node->type = TokenType::INT;
        node->value = std::get<int>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 972 "parser.cpp"
    break;

  case 26: // literal: FLIT
#line 263 "parser.y"
    {
        Node* node = new Node("FLIT");     
        node->type = TokenType::REAL;
        node->value = std::get<double>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 983 "parser.cpp"
    break;

  case 27: // literal: CHLIT
#line 270 "parser.y"
    {
        Node* node = new Node("CHLIT");     
        node->type = TokenType::CHAR;
        node->value = std::get<char>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 994 "parser.cpp"
    break;

  case 28: // expression: expression ADD expression
#line 280 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("ADD"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1005 "parser.cpp"
    break;

  case 29: // expression: expression SUB expression
#line 287 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SUB"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1016 "parser.cpp"
    break;

  case 30: // expression: expression MUL expression
#line 294 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("MUL"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1027 "parser.cpp"
    break;

  case 31: // expression: expression DIV expression
#line 301 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("DIV"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1038 "parser.cpp"
    break;

  case 32: // expression: ID INC
#line 308 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
	}
#line 1048 "parser.cpp"
    break;

  case 33: // expression: INC ID
#line 314 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression");
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
	}
#line 1058 "parser.cpp"
    break;

  case 34: // expression: ID DEC
#line 320 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
	}
#line 1068 "parser.cpp"
    break;

  case 35: // expression: DEC ID
#line 326 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression");
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
	}
#line 1078 "parser.cpp"
    break;

  case 36: // expression: expression OR expression
#line 332 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("OR"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1089 "parser.cpp"
    break;

  case 37: // expression: expression AND expression
#line 339 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("AND"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1100 "parser.cpp"
    break;

  case 38: // expression: NOT expression
#line 346 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(new Node("NOT"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1110 "parser.cpp"
    break;

  case 39: // expression: expression EQU expression
#line 352 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("EQU"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1121 "parser.cpp"
    break;

  case 40: // expression: expression REL expression
#line 359 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("REL"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1132 "parser.cpp"
    break;

  case 41: // expression: LPAREN expression RPAREN
#line 366 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[1].value.as < Node* > ()->type, yystack_[1].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
	}
#line 1143 "parser.cpp"
    break;

  case 42: // expression: variable
#line 373 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("expression", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1152 "parser.cpp"
    break;

  case 43: // expression: literal
#line 378 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1161 "parser.cpp"
    break;

  case 44: // statements: %empty
#line 386 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("statements");
    }
#line 1169 "parser.cpp"
    break;

  case 45: // statements: statements statement
#line 390 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("statements");
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1179 "parser.cpp"
    break;

  case 46: // if_statement: IF LPAREN expression RPAREN tail else_if optional_else
#line 399 "parser.y"
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
#line 1194 "parser.cpp"
    break;

  case 47: // if_statement: IF LPAREN expression RPAREN tail optional_else
#line 410 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("if_statement");
        yylhs.value.as < Node* > ()->addChild(new Node("IF"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[3].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1208 "parser.cpp"
    break;

  case 48: // else_if: else_if ELSE IF LPAREN expression RPAREN tail
#line 423 "parser.y"
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
#line 1223 "parser.cpp"
    break;

  case 49: // else_if: ELSE IF LPAREN expression RPAREN tail
#line 434 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("else_if");
        yylhs.value.as < Node* > ()->addChild(new Node("ELSE"));
        yylhs.value.as < Node* > ()->addChild(new Node("IF"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1237 "parser.cpp"
    break;

  case 50: // optional_else: ELSE tail
#line 447 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("optional_else");
        yylhs.value.as < Node* > ()->addChild(new Node("ELSE"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1247 "parser.cpp"
    break;

  case 51: // optional_else: %empty
#line 452 "parser.y"
                 {
		yylhs.value.as < Node* > () = nullptr;
	}
#line 1255 "parser.cpp"
    break;

  case 52: // for_statement: FOR LPAREN assigment SEMI expression SEMI ID INC RPAREN tail
#line 459 "parser.y"
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
#line 1273 "parser.cpp"
    break;

  case 53: // for_statement: FOR LPAREN assigment SEMI expression SEMI ID DEC RPAREN tail
#line 473 "parser.y"
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
#line 1291 "parser.cpp"
    break;

  case 54: // while_statement: WHILE LPAREN expression RPAREN tail
#line 490 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("while_statement");
        yylhs.value.as < Node* > ()->addChild(new Node("WHILE"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1304 "parser.cpp"
    break;

  case 55: // tail: LBRACE statements RBRACE
#line 502 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("tail");
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACE"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACE"));
    }
#line 1315 "parser.cpp"
    break;

  case 56: // assigment: variable ASSIGN expression
#line 512 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("assigment");
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("ASSIGN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1326 "parser.cpp"
    break;

  case 57: // statement: if_statement
#line 522 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1335 "parser.cpp"
    break;

  case 58: // statement: for_statement
#line 527 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1344 "parser.cpp"
    break;

  case 59: // statement: while_statement
#line 532 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1353 "parser.cpp"
    break;

  case 60: // statement: assigment SEMI
#line 537 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1363 "parser.cpp"
    break;

  case 61: // statement: CONTINUE SEMI
#line 543 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("CONTINUE"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1373 "parser.cpp"
    break;

  case 62: // statement: BREAK SEMI
#line 549 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("BREAK"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1383 "parser.cpp"
    break;

  case 63: // statement: ID INC SEMI
#line 555 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1394 "parser.cpp"
    break;

  case 64: // statement: INC ID SEMI
#line 562 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1405 "parser.cpp"
    break;

  case 65: // statement: ID DEC SEMI
#line 569 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1416 "parser.cpp"
    break;

  case 66: // statement: DEC ID SEMI
#line 576 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1427 "parser.cpp"
    break;


#line 1431 "parser.cpp"

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
  "DOUBLE", "VOID", "COMMA", "LPAREN", "RPAREN", "LBRACK", "RBRACK",
  "LBRACE", "RBRACE", "SEMI", "ASSIGN", "REFER", "IF", "ELSE", "WHILE",
  "FOR", "CONTINUE", "BREAK", "RETURN", "ADD", "SUB", "MUL", "DIV", "INC",
  "DEC", "OR", "AND", "NOT", "EQU", "REL", "MINUS", "ILIT", "FLIT",
  "CHLIT", "STRING", "ID", "$accept", "program", "declarations",
  "declaration", "type", "names", "variable", "array", "initialization",
  "scalar_initialization", "vector_initialization", "values", "literal",
  "expression", "statements", "if_statement", "else_if", "optional_else",
  "for_statement", "while_statement", "tail", "assigment", "statement", YY_NULLPTR
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








  const signed char  Parser ::yypact_ninf_ = -92;

  const signed char  Parser ::yytable_ninf_ = -45;

  const short
   Parser ::yypact_[] =
  {
     242,    -6,   -92,   -92,   -92,   -92,    21,    59,   -92,   -18,
     -92,   -92,   -92,   161,    -3,    -1,   -92,   -92,   -92,   -92,
      40,    49,    62,    57,    72,    54,    70,     0,    74,   -92,
     -92,   -92,    83,   -92,    37,    64,    99,   -18,   -92,    64,
      64,    71,   -92,   -92,    84,   104,   105,   110,   -92,    64,
     -92,    64,    85,    91,    64,   125,   -92,   -92,     8,   -92,
     -92,   143,   -92,   183,   135,   -92,   -92,    82,    96,   127,
     134,   -92,   -92,   -92,   -92,   183,   108,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,    64,    64,    64,    64,    64,    64,
      64,    64,   155,   139,   139,    64,   -92,    41,    41,   -92,
     -92,   194,   205,   209,    58,     2,   -92,   -92,   141,   -92,
     172,   155,   -92,     4,    26,   142,   -92,   123,   -92,   -92,
     158,   -92,    30,   -92,     6,    64,   163,   166,   170,   119,
      64,   139,   139,   139,   131,   -92,   -92,   -92,   139,   -92
  };

  const signed char
   Parser ::yydefact_[] =
  {
       0,     0,     8,     7,     9,    10,     0,     0,     4,     0,
       6,     1,     3,     2,    15,     0,    13,    14,    19,    20,
       0,     0,     0,     0,     0,     0,     0,    15,     0,    57,
      58,    59,     0,    45,     0,     0,    16,     0,     5,     0,
       0,     0,    61,    62,     0,     0,     0,     0,    16,     0,
      60,     0,     0,     0,     0,    25,    26,    27,    15,    42,
      43,     0,    25,    21,     0,    11,    12,     0,     0,    15,
       0,    64,    66,    63,    65,    56,     0,    33,    35,    38,
      18,    32,    34,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    28,    29,    30,
      31,    36,    37,    39,    40,     0,    24,    44,    51,    54,
       0,     0,    22,     0,     0,    51,    47,     0,    23,    55,
       0,    50,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    49,     0,    48
  };

  const short
   Parser ::yypgoto_[] =
  {
     -92,   -92,   -92,   178,   -92,   -92,    -9,   159,   149,   -92,
     -92,   -92,   -80,   -34,    81,   -92,   -92,    80,   -92,   -92,
     -91,   148,   -92
  };

  const signed char
   Parser ::yydefgoto_[] =
  {
       0,     6,     7,     8,     9,    15,    59,    48,    17,    18,
      19,   105,    60,    61,    13,    29,   115,   116,    30,    31,
     121,    32,    33
  };

  const short
   Parser ::yytable_[] =
  {
      16,    63,   108,   109,    28,    67,    68,    37,    34,    10,
     111,    34,   106,    35,    38,    75,   112,    76,   119,    34,
      79,    11,    20,    14,    21,    22,    23,    24,    65,    46,
      47,   118,    28,    25,    26,   127,   128,    81,    82,   107,
     135,   136,   137,   107,   120,    27,    51,   139,   126,    39,
      97,    98,    99,   100,   101,   102,   103,   104,    40,   -44,
       1,   110,     2,     3,     4,     5,    52,    53,    86,    87,
      54,    41,    42,    51,    55,    56,    57,   -44,    58,   -44,
     -44,   -44,   -44,    84,    85,    86,    87,    43,   -44,   -44,
      49,   129,    93,    52,    53,    44,   134,    54,    50,    71,
     -44,    62,    56,    57,    28,    58,    94,    84,    85,    86,
      87,    45,    69,    88,    89,    64,    90,    91,    96,    72,
      73,    84,    85,    86,    87,    74,    77,    88,    89,   133,
      90,    91,    78,    84,    85,    86,    87,    80,    34,    88,
      89,   138,    90,    91,    84,    85,    86,    87,    92,    95,
      88,    89,   107,    90,    91,    83,    84,    85,    86,    87,
     114,   122,    88,    89,   124,    90,    91,   125,    84,    85,
      86,    87,   130,    36,    88,    89,   131,    90,    91,    20,
     132,    21,    22,    23,    24,    12,    66,   117,   113,    70,
      25,    26,    62,    56,    57,   123,     0,    84,    85,    86,
      87,     0,    27,    88,    89,     0,    90,    91,    84,    85,
      86,    87,     0,     0,    88,    89,     0,    90,    91,    84,
      85,    86,    87,     0,     0,     0,    89,     0,    90,    91,
      84,    85,    86,    87,    84,    85,    86,    87,     0,    90,
      91,     0,     0,     1,    91,     2,     3,     4,     5
  };

  const short
   Parser ::yycheck_[] =
  {
       9,    35,    93,    94,    13,    39,    40,     8,    11,    15,
       8,    11,    92,    16,    15,    49,    14,    51,    14,    11,
      54,     0,    18,    41,    20,    21,    22,    23,    37,    29,
      30,   111,    41,    29,    30,    29,    30,    29,    30,    13,
     131,   132,   133,    13,    18,    41,     9,   138,    18,     9,
      84,    85,    86,    87,    88,    89,    90,    91,     9,     0,
       1,    95,     3,     4,     5,     6,    29,    30,    27,    28,
      33,     9,    15,     9,    37,    38,    39,    18,    41,    20,
      21,    22,    23,    25,    26,    27,    28,    15,    29,    30,
      16,   125,    10,    29,    30,    41,   130,    33,    15,    15,
      41,    37,    38,    39,   113,    41,    10,    25,    26,    27,
      28,    41,    41,    31,    32,    16,    34,    35,    10,    15,
      15,    25,    26,    27,    28,    15,    41,    31,    32,    10,
      34,    35,    41,    25,    26,    27,    28,    12,    11,    31,
      32,    10,    34,    35,    25,    26,    27,    28,    13,    15,
      31,    32,    13,    34,    35,    12,    25,    26,    27,    28,
      19,    19,    31,    32,    41,    34,    35,     9,    25,    26,
      27,    28,     9,    14,    31,    32,    10,    34,    35,    18,
      10,    20,    21,    22,    23,     7,    37,    15,   107,    41,
      29,    30,    37,    38,    39,   115,    -1,    25,    26,    27,
      28,    -1,    41,    31,    32,    -1,    34,    35,    25,    26,
      27,    28,    -1,    -1,    31,    32,    -1,    34,    35,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    -1,    34,    35,
      25,    26,    27,    28,    25,    26,    27,    28,    -1,    34,
      35,    -1,    -1,     1,    35,     3,     4,     5,     6
  };

  const signed char
   Parser ::yystos_[] =
  {
       0,     1,     3,     4,     5,     6,    43,    44,    45,    46,
      15,     0,    45,    56,    41,    47,    48,    50,    51,    52,
      18,    20,    21,    22,    23,    29,    30,    41,    48,    57,
      60,    61,    63,    64,    11,    16,    49,     8,    15,     9,
       9,     9,    15,    15,    41,    41,    29,    30,    49,    16,
      15,     9,    29,    30,    33,    37,    38,    39,    41,    48,
      54,    55,    37,    55,    16,    48,    50,    55,    55,    41,
      63,    15,    15,    15,    15,    55,    55,    41,    41,    55,
      12,    29,    30,    12,    25,    26,    27,    28,    31,    32,
      34,    35,    13,    10,    10,    15,    10,    55,    55,    55,
      55,    55,    55,    55,    55,    53,    54,    13,    62,    62,
      55,     8,    14,    56,    19,    58,    59,    15,    54,    14,
      18,    62,    19,    59,    41,     9,    18,    29,    30,    55,
       9,    10,    10,    10,    55,    62,    62,    62,    10,    62
  };

  const signed char
   Parser ::yyr1_[] =
  {
       0,    42,    43,    44,    44,    45,    45,    46,    46,    46,
      46,    47,    47,    47,    47,    48,    48,    49,    49,    50,
      50,    51,    52,    53,    53,    54,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    62,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64
  };

  const signed char
   Parser ::yyr2_[] =
  {
       0,     2,     2,     2,     1,     3,     2,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     2,     3,     3,     1,
       1,     3,     6,     3,     1,     1,     1,     1,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     3,     2,     3,
       3,     3,     1,     1,     0,     2,     7,     6,     7,     6,
       2,     0,    10,    10,     5,     3,     3,     1,     1,     1,
       2,     2,     2,     3,     3,     3,     3
  };




#if YYDEBUG
  const short
   Parser ::yyrline_[] =
  {
       0,    77,    77,    87,    94,   103,   111,   121,   126,   131,
     136,   144,   151,   158,   163,   171,   176,   185,   192,   202,
     207,   215,   225,   238,   246,   255,   262,   269,   279,   286,
     293,   300,   307,   313,   319,   325,   331,   338,   345,   351,
     358,   365,   372,   377,   385,   389,   398,   409,   422,   433,
     446,   452,   458,   472,   489,   501,   511,   521,   526,   531,
     536,   542,   548,   554,   561,   568,   575
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
#line 1879 "parser.cpp"

#line 584 "parser.y"


void Cd::Parser::error(const std::string& message) {
    std::cout << "AAAA no" << driver.lineNumber  << std::endl;
    std::cout << message << std::endl;
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
    std::cout << '\n';
}
