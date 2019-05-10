// stdafx.cpp : source file that includes just the standard includes
// 13.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int Mul(int *a, int n)
{
	if (n <0)
		return 1;
	if (a[n]<0)
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
