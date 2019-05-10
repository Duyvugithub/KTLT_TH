// 18120254.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
void Init(QUEUE &q)
{
	q.pHead =q.pTail= NULL;
}
NODE* createNode(int x)
{
	NODE *p = new NODE;
	if (p == NULL)
	{
		printf("Khong tao node duoc.\n");
	}
	p->data = x;
	p->pNext = NULL;
	return p;
}
bool IsEmpty(QUEUE q)
{
	return q.pHead == NULL ? true : false;
}
bool Enqueue(QUEUE &q, NODE *p)
{
	if (p == NULL)
	{
		return false;
	}
	if (IsEmpty(q) == true)
	{
		q.pHead=q.pTail = p;
	}
	else // thêm vào cuối queue
	{
		q.pTail->pNext = p;
		q.pTail = p;
	}
	return true;
}
bool Dequeue(QUEUE &q, int &x) // lấy đầu queue
{
	if (IsEmpty(q) == true)
	{
		return false;
	}
	else
	{
		NODE *p = q.pHead;
		x = p->data;
		q.pHead = q.pHead->pNext; 
		delete p;
	}
	return true;
}
void Input(QUEUE &q)
{
	int x;
	printf("Nhap phan tu can them: ");
	scanf("%d", &x);
	NODE *p = createNode(x);
	Enqueue(q, p);
}
void Output(QUEUE q)
{
	while (IsEmpty(q) == false)
	{
		int x;
		Dequeue(q, x);  // mỗi lần lấy ra là xóa
		printf("%d\t", x);
	}
}
int main()
{
	QUEUE q;
	Init(q);
	int capacity;
	printf("Nhap so phan tu cua queue: ");
	scanf("%d", &capacity);
	for (int i = 0; i<capacity; i++)
	{
		printf("Phan tu %d - ", i + 1);
		Input(q);
	}
	Output(q);
	return 0;
}

