// stdafx.cpp : source file that includes just the standard includes
// 7.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitList(LIST &l)
{
	l.pHead = l.pTail = NULL;
}
NODE* CreateNode(Diem2D temp)
{
	NODE *diem2d = new NODE;
	if (diem2d == NULL)
	{
		printf("Khong du bo nho RAM");
		return diem2d;
	}
	diem2d->data = temp;
	diem2d->pNext = NULL;
	return diem2d;
}
NODE* AddTail(LIST &l, NODE* diem2d)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = diem2d;
		diem2d->pNext = NULL;
		return diem2d;
	}
	else
	{
		l.pTail->pNext = diem2d;
		l.pTail = diem2d;
	}
	return diem2d;
}
void Output(LIST l)
{
	int i = 1;
	for (NODE *diem2d = l.pHead; diem2d != NULL; diem2d = diem2d->pNext)
	{
		printf("Diem 2D thu %d o vi tri (%.4lf, %.4lf)\n", i, diem2d->data.dX, diem2d->data.dY);
		i++;
	}
}
// số dòng là số điểm 2D
void FileRowSize(FILE *f, int &size)
{
	char c;
	size = 1; // nếu ghi điểm cuối xong có enter xuống dòng thì size =0
	while (!feof(f))
	{
		c = getc(f);
		if (c == '\n')
			size++;
	}
}

void ReadFile(FILE *f, int size, LIST &l)
{
	Diem2D temp;
	for (int i = 0; i < size; i++)
	{
		fscanf(f, "%lf", &temp.dX);
		fseek(f, 1, SEEK_CUR);
		fscanf(f, "%lf", &temp.dY);
		NODE *diem2d = CreateNode(temp);
		diem2d = AddTail(l, diem2d);
	}
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
