// 18120254.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
void Init(STACK &s)
{
	s.pTop = NULL;
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
bool IsEmpty(STACK s)
{
	return s.pTop == NULL ? true : false;
}
bool Push(STACK &s, NODE *p)
{
	if (p == NULL)
	{
		return false;
	}
	if (IsEmpty(s)==true) 
	{
		s.pTop = p;
	}       
	else
	{
		p->pNext = s.pTop;
		s.pTop = p;
	}
	return true;
}
bool Pop(STACK &s,int &x) // lấy data ra rồi xóa top
{
	if (IsEmpty(s)==true)
	{
		return false;
	}
	else
	{
		NODE *p = s.pTop;
		x = p->data;
		s.pTop = s.pTop->pNext;  //thuat toan xoa phan tu dau
		delete p;
	}
	return true;
}
void Input(STACK &s)
{
	int x;
	printf("Nhap phan tu can them: ");
	scanf("%d", &x);
	NODE *p = createNode(x);
	Push(s, p);
}
void Output(STACK s)
{
	while (IsEmpty(s)==false)
	{
		int x;
		Pop(s, x);  // mỗi lần lấy ra là xóa
		printf("%d\t", x);
	}
}
int main()
{
	STACK s;
	Init(s);
	int capacity;
	printf("Nhap so phan tu cua stack: ");
	scanf("%d", &capacity);
	for(int i=0;i<capacity;i++)
	{
		printf("Phan tu %d - ",i+1);
		Input(s);
	}
	Output(s);
    return 0;
}

