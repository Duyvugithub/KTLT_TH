// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void KhoiTao(LIST &l)
{
	l.pHead = l.pTail = NULL;
}

void Noi(LIST l1,LIST l2)
{
	if (l1.pHead==NULL&&l2.pHead==NULL)
	{
		printf("\nkhong noi duoc");
	}
	NODE *p;
	while (l1.pHead != NULL || l2.pHead != NULL)
	{
		for (p = l1.pHead; p != NULL; p = p->pNext)
		{
			p = p->pNext;
		}
		p = l2.pHead;
	}
}


int main()
{
    return 0;
}

