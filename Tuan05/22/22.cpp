// 22.cpp : Defines the entry point for the console application.
//
//Viết chương trình đọc và ghi cấu trúc sinh viên. Mỗi sinh viên gồm có các thông tin: MSSV (10 ký tự), Họ tên(50 ký tự) và điểm trung bình.
#include "stdafx.h"

int main()
{
	FILE *f = fopen("SV.bin", "wb+");
	if (f == NULL)
	{
		printf("Loi tap tin");
	}
	int n; // số lượng sinh viên
	printf(">>>> NHAP THONG TIN SINH VIEN >>>>\n\n");
	NhapSinhVien(f, n);
	printf("\n>>>>>> THONG TIN SINH VIEN >>>>>>>\n\n");
	DocSinhVien(f);
	fclose(f);
    return 0;
}

