// stdafx.cpp : source file that includes just the standard includes
// 14.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitArr(PS *&arr1d, int n)
{
	if ((arr1d = new PS[n]) == NULL)
		printf("Khong du bo nho RAM");
}
void InputArr(PS *&arr1d, int &n)
{
	printf("Nhap so phan tu cho mang: ");
	scanf("%d", &n);
	InitArr(arr1d,n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap tu so phan tu thu %d: ", i+1);
		scanf("%d", &arr1d[i].iTu);
		printf("Nhap mau so phan tu thu %d: ", i+1);
		scanf("%d", &arr1d[i].iMau);
	
	}
}
void WriteFileText(FILE *f, PS *arr1d, int n)
{
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%d", arr1d[i].iTu);
		fprintf(f, "/");
		fprintf(f, "%d ", arr1d[i].iMau);
	}
}
void WriteFileBinary(FILE *f, PS*arr1d,int n)
{
	for (int i = 0; i < n; i++)
	{
		fwrite(&arr1d[i], sizeof(PS), 1, f);
	}
}
void FreeMat(PS *&arr1d)
{
	delete[]arr1d;
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
