/*
 * IMPORTANT!
 */

#ifndef SWIG_IMPL_H_
#define SWIG_IMPL_H_

#include "../rec/redo_log.c"
#include "../rec/recovery.c"
#include "../rec/archive_log.c"
#include "../opti/rel_eq_projection.c"
#include "../opti/query_optimization.c"
#include "../opti/rel_eq_comut.c"
#include "../opti/rel_eq_assoc.c"
#include "../opti/rel_eq_selection.c"
#include "../auxi/mempro.c"
#include "../auxi/dictionary.c"
#include "../auxi/debug.c"
#include "../auxi/observable.c"
#include "../auxi/iniparser.c"
#include "../auxi/auxiliary.c"
#include "../file/filesearch.c"
#include "../file/files.c"
#include "../file/table.c"
#include "../file/id.c"
#include "../file/fileio.c"
#include "../file/filesort.c"
#include "../file/idx/index.c"
#include "../file/idx/btree.c"
#include "../file/idx/bitmap.c"
#include "../file/idx/hash.c"
#include "../file/test.c"
#include "../trans/transaction.c"
#include "../mm/memoman.c"
#include "../sql/trigger.c"
#include "../sql/command.c"
#include "../sql/view.c"
#include "../sql/drop.c"
#include "../sql/select.c"
#include "../sql/cs/unique.c"
#include "../sql/cs/check_constraint.c"
#include "../sql/cs/between.c"
#include "../sql/cs/reference.c"
#include "../sql/cs/nnull.c"
#include "../sql/privileges.c"
#include "../sql/function.c"
#include "../dm/dbman.c"
#include "../rel/union.c"
#include "../rel/aggregation.c"
#include "../rel/product.c"
#include "../rel/expression_check.c"
#include "../rel/nat_join.c"
#include "../rel/theta_join.c"
#include "../rel/selection.c"
#include "../rel/difference.c"
#include "../rel/sequence.c"
#include "../rel/intersect.c"
#include "../rel/projection.c"

#endif