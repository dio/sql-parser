#ifndef SQLPARSER_USE_STATEMENT_H
#define SQLPARSER_USE_STATEMENT_H

#include "SQLStatement.h"

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {

  // Represents SQL USE statements.
  // Example "USE DATABASE;"
  struct UseStatement : SQLStatement {

    UseStatement();
    virtual ~UseStatement();

    char* name;
  };

} // namespace hsql
#endif
