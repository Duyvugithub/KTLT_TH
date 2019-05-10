// 2.cpp : Defines the entry point for the console application.
//

//Viết hàm đọc ma trận từ tập tin inputmat.bin
#include "stdafx.h"

int main()
{
	FILE *f = fopen("inputmat.txt", "rt");
	if (f == NULL)
	{
		printf("Loi doc file");
		return 1;
	}
	// đọc kích thước ma trận
	int row, col;
	MatSize(f, row, col);
	printf("Ma tran doc duoc co %d dong, %d cot\n", row, col);
	rewind(f); 
	// cấp phát ma trận
	int **arr2d;
	InitMat(arr2d,row,col);
	// đọc ma trận vào mảng
	ReadMat(f, arr2d, row, col);
	// in mảng ra màn hình
	Output(arr2d, row, col);
	//giải phóng bộ nhớ
	FreeMat(arr2d, row);
	fclose(f);
	return 0;
}
