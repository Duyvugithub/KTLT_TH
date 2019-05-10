// stdafx.cpp : source file that includes just the standard includes
// 4.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int Mult(int x, int n) // tinh x^N
{
	if (n == 1)
		return x;
	return Mult(x, n - 1)*x;
}
int Sum(int x, int n)
{
	if (n == 0)
		return x;
	return Sum(x, n - 1) + Mult(x, 2 * n + 1);
}