// stdafx.cpp : source file that includes just the standard includes
// 6.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitList(LIST &l)
{
	l.pHead = l.pTail = NULL;
}
NODE* CreateNode(d2D temp)
{
	NODE *d2 = new NODE;
	if (d2 == NULL)
	{
		printf("Khong du bo nho RAM");
		return d2;
	}
	d2->data = temp;
	d2->pNext = NULL;
	return d2;
}
NODE* Add1Node(LIST &l, NODE* d2)
{
	l.pHead = l.pTail = d2;
	d2->pNext = NULL;
	return d2;
}
void Output(LIST l)
{
	printf("Diem 2D doc duoc o vi tri (%.2lf, %.2lf)\n", l.pHead->data.dX, l.pHead->data.dY);
}
void ReadFile(FILE *f, LIST &l)
{
	d2D temp;
	fscanf(f, "%lf", &temp.dX);
	fseek(f, 1, SEEK_CUR);
	fscanf(f, "%lf", &temp.dY);
	NODE *d2 = CreateNode(temp);
	d2 = Add1Node(l, d2);
}

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file