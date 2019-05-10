// stdafx.cpp : source file that includes just the standard includes
// 12.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
bool SoNT(int num, int i)
{
	if (i == 1)
	{
		return true;
	}
	else
	{
		if (num % i == 0)
		{
			return false;
		}
		else
		{
			return SoNT(num, i - 1);
		}
	}
}


int Mul(int *a, int n)
{
	if (n <0)
		return 1;
	if (SoNT(a[n], a[n] / 2) == true)
		return Mul(a, n - 1)*a[n];
	else
		return Mul(a, n - 1);
}
void Input(int* &a, int &n)
{
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}