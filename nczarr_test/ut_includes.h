/*
 *	Copyright 2018, University Corporation for Atmospheric Research
 *      See netcdf/COPYRIGHT file for copying and redistribution conditions.
 */

#ifndef UT_INCLUDES_H
#define UT_INCLUDES_H

#include "config.h"

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

#ifdef HAVE_STDARG_H
#include <stdarg.h>
#endif

#ifdef HAVE_GETOPT_H
#include <getopt.h>
#endif

#ifdef _WIN32
#include "XGetopt.h"
#endif

#include "netcdf.h"
#include "nclist.h"
#include "ncbytes.h"
#include "ncuri.h"

#include "zincludes.h"
#include "ut_test.h"
#include "ut_util.h"

#endif /*UT_INCLUDES_H*/
