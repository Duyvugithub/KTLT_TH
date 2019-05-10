// 18.cpp : Defines the entry point for the console application.
//
// Đếm giá trị trị phân biệt trong mảng.
#include "stdafx.h"


int main()
{
	printf("Dem gia tri phan biet trong mang\n");
	int *a, n;
	Input(a, n);
	printf("Mang co %d gia tri phan biet",Dem(a, 0, n - 1));
	delete[]a;
}

