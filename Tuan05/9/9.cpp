// 9.cpp : Defines the entry point for the console application.
//
// Viết hàm đọc tập tin chứa cấu trúc dãy đường tròn trong mặt phẳng 2D.
#include "stdafx.h"


int main()
{
	// đọc file
	FILE *f = fopen("DayDuongTron.txt", "rt");
	if (f == NULL)
	{
		printf("Khong mo duoc tap tin");
	}
	// đọc số đường tròn có trong file
	int size;
	FileRowSize(f, size);
	printf("File doc duoc co %d duong tron\n", size);
	rewind(f);
	// cấp phát danh sách liên kết 
	LIST l;
	InitList(l);
	// đọc ma trận vào dslk gồm size Node
	ReadFile(f, size, l);
	Output(l);
	// đóng file
	fclose(f);
	return 0;
}


