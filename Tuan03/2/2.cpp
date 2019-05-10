// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int LayDataNodeDau(LIST l)
{
	NODE* p = l.pHead;
	return p->data;
}
int LayDataNodeCuoi(LIST l)
{
	NODE* p = l.pHead;
	for (NODE *p = l.pHead; p != NULL; p = p->pNext)
	{
		p = p->pNext;
	}
	return p->data;
}
int LayDataNodeBatKy(LIST l, int vitri) 
{
	int k = 0;
	NODE* p = l.pHead;
	while (p->pNext != NULL && k != vitri)
	{
		p = p->pNext;
		k++;
	}
	return p->data;
}
int DoDaiList(LIST l)
{
	int dem = 0;
	for (NODE *p = l.pHead; p != NULL; p = p->pNext)
	{
		dem++;
	}
	return dem;
}
NODE* TimKiemData(LIST l, int value) 
{
	for (NODE* p = l.pHead; p != NULL; p = p->pNext)
	{
		if (p->data == value) 
		{
			return p;
		}
		else
		{
			printf("khong tim thay data\n");
		}
	}
}
int main()
{
    return 0;
}

