// 10.cpp : Defines the entry point for the console application.
//
// Kiếm tra số nguyên dương n có toàn chữ số chẳn hay không
#include "stdafx.h"

int main()
{
	int n;
	printf("Kiem tra so nguyen duong n co toan chu so chan hay khong\nNhap n: ");
	scanf("%d", &n);
	if (CheckSoChanN(n) == false)
		printf("So %d khong co toan chu so chan", n);
	else
		printf("So %d co toan chu so chan", n);

	return 0;
}

