// stdafx.cpp : source file that includes just the standard includes
// 5.pch will be the pre-compiled header
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
NODE* AddTail(LIST &l, NODE* ps)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = ps;
		ps->pNext = NULL;
		return ps;
	}
	else
	{
		l.pTail->pNext = ps;
		l.pTail = ps;
	}
	return ps;
}
void Output(LIST l)
{
	int i = 1;
	for (NODE *ps = l.pHead; ps != NULL; ps = ps->pNext)
	{
		printf("Phan so thu %d: %d/%d\n", i, ps->data.iTu, ps->data.iMau);
		i++;
	}
}
// số dòng là số phân số
void FileRowSize(FILE *f, int &size)
{
	char c;
	size = 1; // nếu ghi phân số cuối xong có enter xuống dòng thì size =0
	while (!feof(f))
	{
		c = getc(f);
		if (c == '\n')
			size++;
	}
}

void ReadFile(FILE *f, int size, LIST &l)
{
	PS temp;
	for (int i = 0; i < size; i++)
	{
		fscanf(f, "%d", &temp.iTu);
		fseek(f, 1, SEEK_CUR);
		fscanf(f, "%d", &temp.iMau);
		NODE *ps = CreateNode(temp);
		ps = AddTail(l, ps);
	}
}

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
