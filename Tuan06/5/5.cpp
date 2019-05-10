// 5.cpp : Defines the entry point for the console application.
//
// Tính tổng: S(x,n) = x + x^2/2! + x^3/3! + …+x^n/n!
#include "stdafx.h"


int main()
{
	printf("Tinh  x + x^2/2! + x^3/3! +...+ x^n/n! =?\n");
	int n, x;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Ket qua: %f",Sum(x,n));
    return 0;
}

