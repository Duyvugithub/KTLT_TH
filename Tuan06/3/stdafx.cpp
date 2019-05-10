// stdafx.cpp : source file that includes just the standard includes
// 3.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int Mult(int x, int n) // tinh x^n
{
	if (n == 1)
		return x;
	/*if (n == 0)
	return 1;*/
	return Mult(x, n - 1)*x;
}
int Sum(int x, int n)
{
	if (n == 1)
		return x;
	return Sum(x, n - 1) + Mult(x, n);
}