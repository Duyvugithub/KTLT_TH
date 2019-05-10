// 1.cpp : Defines the entry point for the console application.
//
// Tính tổng S = 1/1 + 1/2 + …+ 1/n
#include "stdafx.h"

int main()
{
	printf("Tinh 1/1 + 1/2 + 1/3 +...+ 1/n =?\n");
	float n;
	printf("Nhap n: ");
	scanf("%f", &n);
	printf("Ket qua: %f", Sum(n));
    return 0;
}

