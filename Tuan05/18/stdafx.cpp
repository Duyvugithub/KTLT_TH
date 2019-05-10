// stdafx.cpp : source file that includes just the standard includes
// 18.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitMat(Diem2D **&arr2d, int row, int col)
{
	if ((arr2d = new Diem2D*[row]) == NULL)
		printf("Khong du bo nho RAM");
	for (int i = 0; i < row; i++)
	{
		if ((arr2d[i] = new Diem2D[col]) == NULL)
			printf("Khong du bo nho RAM");
	}
}
void InputMat(Diem2D**&arr2d, int &row, int&col)
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
			printf("Nhap toa do x phan tu [%d][%d]: ", i, j);
			scanf("%lf", &arr2d[i][j].dX);
			printf("Nhap toa do y phan tu [%d][%d]: ", i, j);
			scanf("%lf", &arr2d[i][j].dY);
		}
	}
}
void WriteFileText(FILE *f, Diem2D **arr2d, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fprintf(f, "%.2lf", arr2d[i][j].dX);
			fprintf(f, ",");
			fprintf(f, "%.2lf ", arr2d[i][j].dY);
		}
		fprintf(f, "\r\n");
	}
}
void WriteFileBinary(FILE *f, Diem2D **arr2d, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fwrite(&arr2d[i][j], sizeof(Diem2D), 1, f);
		}
	}
}
void FreeMat(Diem2D **&arr2d, int row)
{
	for (int i = 0; i < row; i++)
	{
		delete[] arr2d[i];
	}
	delete[]arr2d;
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
