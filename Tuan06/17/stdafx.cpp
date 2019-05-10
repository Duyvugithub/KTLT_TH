// stdafx.cpp : source file that includes just the standard includes
// 17.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
int DemSoDuong(int *a, int n)
{
	int dem;
	if (n < 0)
		return 0;
	else if (a[n] >0)
		dem = 1;
	else
		dem = 0;
	return DemSoDuong(a, n - 1) + dem;
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
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
