// 23.cpp : Defines the entry point for the console application.
//
// Và viết chương trình đọc tập tình CSV chứa danh sách sinh viên và xuất ra màn hình.
#include "stdafx.h"

int main()
{
	FILE *f = fopen("SV.csv","r");
	if (f == NULL)
	{
		printf("Loi mo file");
	}
	ReadFileCSV(f);
	fclose(f);
	return 0;
}