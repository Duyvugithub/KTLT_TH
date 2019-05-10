// stdafx.cpp : source file that includes just the standard includes
// 17.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitArr(Diem2D *&arr1d, int n)
{
	if ((arr1d = new Diem2D[n]) == NULL)
		printf("Khong du bo nho RAM");
}
void InputArr(Diem2D *&arr1d, int &n)
{
	printf("Nhap so phan tu cho mang: ");
	scanf("%d", &n);
	InitArr(arr1d, n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap toa do x phan tu thu %d: ", i + 1);
		scanf("%lf", &arr1d[i].dX);
		printf("Nhap toa do y phan tu thu %d: ", i + 1);
		scanf("%lf", &arr1d[i].dY);

	}
}
void WriteFileText(FILE *f, Diem2D *arr1d, int n)
{
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%.2lf", arr1d[i].dX);
		fprintf(f, ",");
		fprintf(f, "%.2lf ", arr1d[i].dY);
	}
}
void WriteFileBinary(FILE *f, Diem2D *arr1d, int n)
{
	for (int i = 0; i < n; i++)
	{
		fwrite(&arr1d[i], sizeof(Diem2D), 1, f);
	}
}
void FreeMat(Diem2D *&arr1d)
{
	delete[]arr1d;
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
