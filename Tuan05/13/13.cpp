// 13.cpp : Defines the entry point for the console application.
//
//Viết hàm xuất phân số vào tập tin.
#include "stdafx.h"


int main()
{
	PS a;
	Input(a);

	// text
	FILE *ft = fopen("PS.txt", "wt");
	if (ft == NULL)
	{
		printf("Khong tao duoc file");
		return 1;
	}
	WriteFileText(ft,a);
	fclose(ft);

	//binary
	FILE *fb = fopen("PS.bin", "wb");
	if (fb == NULL)
	{
		printf("Khong tao duoc file");
		return 1;
	}
	WriteFileBinary(fb, a);
	fclose(fb);

	return 0;
}

