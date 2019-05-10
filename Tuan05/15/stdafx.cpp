// stdafx.cpp : source file that includes just the standard includes
// 15.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitMat(PS **&arr2d, int row, int col)
{
	if ((arr2d = new PS*[row]) == NULL)
		printf("Khong du bo nho RAM");
	for (int i = 0; i < row; i++)
	{
		if ((arr2d[i] = new PS[col]) == NULL)
			printf("Khong du bo nho RAM");
	}
}
void InputMat(PS**&arr2d, int &row, int&col)
{
	printf("Nhap so dong cho ma tran: ");
	scanf("%d", &row);
	printf("Nhap so cot cho ma tran: ");
	scanf("%d", &col);
	InitMat(arr2d, row, col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("Nhap tu so phan tu [%d][%d]: ", i, j);
			scanf("%d", &arr2d[i][j].iTu);
			printf("Nhap mau so phan tu [%d][%d]: ", i, j);
			scanf("%d", &arr2d[i][j].iMau);
		}
	}
}
void WriteFileText(FILE *f, PS **arr2d, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fprintf(f, "%d", arr2d[i][j].iTu);
			fprintf(f, "/");
			fprintf(f, "%d ", arr2d[i][j].iMau);
		}
		fprintf(f, "\r\n");
	}
}
void WriteFileBinary(FILE *f, PS **arr2d, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fwrite(&arr2d[i][j], sizeof(PS), 1, f);
		}	
	}
}
void FreeMat(PS **&arr2d, int row)
{
	for (int i = 0; i < row; i++)
	{
		delete[] arr2d[i];
	}
	delete[]arr2d;
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
