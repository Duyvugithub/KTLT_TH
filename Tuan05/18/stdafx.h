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

struct Diem2d {
	double dX;
	double dY;
};
typedef struct Diem2d Diem2D;

//khởi tạo mảng 
void InitMat(Diem2D **&arr2d, int row, int col);
// nhập mảng
void InputMat(Diem2D **&arr2d, int &row, int&col);
// ghi vào ma trận vào file text
void WriteFileText(FILE *f, Diem2D **arr2d, int row, int col);
// ghi vào ma trận vào file binary
void WriteFileBinary(FILE *f, Diem2D **arr2d, int row, int col);
// giải phóng mảng
void FreeMat(Diem2D **&arr2d, int row);
#endif


// TODO: reference additional headers your program requires here
