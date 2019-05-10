// 4.cpp : Defines the entry point for the console application.
//

//Viết hàm đọc tập tin chứa cấu trúc phân số.
#include "stdafx.h"

int main()
{
	// đọc file
	FILE *f = fopen("PhanSo.txt", "rt");
	if (f == NULL)
	{
		printf("Khong mo duoc tap tin");
	}
	// cấp phát danh sách liên kết 
	LIST l;
	InitList(l);
	// đọc ma trận vào dslk gồm 1 Node
	ReadFile(f,l);
	Output(l);
	// đóng file
	fclose(f);
	return 0;
}

