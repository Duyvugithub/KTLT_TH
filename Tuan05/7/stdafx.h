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

struct Diem2d {
	double dX;
	double dY;
};
typedef struct Diem2d Diem2D;
struct Node {
	Diem2D data;
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
NODE* CreateNode(Diem2D temp);
// thêm vào đuôi dslk
NODE* AddTail(LIST &l, NODE* diem2d);
// xuất dslk ra
void Output(LIST l);
// tìm số dòng của file, cũng là số điểm 2d có trong file
void FileRowSize(FILE *f, int &size);
// đọc file rồi lưu vào dslk
void ReadFile(FILE *f, int size, LIST &l);


#endif

// TODO: reference additional headers your program requires here
