// stdafx.cpp : source file that includes just the standard includes
// 4.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void InitList(LIST &l)
{
	l.pHead = l.pTail = NULL;
}
NODE* CreateNode(PS temp)
{
	NODE *ps = new NODE;
	if (ps == NULL)
	{
		printf("Khong du bo nho RAM");
		return ps;
	}
	ps->data = temp;
	ps->pNext = NULL;
	return ps;
}
NODE* Add1Node(LIST &l, NODE* ps)
{
	l.pHead = l.pTail = ps;
	ps->pNext = NULL;
	return ps;
}
void Output(LIST l)
{
	printf("Phan so doc duoc: %d/%d\n", l.pHead->data.iTu, l.pHead->data.iMau);
}

void ReadFile(FILE *f, LIST &l)
{
	PS temp;
	fscanf(f, "%d", &temp.iTu);
	fseek(f, 1, SEEK_CUR);
	fscanf(f, "%d", &temp.iMau);
	NODE *ps = CreateNode(temp);
	ps = Add1Node(l, ps);
}

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
