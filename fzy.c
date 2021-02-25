/*-------------------------------------------------------------------------
 *
 * stat.c
 *
 * Copyright (c) 2008-2018, PostgreSQL Global Development Group
 *
 * IDENTIFICATION
 *        contrib/pg_log/log.c
 */

#include "postgres.h"

#include <math.h>
#include <sys/stat.h>
#include <unistd.h>

#include "access/hash.h"
#include "catalog/pg_authid.h"
#include "executor/instrument.h"
#include "funcapi.h"
#include "mb/pg_wchar.h"
#include "miscadmin.h"
#include "parser/analyze.h"
#include "parser/parsetree.h"
#include "parser/scanner.h"
#include "parser/scansup.h"
#include "pgstat.h"
#include "storage/fd.h"
#include "storage/ipc.h"
#include "storage/spin.h"
#include "tcop/utility.h"
#include "utils/acl.h"
#include "utils/builtins.h"
#include "utils/memutils.h"

PG_MODULE_MAGIC;

Datum fzy(PG_FUNCTION_ARGS);
PG_FUNCTION_INFO_V1(fzy);

Datum fzy(PG_FUNCTION_ARGS) {
    char *needle   = PG_GETARG_CSTRING(0);
    char *haystack = PG_GETARG_CSTRING(1);


    return 0;
}

