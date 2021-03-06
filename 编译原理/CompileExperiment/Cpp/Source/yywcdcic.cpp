/************************************************************
yywcdcic.cpp
This file can be freely modified for the generation of
custom code.

[Unicode]

Copyright (c) 1999-2003 Bumble-Bee Software Ltd.
************************************************************/

#include "yydefs.h"

#if !(defined(YYDEBUG) && defined(YYSTDCPPLIB)) || defined(YYGROUP)

#include "yywcpars.h"

#ifdef YYSTDCPPLIB
using namespace std;
#endif

_YL_BEGIN

void yywcparser::yydestructclearin()
{
	if (yylookahead) {
		// clean up any token attributes
		if (yyctokendestptr != NULL) {
			const yywctokendest_t YYNEARFAR* tokendestptr = yyctokendestptr;
			while (tokendestptr->yytoken != -1) {
				if (tokendestptr->yytoken == yychar) {
					// user actions in here
					yylvaltoval();

					yyaction(tokendestptr->yyaction);

					yyvaltolval();
					break;
				}
				tokendestptr++;
			}
		}
		yylookahead = yyfalse;
	}
}

_YL_END

#endif
