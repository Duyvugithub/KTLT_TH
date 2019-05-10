// stdafx.cpp : source file that includes just the standard includes
// 5.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int Mult(int x, int n) // tinh x^n
{
	if (n == 1)
		return x;
	return Mult(x, n - 1)*x;
}
int Factorial(int n) // n! = 1.2.3...n-1.n
{
	if (n == 0 || n == 1)
		return 1;
	return Factorial(n - 1)*n;
}
float Sum(int x, int n)
{
	if (n == 0 || n == 1)
		return x;
	return Sum(x, n - 1) + (float)Mult(x, n) / Factorial(n);
}