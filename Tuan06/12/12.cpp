// 12.cpp : Defines the entry point for the console application.
//
// Tính tích các số nguyên tố trong mảng.
#include "stdafx.h"


int main()
{
	printf("Tinh tich cac so nguyen to trong mang\n");
	int *a, n;
	Input(a, n);
	printf("Tich cac so nguyen to trong mang la %d", Mul(a, n - 1));
	delete[]a;
}


//bool SoNT(int n, int i = 2)
//{
//	// menh de co so
//	if (n <= 2)
//		return (n == 2) ? true : false;
//	if (n % i == 0)
//		return false;
//	if (i * i > n)
//		return true;
//
//	// de quy
//	return SoNT(n, i + 1);
//}

