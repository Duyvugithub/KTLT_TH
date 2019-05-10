// stdafx.cpp : source file that includes just the standard includes
// 18.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int Dem(int *a, int left, int right)
{
	if (left>right)
		return 0;
	for (int i = left + 1; i <= right; i++)
	{
		if (a[left] == a[i])
			return Dem(a, left + 1, right);
	}
	return 1 + Dem(a, left + 1, right);
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