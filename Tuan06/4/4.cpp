// 4.cpp : Defines the entry point for the console application.
//
// Tính S = x + x^3 + x^5 + …+ x^2n+1
#include "stdafx.h"

int main()
{
	printf("Tinh x + x^3 + x^5 +...+ x^(2n+1) =?\n");
	int n, x;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Ket qua: %d", Sum(x,n));
    return 0;
}

