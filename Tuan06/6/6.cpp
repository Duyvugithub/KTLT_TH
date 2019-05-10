// 6.cpp : Defines the entry point for the console application.
//
//Cho dãy số sau: Xo = 0 và Xn = n^2Xo + (n-1)^2X1 + … + Xn-1. Viết chương trình tính giá trị của Xn
#include "stdafx.h"


int main()
{
	printf("Cho Xo = 0, tinh Xn = n^2.Xo + (n-1)^2.X1 +...+ (n-i)^2.Xi +...+ 2^2.Xn-2 + Xn-1\n");
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Ket qua: %d", TinhXn(n));
	return 0;
}

