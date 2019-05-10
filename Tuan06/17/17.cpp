// 17.cpp : Defines the entry point for the console application.
//
// Đếm số lượng giá trị dương trong mảng.
#include "stdafx.h"




int main()
{
	printf("Dem so luong gia tri duong trong mang\n");
	int *a, n;
	Input(a, n);
	printf("Co %d gia tri duong trong mang", DemSoDuong(a, n - 1));
	delete[]a;
}

