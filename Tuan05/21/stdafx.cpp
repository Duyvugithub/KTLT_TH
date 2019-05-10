// stdafx.cpp : source file that includes just the standard includes
// 21.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitMat(DT **&arr2d, int row, int col)
{
	if ((arr2d = new DT*[row]) == NULL)
		printf("Khong du bo nho RAM");
	for (int i = 0; i < row; i++)
	{
		if ((arr2d[i] = new DT[col]) == NULL)
			printf("Khong du bo nho RAM");
	}
}
void InputMat(DT **&arr2d, int &row, int&col)
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
			printf("Nhap toa do x cua tam phan tu [%d][%d]: ", i, j);
			scanf("%lf", &arr2d[i][j].tam.dX);
			printf("Nhap toa do y cua tam phan tu [%d][%d]: ", i, j);
			scanf("%lf", &arr2d[i][j].tam.dY);
			printf("Nhap ban kinh phan tu [%d][%d]: ", i, j);
			scanf("%lf", &arr2d[i][j].r);
		}
	}
}
void WriteFileText(FILE *f, DT **arr2d, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fprintf(f, "%.2lf", arr2d[i][j].tam.dX);
			fprintf(f, ",");
			fprintf(f, "%.2lf", arr2d[i][j].tam.dY);
			fprintf(f, ",");
			fprintf(f, "%.2lf ", arr2d[i][j].r);
		}
		fprintf(f, "\r\n");
	}
}
void WriteFileBinary(FILE *f, DT **arr2d, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fwrite(&arr2d[i][j], sizeof(DT), 1, f);
		}
	}
}
void FreeMat(DT **&arr2d, int row)
{
	for (int i = 0; i < row; i++)
	{
		delete[] arr2d[i];
	}
	delete[]arr2d;
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
