// 8.cpp : Defines the entry point for the console application.
//
// Tính tổng các chữ số của số nguyên dương n.
#include "stdafx.h"


int main()
{
	int n;
	printf("Tong so chu so cua so n\nNhap n: ");
	scanf("%d", &n);
	printf("Tong cac chu so cua %d la %d", n, TongDemSoN(n));
    return 0;
}

