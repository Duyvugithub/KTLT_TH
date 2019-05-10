// stdafx.cpp : source file that includes just the standard includes
// 13.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

void Input(PS &a)
{
	printf("Nhap gia tri tu so: ");
	scanf("%d", &a.iTu);
	printf("Nhap gia tri mau so: ");
	scanf("%d", &a.iMau);
		
}
void WriteFileText(FILE *f, PS a)
{
	fprintf(f, "%d", a.iTu);
	fprintf(f, "/");
	fprintf(f, "%d ", a.iMau);
	fprintf(f, "\r\n");
}
void WriteFileBinary(FILE *f, PS a)
{
	fwrite(&a, sizeof(PS), 1, f);
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
