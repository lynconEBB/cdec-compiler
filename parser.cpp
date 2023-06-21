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
#line 32 "parser.y"

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
      case symbol_kind::S_literal: // literal
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
      case symbol_kind::S_literal: // literal
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
      case symbol_kind::S_literal: // literal
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
      case symbol_kind::S_literal: // literal
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
      case symbol_kind::S_literal: // literal
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
  case 2: // program: declarations
#line 76 "parser.y"
    {
        Node* node = new Node("program");
        node->addChild(yystack_[0].value.as < Node* > ());
        driver.printAST(node);
    }
#line 648 "parser.cpp"
    break;

  case 3: // declarations: declarations declaration
#line 85 "parser.y"
    {
        Node* node = new Node("declarations");
        node->addChild(yystack_[1].value.as < Node* > ());
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 659 "parser.cpp"
    break;

  case 4: // declarations: declaration
#line 92 "parser.y"
    {
        Node* node = new Node("declarations");
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 669 "parser.cpp"
    break;

  case 5: // declaration: type names SEMI
#line 101 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("declaration");
        yylhs.value.as < Node* > ()->type = yystack_[2].value.as < Node* > ()->type;

    }
#line 679 "parser.cpp"
    break;

  case 6: // declaration: error SEMI
#line 107 "parser.y"
    {
        yyclearin();
    }
#line 687 "parser.cpp"
    break;

  case 7: // type: INT
#line 113 "parser.y"
          { yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); }
#line 693 "parser.cpp"
    break;

  case 8: // type: CHAR
#line 114 "parser.y"
           { yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); }
#line 699 "parser.cpp"
    break;

  case 9: // type: FLOAT
#line 115 "parser.y"
            { yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); }
#line 705 "parser.cpp"
    break;

  case 10: // type: DOUBLE
#line 116 "parser.y"
             { yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); }
#line 711 "parser.cpp"
    break;

  case 11: // names: names COMMA variable
#line 121 "parser.y"
    {

    }
#line 719 "parser.cpp"
    break;

  case 12: // names: names COMMA initialization
#line 125 "parser.y"
    {

    }
#line 727 "parser.cpp"
    break;

  case 13: // names: variable
#line 129 "parser.y"
    {

    }
#line 735 "parser.cpp"
    break;

  case 14: // names: initialization
#line 133 "parser.y"
    {

    }
#line 743 "parser.cpp"
    break;

  case 15: // variable: ID
#line 140 "parser.y"
    {

    }
#line 751 "parser.cpp"
    break;

  case 16: // variable: ID array
#line 144 "parser.y"
    {

    }
#line 759 "parser.cpp"
    break;

  case 17: // array: LBRACK expression RBRACK
#line 151 "parser.y"
    {
        
    }
#line 767 "parser.cpp"
    break;

  case 18: // array: LBRACK ILIT RBRACK
#line 155 "parser.y"
    {

    }
#line 775 "parser.cpp"
    break;

  case 19: // initialization: scalar_initialization
#line 162 "parser.y"
    { }
#line 781 "parser.cpp"
    break;

  case 20: // initialization: vector_initialization
#line 164 "parser.y"
    { }
#line 787 "parser.cpp"
    break;

  case 21: // scalar_initialization: ID ASSIGN expression
#line 169 "parser.y"
    {

    }
#line 795 "parser.cpp"
    break;

  case 22: // vector_initialization: ID array ASSIGN LBRACE values RBRACE
#line 176 "parser.y"
    {

    }
#line 803 "parser.cpp"
    break;

  case 23: // values: values COMMA literal
#line 183 "parser.y"
    {

    }
#line 811 "parser.cpp"
    break;

  case 24: // values: literal
#line 187 "parser.y"
    {

    }
#line 819 "parser.cpp"
    break;

  case 25: // literal: ILIT
#line 194 "parser.y"
    { 
        Node* node = new Node();     
        node->type = TokenType::INT;
        node->value = std::get<int>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 830 "parser.cpp"
    break;

  case 26: // literal: FLIT
#line 201 "parser.y"
    {
        Node* node = new Node();     
        node->type = TokenType::REAL;
        node->value = std::get<double>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 841 "parser.cpp"
    break;

  case 27: // literal: CHLIT
#line 208 "parser.y"
    {
        Node* node = new Node();     
        node->type = TokenType::CHAR;
        node->value = std::get<char>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 852 "parser.cpp"
    break;

  case 28: // expression: expression ADD expression
#line 218 "parser.y"
        { 

	}
#line 860 "parser.cpp"
    break;

  case 29: // expression: expression MUL expression
#line 222 "parser.y"
        {
	}
#line 867 "parser.cpp"
    break;

  case 30: // expression: expression DIV expression
#line 225 "parser.y"
        {
	}
#line 874 "parser.cpp"
    break;

  case 31: // expression: ID INC
#line 228 "parser.y"
        {
		/* increment */
	}
#line 882 "parser.cpp"
    break;

  case 32: // expression: INC ID
#line 232 "parser.y"
        {
		/* increment */
	}
#line 890 "parser.cpp"
    break;

  case 33: // expression: expression OR expression
#line 236 "parser.y"
        {
	}
#line 897 "parser.cpp"
    break;

  case 34: // expression: expression AND expression
#line 239 "parser.y"
        {
	}
#line 904 "parser.cpp"
    break;

  case 35: // expression: NOT expression
#line 242 "parser.y"
        {
	}
#line 911 "parser.cpp"
    break;

  case 36: // expression: expression EQU expression
#line 245 "parser.y"
        {
	}
#line 918 "parser.cpp"
    break;

  case 37: // expression: expression REL expression
#line 248 "parser.y"
        {
	}
#line 925 "parser.cpp"
    break;

  case 38: // expression: LPAREN expression RPAREN
#line 251 "parser.y"
        {
	}
#line 932 "parser.cpp"
    break;

  case 39: // expression: variable
#line 254 "parser.y"
        { 

	}
#line 940 "parser.cpp"
    break;

  case 40: // expression: literal
#line 258 "parser.y"
        {

	}
#line 948 "parser.cpp"
    break;


#line 952 "parser.cpp"

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
        std::string msg = yysyntax_error_ (yyctx);
        error (YY_MOVE (msg));
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

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   Parser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
   Parser ::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
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






  int
   Parser ::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
   Parser ::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char  Parser ::yypact_ninf_ = -49;

  const signed char  Parser ::yytable_ninf_ = -3;

  const signed char
   Parser ::yypact_[] =
  {
     100,    10,   -49,   -49,   -49,   -49,    46,    94,   -49,     7,
     -49,   -49,   -49,    23,    -5,   -49,   -49,   -49,   -49,     5,
      12,    40,     7,   -49,    12,    17,    12,    48,   -49,   -49,
     -10,   -49,   -49,    39,   -49,    49,    50,   -49,   -49,    28,
     -49,   -49,   -49,   -49,   -49,   -49,    12,    12,    12,    12,
      12,    12,    12,   -29,   -49,     9,   -49,   -49,   -14,    59,
      62,    -3,    63,   -49,   -29,   -49,   -49
  };

  const signed char
   Parser ::yydefact_[] =
  {
       0,     0,     8,     7,     9,    10,     0,     0,     4,     0,
       6,     1,     3,    15,     0,    13,    14,    19,    20,     0,
       0,    16,     0,     5,     0,     0,     0,    25,    26,    27,
      15,    39,    40,     0,    25,    21,     0,    11,    12,     0,
      32,    35,    18,    31,    16,    17,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    28,    29,    30,    33,    34,
      36,    37,     0,    24,     0,    22,    23
  };

  const signed char
   Parser ::yypgoto_[] =
  {
     -49,   -49,   -49,    60,   -49,   -49,    -7,    38,    56,   -49,
     -49,   -49,   -48,   -20
  };

  const signed char
   Parser ::yydefgoto_[] =
  {
       0,     6,     7,     8,     9,    14,    31,    21,    16,    17,
      18,    62,    32,    33
  };

  const signed char
   Parser ::yytable_[] =
  {
      35,    19,    15,    22,    39,    63,    41,    34,    28,    29,
      23,    46,    47,    48,    24,    37,    66,    50,    43,    51,
      52,    24,    46,    47,    48,    10,    55,    56,    57,    58,
      59,    60,    61,    25,    19,    47,    48,    26,    54,    20,
      25,    27,    28,    29,    26,    30,    11,    13,    34,    28,
      29,    45,    30,    46,    47,    48,    36,    40,    49,    50,
      42,    51,    52,    53,    46,    47,    48,    12,    44,    49,
      50,    64,    51,    52,    46,    47,    48,    65,    38,    49,
      50,     0,    51,    52,    46,    47,    48,    46,    47,    48,
       0,     0,    51,    52,    -2,     1,    52,     2,     3,     4,
       5,     1,     0,     2,     3,     4,     5
  };

  const signed char
   Parser ::yycheck_[] =
  {
      20,    11,     9,     8,    24,    53,    26,    36,    37,    38,
      15,    25,    26,    27,     9,    22,    64,    31,    28,    33,
      34,     9,    25,    26,    27,    15,    46,    47,    48,    49,
      50,    51,    52,    28,    11,    26,    27,    32,    10,    16,
      28,    36,    37,    38,    32,    40,     0,    40,    36,    37,
      38,    12,    40,    25,    26,    27,    16,    40,    30,    31,
      12,    33,    34,    13,    25,    26,    27,     7,    30,    30,
      31,     8,    33,    34,    25,    26,    27,    14,    22,    30,
      31,    -1,    33,    34,    25,    26,    27,    25,    26,    27,
      -1,    -1,    33,    34,     0,     1,    34,     3,     4,     5,
       6,     1,    -1,     3,     4,     5,     6
  };

  const signed char
   Parser ::yystos_[] =
  {
       0,     1,     3,     4,     5,     6,    42,    43,    44,    45,
      15,     0,    44,    40,    46,    47,    49,    50,    51,    11,
      16,    48,     8,    15,     9,    28,    32,    36,    37,    38,
      40,    47,    53,    54,    36,    54,    16,    47,    49,    54,
      40,    54,    12,    28,    48,    12,    25,    26,    27,    30,
      31,    33,    34,    13,    10,    54,    54,    54,    54,    54,
      54,    54,    52,    53,     8,    14,    53
  };

  const signed char
   Parser ::yyr1_[] =
  {
       0,    41,    42,    43,    43,    44,    44,    45,    45,    45,
      45,    46,    46,    46,    46,    47,    47,    48,    48,    49,
      49,    50,    51,    52,    52,    53,    53,    53,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54
  };

  const signed char
   Parser ::yyr2_[] =
  {
       0,     2,     1,     2,     1,     3,     2,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     2,     3,     3,     1,
       1,     3,     6,     3,     1,     1,     1,     1,     3,     3,
       3,     2,     2,     3,     3,     2,     3,     3,     3,     1,
       1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const  Parser ::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "CHAR", "INT", "FLOAT",
  "DOUBLE", "VOID", "COMMA", "LPAREN", "RPAREN", "LBRACK", "RBRACK",
  "LBRACE", "RBRACE", "SEMI", "ASSIGN", "REFER", "IF", "ELSE", "WHILE",
  "FOR", "CONTINUE", "BREAK", "RETURN", "ADD", "MUL", "DIV", "INC", "DEC",
  "OR", "AND", "NOT", "EQU", "REL", "MINUS", "ILIT", "FLIT", "CHLIT",
  "STRING", "ID", "$accept", "program", "declarations", "declaration",
  "type", "names", "variable", "array", "initialization",
  "scalar_initialization", "vector_initialization", "values", "literal",
  "expression", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
   Parser ::yyrline_[] =
  {
       0,    75,    75,    84,    91,   100,   106,   113,   114,   115,
     116,   120,   124,   128,   132,   139,   143,   150,   154,   161,
     163,   168,   175,   182,   186,   193,   200,   207,   217,   221,
     224,   227,   231,   235,   238,   241,   244,   247,   250,   253,
     257
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
#line 1467 "parser.cpp"

#line 262 "parser.y"


void Cd::Parser::error(const std::string& message) {
    std::cout << "AAAA no" << driver.lineNumber  << std::endl;
    std::cout << message << std::endl;
}

//void Cd::Parser::report_syntax_error (const context& ctx) const
//{
//    std::cout << "CURRR" << std::endl;
//}
