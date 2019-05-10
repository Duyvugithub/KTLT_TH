// stdafx.cpp : source file that includes just the standard includes
// 22.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void Nhap1SinhVien(FILE *f, int i)
{
	SV temp;
	while (getchar() != '\n');
	flushall();
	printf("-----Sinh vien thu %d-----\n", i + 1);
	printf("Nhap mssv: ");
	fgets(temp.MSSV, sizeof(temp.HoTen), stdin);
	printf("Nhap ten: ");
	fgets(temp.HoTen, sizeof(temp.HoTen), stdin);
	printf("Nhap diem trung binh: ");
	scanf("%lf", &temp.dtb);
	fwrite(&temp, sizeof(SV), 1, f);
}
void NhapSinhVien(FILE *f, int &n)
{
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	SV temp; // biến tạm để lưu sv ghi vô file
	for (int i = 0; i < n; i++)
	{
		Nhap1SinhVien(f, i);
	}
	rewind(f);
}
void DocSinhVien(FILE *f)
{
	int i = 0;
	SV temp;// biến tạm để lưu sv đọc từ file ra
	while (fread(&temp, sizeof(temp), 1, f))
	{
		printf("-----Sinh vien thu %d-----\n", i + 1); i++;
		printf("MSSV: %s", temp.MSSV);
		printf("Ho va ten: %s", temp.HoTen);
		printf("Diem trung binh: %.2lf\n", temp.dtb);
	}
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
