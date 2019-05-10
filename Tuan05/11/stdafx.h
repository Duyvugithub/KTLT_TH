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

// đọc kích thước ma trận
void MatSize(FILE *f, int &row, int &col);
// khởi tạo mảng
void InitMat(Diem2D **&arr2d, int row, int col);
// giải phóng mảng
void FreeMat(Diem2D **&arr2d, int row);
// đọc mảng từ file
void ReadMat(FILE *f, Diem2D **&arr2d, int row, int col);
// in mảng ra màn hình
void Output(Diem2D **arr2d, int row, int col);
#endif


// TODO: reference additional headers your program requires here
