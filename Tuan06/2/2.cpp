// 2.cpp : Defines the entry point for the console application.
//
// Tính T = 1x2x3x …xn
#include "stdafx.h"


int main()
{
	printf("Tinh 1x2x3x4x...xn =?\n");
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Ket qua: %d", Mult(n));
    return 0;
}

