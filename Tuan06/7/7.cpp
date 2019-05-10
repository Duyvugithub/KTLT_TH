// 7.cpp : Defines the entry point for the console application.
//
// Đếm số lượng chữ số của số nguyên dương n.

#include "stdafx.h"


int main()
{
	int n;
	printf("Dem so luong chu so cua so n\nNhap n: ");
	scanf("%d", &n);
	printf("%d co %d chu so",n,DemSoN(n));
    return 0;
}

