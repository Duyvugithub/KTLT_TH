// 16.cpp : Defines the entry point for the console application.
//
// Đếm số phần tử trong mảng bằng x cho trước.
#include "stdafx.h"


int main()
{
	printf("Dem so phan tu trong mang bang 1 so cho truoc\n");
	int *a, n,x;
	Input(a, n,x);
	printf("Co %d phan tu trong mang co gia tri bang %d", DemX(a, n-1, x),x);
	delete[]a;
}

