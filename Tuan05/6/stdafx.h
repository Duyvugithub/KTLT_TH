// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#ifndef _STDAFX_H_
#define _STDAFX_H_

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>

struct Diem2D {
	double dX;
	double dY;
};
typedef struct Diem2D d2D;
struct Node {
	d2D data;
	struct Node *pNext;
};
typedef struct Node NODE;
struct List {
	NODE *pHead;
	NODE *pTail;
};
typedef struct List LIST;

// khởi tạo linked list
void InitList(LIST &l);
// tạo 1 node
NODE* CreateNode(d2D temp);
// thêm 1 node vào dslk
NODE* Add1Node(LIST &l, NODE* d2);
// xuất dslk ra
void Output(LIST l);
// đọc file rồi lưu vào dslk
void ReadFile(FILE *f, LIST &l);


#endif


// TODO: reference additional headers your program requires here
