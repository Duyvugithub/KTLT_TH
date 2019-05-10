// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// tao danh sach lien ket
void KhoiTao(LIST &l)
{
	l.pHead = l.pTail = NULL;
}

NODE* TaoNode(int x)
{
	NODE *p = new NODE;
	if (p == NULL)
	{
		return p;
	}
	p->data = x;
	p->pNext = NULL;
	return p;
}

NODE*  ThemDau(LIST &l, NODE *p)
{
	if (l.pHead == NULL)
	{
		l.pHead = p;
		p->pNext = NULL;
	}
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
	return p;
}

NODE* ThemDuoi(LIST &l, NODE *p)
{
	if (l.pHead == NULL)
	{
		l.pHead =l.pTail= p;
		//p->pNext = NULL;
	}
	else
	{
		//while (p->pNext != NULL)
		//{
		//	p = p->pNext;   //Duyệt danh sách liên kết đến cuối. Node cuối là node có next = NULL
		//}
		l.pTail->pNext = p;
		l.pTail = p;
	}
	return p;
} 

NODE* ThemBatKy(LIST &l, NODE *p, int vitri, int x) // chèn data vào sau vị trí
{
	if (vitri == 0 || l.pHead ==NULL)
	{
		p = ThemDau(l, p);
	}
	else 
	{
		// k chay den vi tri can chen
		int k = 1;
		p = l.pHead;
		while (p != NULL && k != vitri) 
		{
			p = p->pNext;
			k++;
		}
		if (k != vitri)
		{
			printf("vi tri chen vuot qua danh sach\n");
			return NULL;
		}
		else
		{
			NODE *q = TaoNode(x);
			q->pNext = p->pNext;
			p->pNext = q;
		}
	}
	return p;
}

void XoaDau(LIST &l) 
{
	if (l.pHead == NULL) 
	{
		printf("\nkhong co gi de xoa");
	}
	l.pHead = l.pHead->pNext;

}
void XoaBatKy(LIST &l, int vitri) // xóa sau vị trí
{
	if (vitri == 0 || l.pHead == NULL) 
	{
		XoaDau(l);
	}
	else {
		int k = 1;
		NODE* p = l.pHead;
		while (p->pNext->pNext != NULL && k != vitri)
		{
			p = p->pNext;
			k++;
		}
		if (k != vitri) 
		{
			printf("vi tri xoa vuot qua vi tri cuoi\n");
		}
		else 
		{
			p->pNext = p->pNext->pNext;
		}
	}
}
void XoaDanhSach(LIST &l)
{
	NODE *q;
	while (l.pHead!=NULL)
	{
		q = l.pHead;
		l.pHead = l.pHead->pNext;
		free(q);
	}
}
void Output(LIST l)
{
	int i = 1; // hiển thị node thứ mấy
	for (NODE *p = l.pHead; p != NULL; p = p->pNext)
	{
		printf("node %d: %d\n", i++, p->data);
	}
}
//main test
int _tmain(int argc, _TCHAR* argv[])
{
	LIST l;
	int n, x;
	KhoiTao(l);
	printf("So node ban muon tao: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("nhap data note thu %d: ", i+1);
		scanf("%d", &x);
		NODE *p = TaoNode(x);
		p = ThemDuoi(l, p);
	}
	Output(l);
	int vitri;
	printf("Nhap vi tri muon chen them data: ");
	scanf("%d", &vitri);
	printf("Nhap data node can chen vao vi tri thu %d: ",vitri);
	scanf("%d", &x);
	NODE *p = TaoNode(x);
	p = ThemBatKy(l, p,vitri-1,x); //vitri-1 vì thêm sau
	Output(l);
	printf("Nhap vi tri muon xoa data: ");
	scanf("%d", &vitri);
	XoaBatKy(l, vitri-1);//vitri-1 vì thêm sau
	Output(l);
	XoaDanhSach(l);	
	Output(l);
	return 0;
}

//void In(Node *pHead)
//{
//	if (pHead != NULL)
//	{
//		printf("%d", pHead->data);
//		In(pHead->pNext);
//	}
//}


