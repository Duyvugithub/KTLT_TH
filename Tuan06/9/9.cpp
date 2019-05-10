// 9.cpp : Defines the entry point for the console application.
//
// Đếm số lượng chữ số lẻ của số nguyên dương n.
#include "stdafx.h"


int main()
{
	int n;
	printf("So luong chu so le cua so nguyen duong n\nNhap n: ");
	scanf("%d", &n);
	printf("So chu so le cua so %d la %d", n,DemSoLeN(n));
    return 0;
}

