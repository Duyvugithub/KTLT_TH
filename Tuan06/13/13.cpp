// 13.cpp : Defines the entry point for the console application.
//
// Tính tính các số âm trong mảng.
#include "stdafx.h"


int main()
{
	printf("Tinh tich cac so am trong mang\n");
	int *a, n;
	Input(a, n);
	printf("Tich cac so am trong mang la %d", Mul(a, n - 1));
	delete[]a;
}
