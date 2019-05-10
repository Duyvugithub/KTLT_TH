// 11.cpp : Defines the entry point for the console application.
//
//Tính tổng các phần tử chẳn trong mảng
#include "stdafx.h"

int main()
{
	int *a,n;
	printf("Tinh tong cac phan tu chan trong mang\n");
	Input(a,n);
	printf("Tong phan tu chan trong mang la %d", Sum(a, n-1));
	delete[]a;
}

