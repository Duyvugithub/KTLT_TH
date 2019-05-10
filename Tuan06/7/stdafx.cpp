// stdafx.cpp : source file that includes just the standard includes
// 7.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int DemSoN(int n)
{
	if (n / 10 == 0)
		return 1;
	return DemSoN(n / 10) + 1;
}