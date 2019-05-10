// stdafx.cpp : source file that includes just the standard includes
// 1.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
float Sum(float n)
{
	if (n == 1)
		return 1;
	return Sum(n - 1) + 1 / n;
}