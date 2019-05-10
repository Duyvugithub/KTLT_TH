// stdafx.cpp : source file that includes just the standard includes
// 16.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void Input(Diem2D &a)
{
	printf("Nhap toa do x: ");
	scanf("%lf", &a.dX);
	printf("Nhap toa do y: ");
	scanf("%lf", &a.dY);

}
void WriteFileText(FILE *f, Diem2D a)
{
	fprintf(f, "%.2lf", a.dX);
	fprintf(f, " ");
	fprintf(f, "%.2lf ", a.dY);
	fprintf(f, "\r\n");
}
void WriteFileBinary(FILE *f, Diem2D a)
{
	fwrite(&a, sizeof(Diem2D), 1, f);
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
