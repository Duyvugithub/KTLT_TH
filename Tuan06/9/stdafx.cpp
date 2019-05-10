// stdafx.cpp : source file that includes just the standard includes
// 9.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int DemSoLeN(int n)
{
	int dem = 0;
	if (n % 10 == 0)
		return dem;
	if ((n % 10) % 2 == 1)
		dem++;
	return DemSoLeN(n / 10) + dem;
}