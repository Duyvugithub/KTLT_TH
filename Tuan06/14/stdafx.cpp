// stdafx.cpp : source file that includes just the standard includes
// 14.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
bool CheckMangSoAm(int *a, int n)
{
	while (n >= 0)
	{
		if (a[n] >= 0)
			return false;
		else
			return CheckMangSoAm(a, n - 1);
	}
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