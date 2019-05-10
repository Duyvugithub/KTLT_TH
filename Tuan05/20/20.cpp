// 20.cpp : Defines the entry point for the console application.
//
// Viết hàm xuất mảng đường tròn trong mặt phẳng 2D vào tập tin
#include "stdafx.h"


int main()
{
	DT *arr1d;
	int n;
	InputArr(arr1d, n);
	//text
	FILE *ft = fopen("DayDT.txt", "wt");
	if (ft == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileText(ft, arr1d, n);
	fclose(ft);
	//binary
	FILE *fb = fopen("DayDT.bin", "wb+");
	if (fb == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileBinary(fb, arr1d, n);
	fclose(fb);
	FreeMat(arr1d);
	return 0;
}
