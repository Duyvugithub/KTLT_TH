// stdafx.cpp : source file that includes just the standard includes
// 8.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int TongDemSoN(int n)
{
	if (n / 10 == 0)
		return n % 10;
	return TongDemSoN(n / 10) + n % 10;
}