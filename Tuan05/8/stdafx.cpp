// stdafx.cpp : source file that includes just the standard includes
// 8.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitList(LIST &l)
{
	l.pHead = l.pTail = NULL;
}
NODE* CreateNode(DT temp)
{
	NODE *dt = new NODE;
	if (dt == NULL)
	{
		printf("Khong du bo nho RAM");
		return dt;
	}
	dt->data = temp;
	dt->pNext = NULL;
	return dt;
}
NODE* Add1Node(LIST &l, NODE* dt)
{
	l.pHead = l.pTail = dt;
	dt->pNext = NULL;
	return dt;
}
void Output(LIST l)
{
	printf("Duong tron doc duoc co tam o vi tri (%.5lf, %.5lf), ban kinh %.5lf\n", l.pHead->data.tam.dX, l.pHead->data.tam.dY ,l.pHead->data.r);
}
void ReadFile(FILE *f, LIST &l)
{
	DT temp;
	fscanf(f, "%lf", &temp.tam.dX);
	fseek(f, 1, SEEK_CUR);
	fscanf(f, "%lf", &temp.tam.dY);
	fseek(f, 1, SEEK_CUR);
	fscanf(f, "%lf", &temp.r);
	NODE *dt = CreateNode(temp);
	dt = Add1Node(l, dt);
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
