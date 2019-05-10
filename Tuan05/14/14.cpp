// 14.cpp : Defines the entry point for the console application.
//
//Viết hàm xuất mảng phân số vào tập tin.
#include "stdafx.h"
int main()
{
	PS *arr1d;
	int n;
	InputArr(arr1d, n);

	// text
	FILE *ft = fopen("DayPS.txt", "wt");
	if (ft == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileText(ft, arr1d,n);
	fclose(ft);

	//binary
	FILE *fb = fopen("DayPS.bin", "wb");
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

