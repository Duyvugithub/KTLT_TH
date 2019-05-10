// stdafx.cpp : source file that includes just the standard includes
// 16.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
int DemX(int *a, int n,int x)
{
	int dem;
	if (n < 0)
		return 0;
	else if (a[n] == x)
		dem = 1;
	else 
		dem = 0;
	return DemX(a, n - 1, x) + dem;
}
void Input(int* &a, int &n, int &x)
{
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	printf("Nhap gia tri x can tim: ");
	scanf("%d", &x);
}

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
