// 6.cpp : Defines the entry point for the console application.
//
// Viết hàm dọc tập tin chứa cấu trúc điểm trong mặt phẳng 2D.
#include "stdafx.h"


int main()
{
	// đọc file
	FILE *f = fopen("Diem2D.txt", "rt");
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


