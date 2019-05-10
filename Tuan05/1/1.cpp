// 1.cpp : Defines the entry point for the console application.
//

//Đọc 2 số nguyên dương M, N từ file input.txt
//Ghi các số nguyên tố trong đoạn[M, N] vào file output.txt
#include "stdafx.h"
int main()
{
	//mở file input.txt
	FILE *f = fopen("input.txt", "rt");
	if (f == NULL)
	{
		printf("Khong mo duoc file.\n");
		return 1;
	}
	// tìm số dòng
	int dong;
	RowSize(f, dong);
	rewind(f);
	// ghi 2 số trong file input.txt vào mảng a
	int a[2];
	for (int i = 0; i < dong; i++)
	{
		fscanf(f, "%d", &a[i]);
	}
	printf("Hai so doc duoc la %d va %d\n", a[0], a[1]);
	// mở file output.txt
	FILE *fout = fopen("output.txt", "wt");
	if (fout == NULL)
	{
		printf("Loi tao tep");
		return 1;
	}
	// tìm số nguyên tố giữa m và n rồi ghi vào output.txt
	PrimeFromAtoB(fout, a);
	// đóng file
	fcloseall();
    return 0;
}

