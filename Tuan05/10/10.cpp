// 10.cpp : Defines the entry point for the console application.
//
//Viết hàm đọc tập tin chứa ma trận các phân số.
#include "stdafx.h"


int main()
{
	// đọc file
	FILE *f = fopen("MatPS.txt", "rt");
	if (f == NULL)
	{
		printf("Khong mo duoc tap tin");
	}
	// đọc kích thước ma trận
	int row, col;
	MatSize(f, row, col);
	printf("Ma tran doc duoc co %d dong, %d cot\n", row, col);
	rewind(f); 
	// cấp phát ma trận
	PS **arr2d;
	InitMat(arr2d, row, col);
	// đọc ma trận vào mảng
	ReadMat(f, arr2d, row, col);
	// in ra màn hình
	Output(arr2d,row,col);
	//giải phóng bộ nhớ
	FreeMat(arr2d, row);
	// đóng file
	fclose(f);
	return 0;
}
