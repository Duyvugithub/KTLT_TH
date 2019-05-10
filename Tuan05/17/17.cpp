// 17.cpp : Defines the entry point for the console application.
//
// Viết hàm xuất mảng điểm trong mặt phẳng 2D vào tập tin.
#include "stdafx.h"


int main()
{
	Diem2D *arr1d;
	int n;
	InputArr(arr1d, n);
	//text
	FILE *ft = fopen("DayDiem2D.txt", "wt");
	if (ft == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileText(ft, arr1d, n);
	fclose(ft);
	//binary
	FILE *fb = fopen("DayDiem2D.bin", "wb");
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