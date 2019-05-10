// stdafx.cpp : source file that includes just the standard includes
// 11.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

bool Chan(unsigned int n)
{
	bool kq;
	if (n == 0)
		kq = true;
	else
		kq = Le(n - 1);
	return kq;
}
bool Le(unsigned int n)
{
	bool kq;
	if (n == 0)
		kq = false;
	else
		kq = Chan(n - 1);
	return kq;
}
int Sum(int *a, int n)
{
	if (n == 0)
		return a[0];
	if (Chan(n) == true) // n%2==0
		return Sum(a, n - 1) + a[n];
	else
		return Sum(a, n - 1);
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
