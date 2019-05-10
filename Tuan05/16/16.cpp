// 16.cpp : Defines the entry point for the console application.
//
// Viết hàm xuất điểm 2D vào tập tin.
#include "stdafx.h"


int main()
{
	Diem2D a;
	Input(a);
	//text
	FILE *ft = fopen("Diem2D.txt", "wt");
	if (ft == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileText(ft, a);
	fclose(ft);
	//binary
	FILE *fb = fopen("Diem2D.bin", "wb");
	if (fb == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileBinary(fb, a);
	fclose(fb);
	return 0;
}
