// stdafx.cpp : source file that includes just the standard includes
// 3.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitMat(int **&arr2d, int row, int col)
{
	if ((arr2d = new int*[row]) == NULL)
		printf("Khong du bo nho RAM");
	for (int i = 0; i < row; i++)
		arr2d[i] = new int[col];
}
void InputMat(int**&arr2d, int &row, int&col)
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
			printf("Nhap gia tri phan tu [%d][%d]: ", i, j);
			scanf("%d", &arr2d[i][j]);
		}
	}
}
void WriteFile(FILE *f, int **arr2d, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fprintf(f, "%d ", arr2d[i][j]);
		}
		fprintf(f, "\r\n");
	}
}
void FreeMat(int **&arr2d, int row)
{
	for (int i = 0; i < row; i++)
	{
		delete[] arr2d[i];
	}
	delete[]arr2d;
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
