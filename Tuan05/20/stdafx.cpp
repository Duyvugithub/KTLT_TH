// stdafx.cpp : source file that includes just the standard includes
// 20.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitArr(DT *&arr1d, int n)
{
	if ((arr1d = new DT[n]) == NULL)
		printf("Khong du bo nho RAM");
}
void InputArr(DT *&arr1d, int &n)
{
	printf("Nhap so phan tu cho mang: ");
	scanf("%d", &n);
	InitArr(arr1d, n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap toa do x cua tam phan tu thu %d: ", i + 1);
		scanf("%lf", &arr1d[i].tam.dX);
		printf("Nhap toa do y cua tam phan tu thu %d: ", i + 1);
		scanf("%lf", &arr1d[i].tam.dY);
		printf("Nhap ban kinh phan tu thu %d: ", i + 1);
		scanf("%lf", &arr1d[i].r);

	}
}
void WriteFileText(FILE *f, DT *arr1d, int n)
{
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%.2lf", arr1d[i].tam.dX);
		fprintf(f, ",");
		fprintf(f, "%.2lf", arr1d[i].tam.dY);
		fprintf(f, ",");
		fprintf(f, "%.2lf ", arr1d[i].r);
	}
}
void WriteFileBinary(FILE *f, DT *arr1d, int n)
{
	for (int i = 0; i < n; i++)
	{
		fwrite(&arr1d[i], sizeof(DT), 1, f);
	}
}
void FreeMat(DT *&arr1d)
{
	delete[]arr1d;
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
