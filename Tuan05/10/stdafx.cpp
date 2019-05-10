// stdafx.cpp : source file that includes just the standard includes
// 10.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"


void MatSize(FILE *f, int &row, int &col)
{
	char c;
	// số dòng
	row = 1; // nếu ghi ma trận dòng cuối xong có enter xuống dòng thì row =0
	while (!feof(f))
	{
		c = getc(f);
		if (c == '\n')
			row++;
	}
	//số cột
	col = 0;
	int	OFF = 0, ON = 1;
	int input = OFF;
	rewind(f);
	while (!feof(f))
	{
		c = getc(f);
		if (c == '\n')
			break;
		if (c == ' ')
			input = OFF;
		else if (input == OFF)  // input != ' ' thì ON nó lên
		{
			col++;
			input = ON;
		}
	}
}

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
void FreeMat(PS **&arr2d, int row)
{
	for (int i = 0; i < row; i++)
	{
		delete[] arr2d[i];
	}
	delete[]arr2d;
}
void ReadMat(FILE *f, PS **&arr2d, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fscanf(f, "%d", &arr2d[i][j].iTu);
			fseek(f, 1, SEEK_CUR);
			fscanf(f, "%d", &arr2d[i][j].iMau);
		}
	}
}
void Output(PS **arr2d, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d/%d\t", arr2d[i][j].iTu, arr2d[i][j].iMau);
		}
		printf("\n");
	}
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
