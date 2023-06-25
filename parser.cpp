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
      case symbol_kind::S_assignment: // assignment
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
      case symbol_kind::S_assignment: // assignment
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
      case symbol_kind::S_assignment: // assignment
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
      case symbol_kind::S_assignment: // assignment
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
      case symbol_kind::S_assignment: // assignment
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

        std::vector<Node*> variables = yystack_[1].value.as < Node* > ()->getChildsByName("variable");
        for (Node* n : variables) {
            SymbolInfo* symbol = driver.m_symbolTable.find(std::get<std::string>(n->value)); 
            symbol->type = yystack_[2].value.as < Node* > ()->type;
        }

        std::vector<Node*> initializations = yystack_[1].value.as < Node* > ()->getChildsByName("initialization");
        for (Node* n : initializations) {
            std::cout << typeToStr(n->type) << " " << typeToStr(yystack_[2].value.as < Node* > ()->type) << std::endl; 
            if (n->type != yystack_[2].value.as < Node* > ()->type) {
                std::cout << "[Erro semantico] Tentativa de atribuir valor " << typeToStr(n->type) << " a variavel " 
                << std::get<std::string>(n->children[0]->children[0]->value) << " do tipo " << typeToStr(yystack_[2].value.as < Node* > ()->type) << " na linha: " 
                << driver.lineNumber << std::endl;
            } else {
                SymbolInfo* symbol = driver.m_symbolTable.find(std::get<std::string>(n->children[0]->children[0]->value)); 
                symbol->type = yystack_[2].value.as < Node* > ()->type;
                symbol->value = n->value;
            }
        }
    }
#line 787 "parser.cpp"
    break;

  case 6: // declaration: error SEMI
#line 131 "parser.y"
                 {
        std::cout << "[Erro sintático] Não foi possível realizar a declaração da variavel na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 796 "parser.cpp"
    break;

  case 7: // declaration: error RBRACE
#line 135 "parser.y"
                   {
        std::cout << "[Erro sintático] Bloco encontrado anteriormente a todas as declarações na linha : " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 805 "parser.cpp"
    break;

  case 8: // type: INT
#line 143 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("INT", yystack_[0].value.as < TokenType > ()));
    }
#line 814 "parser.cpp"
    break;

  case 9: // type: CHAR
#line 148 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("CHAR", yystack_[0].value.as < TokenType > ()));
    }
#line 823 "parser.cpp"
    break;

  case 10: // type: FLOAT
#line 153 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("FLOAT", yystack_[0].value.as < TokenType > ()));
    }
#line 832 "parser.cpp"
    break;

  case 11: // type: DOUBLE
#line 158 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("type", yystack_[0].value.as < TokenType > ()); 
        yylhs.value.as < Node* > ()->addChild(new Node("DOUBLE", yystack_[0].value.as < TokenType > ()));
    }
#line 841 "parser.cpp"
    break;

  case 12: // names: names COMMA variable
#line 166 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("COMMA"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 852 "parser.cpp"
    break;

  case 13: // names: names COMMA initialization
#line 173 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("COMMA"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 863 "parser.cpp"
    break;

  case 14: // names: variable
#line 180 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 872 "parser.cpp"
    break;

  case 15: // names: initialization
#line 185 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("names");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 881 "parser.cpp"
    break;

  case 16: // variable: ID
#line 193 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("variable", TokenType::ARRAY, yystack_[0].value.as < SymbolInfo* > ()->name);
        yylhs.value.as < Node* > ()->addChild(new Node("ID", TokenType::UNDEFINED, yystack_[0].value.as < SymbolInfo* > ()->name));

    }
#line 891 "parser.cpp"
    break;

  case 17: // variable: ID array
#line 199 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("variable", TokenType::ARRAY, yystack_[1].value.as < SymbolInfo* > ()->name);
        yylhs.value.as < Node* > ()->addChild(new Node("ID", TokenType::ARRAY, yystack_[1].value.as < SymbolInfo* > ()->name));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 901 "parser.cpp"
    break;

  case 18: // array: LBRACK expression RBRACK
#line 208 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("array",TokenType::ARRAY);
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACK"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACK"));
    }
#line 912 "parser.cpp"
    break;

  case 19: // array: LBRACK ILIT RBRACK
#line 215 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("array",TokenType::ARRAY);
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACK"));
        yylhs.value.as < Node* > ()->addChild(new Node("ILIT", TokenType::INT, std::get<int>(yystack_[1].value.as < std::variant<int,double,char,std::string> > ())));
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACK"));
    }
#line 923 "parser.cpp"
    break;

  case 20: // initialization: scalar_initialization
#line 225 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("initialization", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 932 "parser.cpp"
    break;

  case 21: // initialization: vector_initialization
#line 230 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("initialization");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 941 "parser.cpp"
    break;

  case 22: // scalar_initialization: ID ASSIGN literal
#line 238 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("scalar_initialization", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value); 
        yylhs.value.as < Node* > ()->type = yystack_[0].value.as < Node* > ()->type;
        yylhs.value.as < Node* > ()->value = yystack_[0].value.as < Node* > ()->value;

        yylhs.value.as < Node* > ()->addChild(new Node("ID", yystack_[0].value.as < Node* > ()->type, info->value));
        yylhs.value.as < Node* > ()->addChild(new Node("ASSIGN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 955 "parser.cpp"
    break;

  case 23: // vector_initialization: ID array ASSIGN LBRACE values RBRACE
#line 251 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("vector_initialization");     
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(yystack_[4].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("ASSIGN"));
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACE"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACE"));
    }
#line 969 "parser.cpp"
    break;

  case 24: // values: values COMMA literal
#line 264 "parser.y"
    {
        Node* node = new Node("values");     
        node->type = yystack_[0].value.as < Node* > ()->type;
        node->value = yystack_[0].value.as < Node* > ()->value;
        node->addChild(yystack_[2].value.as < Node* > ());
        node->addChild(new Node("COMMA"));
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 983 "parser.cpp"
    break;

  case 25: // values: literal
#line 274 "parser.y"
    {
        Node* node = new Node("values");     
        node->type = yystack_[0].value.as < Node* > ()->type;
        node->value = yystack_[0].value.as < Node* > ()->value;
        node->addChild(yystack_[0].value.as < Node* > ());
        yylhs.value.as < Node* > () = node;
    }
#line 995 "parser.cpp"
    break;

  case 26: // literal: ILIT
#line 285 "parser.y"
    { 
        Node* node = new Node("ILIT");     
        node->type = TokenType::INT;
        node->value = std::get<int>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 1006 "parser.cpp"
    break;

  case 27: // literal: FLIT
#line 292 "parser.y"
    {
        Node* node = new Node("FLIT");     
        node->type = TokenType::REAL;
        node->value = std::get<double>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 1017 "parser.cpp"
    break;

  case 28: // literal: CHLIT
#line 299 "parser.y"
    {
        Node* node = new Node("CHLIT");     
        node->type = TokenType::CHAR;
        node->value = std::get<char>(yystack_[0].value.as < std::variant<int,double,char,std::string> > ());
        yylhs.value.as < Node* > () = node;
    }
#line 1028 "parser.cpp"
    break;

  case 29: // expression: expression ADD expression
#line 309 "parser.y"
        { 
        if (yystack_[2].value.as < Node* > ()->type != yystack_[0].value.as < Node* > ()->type) {
            error("[Erro Semantico]: Tipos incopativeis encontrados durante uma expressão de soma");
        }
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("ADD"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1042 "parser.cpp"
    break;

  case 30: // expression: expression SUB expression
#line 319 "parser.y"
        { 
        if (yystack_[2].value.as < Node* > ()->type != yystack_[0].value.as < Node* > ()->type) {
            error("[Erro Semantico]: Tipos incopativeis encontrados durante uma expressão de soma");
        }
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SUB"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1056 "parser.cpp"
    break;

  case 31: // expression: expression MUL expression
#line 329 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("MUL"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1067 "parser.cpp"
    break;

  case 32: // expression: expression DIV expression
#line 336 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("DIV"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1078 "parser.cpp"
    break;

  case 33: // expression: ID INC
#line 343 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
	}
#line 1088 "parser.cpp"
    break;

  case 34: // expression: INC ID
#line 349 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression");
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
	}
#line 1098 "parser.cpp"
    break;

  case 35: // expression: ID DEC
#line 355 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
	}
#line 1108 "parser.cpp"
    break;

  case 36: // expression: DEC ID
#line 361 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression");
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
	}
#line 1118 "parser.cpp"
    break;

  case 37: // expression: expression OR expression
#line 367 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("OR"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1129 "parser.cpp"
    break;

  case 38: // expression: expression AND expression
#line 374 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("AND"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1140 "parser.cpp"
    break;

  case 39: // expression: NOT expression
#line 381 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(new Node("NOT"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1150 "parser.cpp"
    break;

  case 40: // expression: expression EQU expression
#line 387 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("EQU"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1161 "parser.cpp"
    break;

  case 41: // expression: expression REL expression
#line 394 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[2].value.as < Node* > ()->type, yystack_[2].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("REL"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1172 "parser.cpp"
    break;

  case 42: // expression: LPAREN expression RPAREN
#line 401 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[1].value.as < Node* > ()->type, yystack_[1].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
	}
#line 1183 "parser.cpp"
    break;

  case 43: // expression: variable
#line 408 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("expression", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1192 "parser.cpp"
    break;

  case 44: // expression: literal
#line 413 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("expression", yystack_[0].value.as < Node* > ()->type, yystack_[0].value.as < Node* > ()->value);
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1201 "parser.cpp"
    break;

  case 45: // statements: %empty
#line 421 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("statements");
    }
#line 1209 "parser.cpp"
    break;

  case 46: // statements: statements statement
#line 425 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("statements");
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1219 "parser.cpp"
    break;

  case 47: // if_statement: IF LPAREN expression RPAREN tail else_if optional_else
#line 434 "parser.y"
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
#line 1234 "parser.cpp"
    break;

  case 48: // if_statement: IF LPAREN expression RPAREN tail optional_else
#line 445 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("if_statement");
        yylhs.value.as < Node* > ()->addChild(new Node("IF"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[3].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1248 "parser.cpp"
    break;

  case 49: // if_statement: IF error RBRACE
#line 455 "parser.y"
    {
        std::cout << "[Erro sintático] Bloco if com erro terminado na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1257 "parser.cpp"
    break;

  case 50: // else_if: else_if ELSE IF LPAREN expression RPAREN tail
#line 463 "parser.y"
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
#line 1272 "parser.cpp"
    break;

  case 51: // else_if: ELSE IF LPAREN expression RPAREN tail
#line 474 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("else_if");
        yylhs.value.as < Node* > ()->addChild(new Node("ELSE"));
        yylhs.value.as < Node* > ()->addChild(new Node("IF"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1286 "parser.cpp"
    break;

  case 52: // else_if: ELSE error RBRACE
#line 484 "parser.y"
    {
        std::cout << "[Erro sintático] Bloco else com erro terminado na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1295 "parser.cpp"
    break;

  case 53: // optional_else: ELSE tail
#line 492 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("optional_else");
        yylhs.value.as < Node* > ()->addChild(new Node("ELSE"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1305 "parser.cpp"
    break;

  case 54: // optional_else: %empty
#line 497 "parser.y"
                 {
        yylhs.value.as < Node* > () = new Node("optional_else");
	}
#line 1313 "parser.cpp"
    break;

  case 55: // for_statement: FOR LPAREN assignment SEMI expression SEMI ID INC RPAREN tail
#line 504 "parser.y"
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
#line 1331 "parser.cpp"
    break;

  case 56: // for_statement: FOR LPAREN assignment SEMI expression SEMI ID DEC RPAREN tail
#line 518 "parser.y"
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
#line 1349 "parser.cpp"
    break;

  case 57: // for_statement: FOR error RBRACE
#line 532 "parser.y"
    {
        std::cout << "[Erro sintático] Bloco FOR com erro terminado na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1358 "parser.cpp"
    break;

  case 58: // while_statement: WHILE LPAREN expression RPAREN tail
#line 540 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("while_statement");
        yylhs.value.as < Node* > ()->addChild(new Node("WHILE"));
        yylhs.value.as < Node* > ()->addChild(new Node("LPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RPAREN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1371 "parser.cpp"
    break;

  case 59: // while_statement: WHILE error RBRACE
#line 549 "parser.y"
    {
        std::cout << "[Erro sintático] Bloco WHILE com erro terminado na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1380 "parser.cpp"
    break;

  case 60: // tail: LBRACE statements RBRACE
#line 557 "parser.y"
    { 
        yylhs.value.as < Node* > () = new Node("tail");
        yylhs.value.as < Node* > ()->addChild(new Node("LBRACE"));
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("RBRACE"));
    }
#line 1391 "parser.cpp"
    break;

  case 61: // assignment: variable ASSIGN expression
#line 567 "parser.y"
    {
        yylhs.value.as < Node* > () = new Node("assignment");

        SymbolInfo* info = driver.m_symbolTable.find(yystack_[2].value.as < Node* > ()->name);
        if (info->type != yystack_[0].value.as < Node* > ()->type) {
            std::cout << "[Erro semantico] Tentativa de atribuir valor " << typeToStr(yystack_[0].value.as < Node* > ()->type) << " a variavel " 
            << info->name << " do tipo " << typeToStr(yystack_[0].value.as < Node* > ()->type) << " na linha: " << driver.lineNumber << std::endl;
        }

        yylhs.value.as < Node* > ()->addChild(yystack_[2].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("ASSIGN"));
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
    }
#line 1409 "parser.cpp"
    break;

  case 62: // statement: if_statement
#line 584 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1418 "parser.cpp"
    break;

  case 63: // statement: for_statement
#line 589 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1427 "parser.cpp"
    break;

  case 64: // statement: while_statement
#line 594 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[0].value.as < Node* > ());
	}
#line 1436 "parser.cpp"
    break;

  case 65: // statement: assignment SEMI
#line 599 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(yystack_[1].value.as < Node* > ());
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1446 "parser.cpp"
    break;

  case 66: // statement: CONTINUE SEMI
#line 605 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("CONTINUE"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1456 "parser.cpp"
    break;

  case 67: // statement: BREAK SEMI
#line 611 "parser.y"
        { 
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("BREAK"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1466 "parser.cpp"
    break;

  case 68: // statement: ID INC SEMI
#line 617 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1477 "parser.cpp"
    break;

  case 69: // statement: INC ID SEMI
#line 624 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("INC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1488 "parser.cpp"
    break;

  case 70: // statement: ID DEC SEMI
#line 631 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1499 "parser.cpp"
    break;

  case 71: // statement: DEC ID SEMI
#line 638 "parser.y"
        {
        yylhs.value.as < Node* > () = new Node("statement");
        yylhs.value.as < Node* > ()->addChild(new Node("DEC"));
        yylhs.value.as < Node* > ()->addChild(new Node("ID"));
        yylhs.value.as < Node* > ()->addChild(new Node("SEMI"));
	}
#line 1510 "parser.cpp"
    break;

  case 72: // statement: error SEMI
#line 645 "parser.y"
    {
        std::cout << "[Erro sintático] Expressão mal formatada na linha: " << driver.lineNumber << std::endl;
        yylhs.value.as < Node* > () = new Node("error");
    }
#line 1519 "parser.cpp"
    break;


#line 1523 "parser.cpp"

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
  "for_statement", "while_statement", "tail", "assignment", "statement", YY_NULLPTR
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








  const signed char  Parser ::yypact_ninf_ = -80;

  const signed char  Parser ::yytable_ninf_ = -46;

  const short
   Parser ::yypact_[] =
  {
     254,    78,   -80,   -80,   -80,   -80,    11,    68,   -80,   -33,
     -80,   -80,   -80,   -80,    19,    -4,    14,   -80,   -80,   -80,
     -80,    18,     5,     8,    35,    28,    52,    41,    43,    48,
      60,   -80,   -80,   -80,    72,   -80,    92,    69,    79,   -33,
     -80,   -80,    96,   105,   101,   105,   106,    83,   -80,   -80,
     121,   124,   125,   126,   -80,   105,   -80,   105,   110,   111,
     105,   143,   -80,   -80,    50,   -80,   -80,   172,   -80,   -80,
     146,   -80,   -80,   -80,     0,   -80,   122,   -80,   153,   150,
     -80,   -80,   -80,   -80,   197,   135,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   105,   105,   105,   105,   105,   105,   105,
     105,    69,   155,   155,   105,   -80,   100,   100,   -80,   -80,
     208,   219,    91,   223,    67,   -80,   -80,   118,   -80,   186,
      69,   -80,    82,     3,   158,   -80,   131,   -80,   -80,   164,
     176,   -80,    32,   -80,    17,   -80,   105,   181,   171,   184,
     148,   105,   155,   155,   155,   161,   -80,   -80,   -80,   155,
     -80
  };

  const signed char
   Parser ::yydefact_[] =
  {
       0,     0,     9,     8,    10,    11,     0,     0,     4,     0,
       7,     6,     1,     3,     0,    16,     0,    14,    15,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,    62,    63,    64,     0,    46,     0,     0,    17,     0,
       5,    72,     0,     0,     0,     0,     0,     0,    66,    67,
       0,     0,     0,     0,    17,     0,    65,     0,     0,     0,
       0,    26,    27,    28,    16,    43,    44,     0,    26,    22,
       0,    12,    13,    49,     0,    59,     0,    57,    16,     0,
      69,    71,    68,    70,    61,     0,    34,    36,    39,    19,
      33,    35,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    29,    30,    31,    32,
      37,    38,    40,    41,     0,    25,    45,    54,    58,     0,
       0,    23,     0,     0,    54,    48,     0,    24,    60,     0,
       0,    53,     0,    47,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    51,     0,
      50
  };

  const short
   Parser ::yypgoto_[] =
  {
     -80,   -80,   -80,   195,   -80,   -80,    -9,   190,   152,   -80,
     -80,   -80,   -35,   -42,    93,   -80,   -80,    84,   -80,   -80,
     -79,   163,   -80
  };

  const unsigned char
   Parser ::yydefgoto_[] =
  {
       0,     6,     7,     8,     9,    16,    65,    54,    18,    19,
      20,   114,    66,    67,    14,    31,   124,   125,    32,    33,
     131,    34,    35
  };

  const short
   Parser ::yytable_[] =
  {
      17,    74,    69,    76,   129,    30,    42,    36,    15,    44,
     102,    12,    37,    84,    43,    85,   116,    45,    88,    -2,
      21,   130,    39,   117,   118,    93,    94,    95,    96,    40,
      71,    97,    98,    41,    99,   100,    46,    22,    30,    23,
      24,    25,    26,    48,    47,   116,   138,   139,    27,    28,
     137,   106,   107,   108,   109,   110,   111,   112,   113,    36,
      29,    36,   119,   146,   147,   148,   115,    49,   -45,     1,
     150,     2,     3,     4,     5,   120,    55,    52,    53,    90,
      91,   121,    50,    21,    51,   127,   -45,    56,   -45,   -45,
     -45,   -45,    10,    11,   140,    70,   128,   -45,   -45,   145,
      22,    57,    23,    24,    25,    26,    68,    62,    63,   -45,
      73,    27,    28,    30,    57,    75,    93,    94,    95,    96,
      77,    58,    59,    29,    78,    60,   100,    95,    96,    61,
      62,    63,   103,    64,    58,    59,    80,   123,    60,    81,
      82,    83,    68,    62,    63,   105,    64,    93,    94,    95,
      96,    86,    87,    97,    98,    89,    99,   100,   144,   101,
      93,    94,    95,    96,    36,   104,    97,    98,   116,    99,
     100,   149,   134,    93,    94,    95,    96,   132,   135,    97,
      98,   142,    99,   100,    92,   136,    93,    94,    95,    96,
     141,    72,    97,    98,   143,    99,   100,    93,    94,    95,
      96,   126,    13,    97,    98,    38,    99,   100,   133,   122,
      79,    93,    94,    95,    96,     0,     0,    97,    98,     0,
      99,   100,    93,    94,    95,    96,     0,     0,    97,    98,
       0,    99,   100,    93,    94,    95,    96,     0,     0,     0,
      98,     0,    99,   100,    93,    94,    95,    96,    93,    94,
      95,    96,     0,    99,   100,     1,     0,     2,     3,     4,
       5
  };

  const short
   Parser ::yycheck_[] =
  {
       9,    43,    37,    45,     1,    14,     1,    11,    41,     1,
      10,     0,    16,    55,     9,    57,    13,     9,    60,     0,
       1,    18,     8,   102,   103,    25,    26,    27,    28,    15,
      39,    31,    32,    15,    34,    35,     1,    18,    47,    20,
      21,    22,    23,    15,     9,    13,    29,    30,    29,    30,
      18,    93,    94,    95,    96,    97,    98,    99,   100,    11,
      41,    11,   104,   142,   143,   144,   101,    15,     0,     1,
     149,     3,     4,     5,     6,     8,    16,    29,    30,    29,
      30,    14,    41,     1,    41,   120,    18,    15,    20,    21,
      22,    23,    14,    15,   136,    16,    14,    29,    30,   141,
      18,     9,    20,    21,    22,    23,    37,    38,    39,    41,
      14,    29,    30,   122,     9,    14,    25,    26,    27,    28,
      14,    29,    30,    41,    41,    33,    35,    27,    28,    37,
      38,    39,    10,    41,    29,    30,    15,    19,    33,    15,
      15,    15,    37,    38,    39,    10,    41,    25,    26,    27,
      28,    41,    41,    31,    32,    12,    34,    35,    10,    13,
      25,    26,    27,    28,    11,    15,    31,    32,    13,    34,
      35,    10,    41,    25,    26,    27,    28,    19,    14,    31,
      32,    10,    34,    35,    12,     9,    25,    26,    27,    28,
       9,    39,    31,    32,    10,    34,    35,    25,    26,    27,
      28,    15,     7,    31,    32,    15,    34,    35,   124,   116,
      47,    25,    26,    27,    28,    -1,    -1,    31,    32,    -1,
      34,    35,    25,    26,    27,    28,    -1,    -1,    31,    32,
      -1,    34,    35,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    -1,    34,    35,    25,    26,    27,    28,    25,    26,
      27,    28,    -1,    34,    35,     1,    -1,     3,     4,     5,
       6
  };

  const signed char
   Parser ::yystos_[] =
  {
       0,     1,     3,     4,     5,     6,    43,    44,    45,    46,
      14,    15,     0,    45,    56,    41,    47,    48,    50,    51,
      52,     1,    18,    20,    21,    22,    23,    29,    30,    41,
      48,    57,    60,    61,    63,    64,    11,    16,    49,     8,
      15,    15,     1,     9,     1,     9,     1,     9,    15,    15,
      41,    41,    29,    30,    49,    16,    15,     9,    29,    30,
      33,    37,    38,    39,    41,    48,    54,    55,    37,    54,
      16,    48,    50,    14,    55,    14,    55,    14,    41,    63,
      15,    15,    15,    15,    55,    55,    41,    41,    55,    12,
      29,    30,    12,    25,    26,    27,    28,    31,    32,    34,
      35,    13,    10,    10,    15,    10,    55,    55,    55,    55,
      55,    55,    55,    55,    53,    54,    13,    62,    62,    55,
       8,    14,    56,    19,    58,    59,    15,    54,    14,     1,
      18,    62,    19,    59,    41,    14,     9,    18,    29,    30,
      55,     9,    10,    10,    10,    55,    62,    62,    62,    10,
      62
  };

  const signed char
   Parser ::yyr1_[] =
  {
       0,    42,    43,    44,    44,    45,    45,    45,    46,    46,
      46,    46,    47,    47,    47,    47,    48,    48,    49,    49,
      50,    50,    51,    52,    53,    53,    54,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    56,    57,    57,    57,
      58,    58,    58,    59,    59,    60,    60,    60,    61,    61,
      62,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64
  };

  const signed char
   Parser ::yyr2_[] =
  {
       0,     2,     2,     2,     1,     3,     2,     2,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     2,     3,     3,
       1,     1,     3,     6,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     2,
       3,     3,     3,     1,     1,     0,     2,     7,     6,     3,
       7,     6,     3,     2,     0,    10,    10,     3,     5,     3,
       3,     3,     1,     1,     1,     2,     2,     2,     3,     3,
       3,     3,     2
  };




#if YYDEBUG
  const short
   Parser ::yyrline_[] =
  {
       0,    77,    77,    87,    94,   103,   131,   135,   142,   147,
     152,   157,   165,   172,   179,   184,   192,   198,   207,   214,
     224,   229,   237,   250,   263,   273,   284,   291,   298,   308,
     318,   328,   335,   342,   348,   354,   360,   366,   373,   380,
     386,   393,   400,   407,   412,   420,   424,   433,   444,   454,
     462,   473,   483,   491,   497,   503,   517,   531,   539,   548,
     556,   566,   583,   588,   593,   598,   604,   610,   616,   623,
     630,   637,   644
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
#line 1984 "parser.cpp"

#line 651 "parser.y"


void Cd::Parser::error(const std::string& message) 
{
    std::cout << "[Error sintático] Na linha: " << driver.lineNumber << ' ' <<  message << std::endl;
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
