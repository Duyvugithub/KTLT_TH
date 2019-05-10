// 14.cpp : Defines the entry point for the console application.
//
// Kiểm tra mảng có toàn giá trị âm hay không.
#include "stdafx.h"



int main()
{
	printf("Kiem tra mang co toan gia tri am hay khong\n");
	int *a, n;
	Input(a, n);
	if (CheckMangSoAm(a, n) == false)
		printf("Mang khong toan so am");
	else
		printf("Mang toan so am");
	delete[]a;
}

