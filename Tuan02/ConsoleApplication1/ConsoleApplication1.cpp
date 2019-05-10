// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void Arr2ChieuSang1Chieu(int **array2d,int row,int col,int *array1d)
{
//    a[i][j]    ------->    b[i*n+j]  n la cot
	array1d = new int[row*col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			array1d[i*col+j] = array2d[i][j];
		}
	}
}

void Arr1ChieuSang2Chieu(int *array1d, int k, int **array2d, int col) // col la minh muon chuyen thanh arr2d bao nhieu cot
{
//    a[x/n][x % n]   <-------    b[x]   n la cot
	array2d = new int*[k];
	for (int i = 0; i < k; i++)
	{
		array2d[i / col][i % col] = array1d[i];
	}
}


int main()
{
    return 0;
}







//// test
//printf("%c", *(buffer));  // 1
//printf("%c", *(buffer + 1)); // \n
//printf("%c", *(buffer + 2)); // \r
//printf("%c", *(buffer + 3)); // 8
// đếm số dòng (mỗi số dc ghi trên 1 dòng)
