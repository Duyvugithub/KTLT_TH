// 3.cpp : Defines the entry point for the console application.
//

// Viết hàm xuất ma trận vào tập tin.
#include "stdafx.h"

int main()
{
	int **arr2d;
	int row, col;
	InputMat(arr2d, row, col);
	FILE *f = fopen("outputmat.txt", "wt");
	if (f == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFile(f, arr2d, row, col);
	FreeMat(arr2d, row);
	fclose(f);
	return 0;
}

