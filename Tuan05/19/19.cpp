// 19.cpp : Defines the entry point for the console application.
//
//Viết hàm xuất đường tròn trong mặt phẳng 2D vào tập tin.
#include "stdafx.h"


int main()
{
	DT a;
	Input(a);
	//text
	FILE *ft = fopen("DuongTron.txt", "wt");
	if (ft == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileText(ft, a);
	fclose(ft);
	//binary
	FILE *fb = fopen("DuongTron.bin", "wb");
	if (fb == NULL)
	{
		printf("Loi mo file");
		return 1;
	}
	WriteFileBinary(fb, a);
	fclose(fb);
	return 0;
}