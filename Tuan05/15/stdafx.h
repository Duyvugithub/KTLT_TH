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

struct PhanSo {
	int iTu;
	int iMau;
};
typedef struct PhanSo PS;

//khởi tạo mảng 
void InitMat(PS **&arr2d, int row, int col);
// nhập mảng
void InputMat(PS **&arr2d, int &row, int&col);
// ghi vào ma trận vào file text
void WriteFileText(FILE *f, PS **arr2d, int row, int col);
// ghi vào ma trận vào file binary
void WriteFileBinary(FILE *f, PS **arr2d, int row, int col);
// giải phóng mảng
void FreeMat(PS **&arr2d, int row);
#endif

// TODO: reference additional headers your program requires here
