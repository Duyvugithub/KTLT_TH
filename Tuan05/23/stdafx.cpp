// stdafx.cpp : source file that includes just the standard includes
// 23.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
int RowFile(FILE *f)
{
	int row = 0;
	char c;
	while (!feof(f))
	{
		c = getc(f);
		if (c == '\n')
			row++;
	}
	return row;
}
void ReadFileCSV(FILE *f)
{
	int n = RowFile(f);	//số sinh viên
	printf("Danh sach co %d sinh vien\n", n);
	rewind(f);
	char f1[MAX_FIELD], f2[MAX_FIELD], f3[MAX_FIELD];
	fscanf(f, "%[^,],%[^,],%s", &f1, &f2, &f3);
	printf("\n%s\t\t\t%s\t\t\t%s\n", f1, f2, f3);
	SV temp;
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%[^,],%[^,],%lf", &temp.MSSV, &temp.HoTen, &temp.dtb);
		printf("%s\t\t%s\t\t%.2lf", temp.MSSV, temp.HoTen, temp.dtb);
	}
}

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
