// stdafx.cpp : source file that includes just the standard includes
// 1.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void RowSize(FILE *f, int &dong)
{
	dong = 0;
	char ch;
	while (!feof(f))
	{
		ch = fgetc(f);
		if (ch == '\n')
			dong++;
	}
}
void PrimeFromAtoB(FILE *fout, int a[2])
{
	int dem = 0;
	int flag;  // = 1 thì là snt, 0 nếu ko là snt
	for (int i = a[0]; i <= a[1]; i++)
	{
		flag = 1;
		for (int j = 2; j <= i / 2; j++)
		{
			if (i%j == 0)
			{
				flag = 0; // ko là snt
				break;
			}
		}
		if (flag == 1)
		{
			fprintf(fout, "%d\n", i);
			dem++;
		}
	}
	printf("Ghi thanh cong %d so nguyen to giua %d va %d vao file output.txt\n",dem,a[0],a[1]);
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
