// 8.cpp : Defines the entry point for the console application.
//
// Viết hàm đọc tập tin chứa cấu trúc đường tròn trong mặt phẳng 2D.
#include "stdafx.h"


int main()
{
	// đọc file
	FILE *f = fopen("DuongTron.txt", "rt");
	if (f == NULL)
	{
		printf("Khong mo duoc tap tin");
	}
	// cấp phát danh sách liên kết 
	LIST l;
	InitList(l);
	// đọc ma trận vào dslk gồm 1 Node
	ReadFile(f, l);
	Output(l);
	// đóng file
	fclose(f);
	return 0;
}
