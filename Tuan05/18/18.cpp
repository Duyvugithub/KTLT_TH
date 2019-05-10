// 18.cpp : Defines the entry point for the console application.
//
//Viết hàm xuất ma trận điểm trong mặt phẳng 2D vào tập tin.
#include "stdafx.h"


int main()
{
	Diem2D **arr2d;
	int row, col;
	InputMat(arr2d, row, col);
	//text
	FILE *ft = fopen("MatDiem2D.txt", "wt");
	if (ft == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileText(ft, arr2d, row, col);
	fclose(ft);
	//binary
	FILE *fb = fopen("MatDiem2D.bin", "wb");
	if (fb == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileBinary(fb, arr2d, row, col);
	fclose(fb);
	FreeMat(arr2d, row);
	return 0;
}
