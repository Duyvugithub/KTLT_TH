// stdafx.cpp : source file that includes just the standard includes
// 19.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void Input(DT &a)
{
	printf("Nhap toa do x cua tam: ");
	scanf("%lf", &a.tam.dX);
	printf("Nhap toa do y cua tam: ");
	scanf("%lf", &a.tam.dY);
	printf("Nhap ban kinh: ");
	scanf("%lf", &a.r);

}
void WriteFileText(FILE *f, DT a)
{
	fprintf(f, "%.2lf", a.tam.dX);
	fprintf(f, ",");
	fprintf(f, "%.2lf", a.tam.dY);
	fprintf(f, ",");
	fprintf(f, "%.2lf ", a.r);
	fprintf(f, "\r\n");
}
void WriteFileBinary(FILE *f, DT a)
{
	fwrite(&a, sizeof(DT), 1, f);
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
