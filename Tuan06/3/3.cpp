// 3.cpp : Defines the entry point for the console application.
//
// Tính S = x + x^2 + x^3 + ...+ x^n
#include "stdafx.h"

int main()
{
	printf("Tinh x + x^2 + x^3 +...+ x^n =?\n");
	int n,x;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Ket qua: %d", Sum(x,n));
    return 0;
}

