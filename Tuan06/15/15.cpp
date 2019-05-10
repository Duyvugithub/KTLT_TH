// 15.cpp : Defines the entry point for the console application.
//
// Tìm giá trị lớn nhất trong mảng.
#include "stdafx.h"


int main()
{
	printf("Tim gia tri lon nhat trong mang\n");
	int *a, n;
	Input(a, n);
	printf("Gia tri lon nhat trong mang la %d", TimMax(a, n-1));
	delete[]a;
}
