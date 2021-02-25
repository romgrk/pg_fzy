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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sys/stat.h>
#include <unistd.h>

#include "funcapi.h"
#include "fzy_native/src/match.c"

PG_MODULE_MAGIC;

Datum fzy(PG_FUNCTION_ARGS);
PG_FUNCTION_INFO_V1(fzy);

Datum fzy(PG_FUNCTION_ARGS) {
    char *needle   = PG_GETARG_CSTRING(0);
    char *haystack = PG_GETARG_CSTRING(1);

    int32_t result = 0;
    if (has_match(needle, haystack, 0))
        result = (int32_t)(match(needle, haystack, 0) * 1000);

    PG_RETURN_INT32(result);
}

