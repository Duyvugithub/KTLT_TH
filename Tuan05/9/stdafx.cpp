// stdafx.cpp : source file that includes just the standard includes
// 9.pch will be the pre-compiled header
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
NODE* AddTail(LIST &l, NODE* dt)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = dt;
		dt->pNext = NULL;
		return dt;
	}
	else
	{
		l.pTail->pNext = dt;
		l.pTail = dt;
	}
	return dt;
}
void Output(LIST l)
{
	int i = 1;
	for (NODE *dt = l.pHead; dt != NULL; dt = dt->pNext)
	{
		printf("Duong tron thu %d co tam o vi tri (%.4lf, %.4lf), ban kinh %.4lf\n", i, dt->data.tam.dX, dt->data.tam.dY,dt->data.r);
		i++;
	}
}
// số dòng là số đường tròn
void FileRowSize(FILE *f, int &size)
{
	char c;
	size = 1; // nếu ghi đường tròn cuối xong có enter xuống dòng thì size =0
	while (!feof(f))
	{
		c = getc(f);
		if (c == '\n')
			size++;
	}
}
void ReadFile(FILE *f, int size, LIST &l)
{
	DT temp;
	for (int i = 0; i < size; i++)
	{
		fscanf(f, "%lf", &temp.tam.dX);
		fseek(f, 1, SEEK_CUR);
		fscanf(f, "%lf", &temp.tam.dY);
		fseek(f, 1, SEEK_CUR);
		fscanf(f, "%lf", &temp.r);
		NODE *dt = CreateNode(temp);
		dt = AddTail(l, dt);
	}
}
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
