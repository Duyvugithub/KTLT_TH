// stdafx.cpp : source file that includes just the standard includes
// 15.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
int TimMax(int *a, int n)
{
	int max = a[0];
	while (n >= 0)
	{
		if (a[n] >= max)
		{
			max = a[n];
			return max;
		}
		else return TimMax(a, n - 1);
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