#ifndef LLVM_CLANG_SEMA_METATAG_H
#define LLVM_CLANG_SEMA_METATAG_H

#include "clang/Basic/IdentifierTable.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/Sema/AttributeList.h"
#include "clang/Sema/Ownership.h"

namespace clang {

/// \brief Loop optimization hint for loop and unroll pragmas.
struct MetaTag {
  SourceRange Range;
  IdentifierLoc *PragmaNameLoc;
  IdentifierLoc *OptionLoc;
  Expr *ValueExpr;

  MetaTag()
    : PragmaNameLoc(nullptr), OptionLoc(nullptr), ValueExpr(nullptr) {}
};

} // end namespace clang

#endif // LLVM_CLANG_SEMA_METATAG_H
