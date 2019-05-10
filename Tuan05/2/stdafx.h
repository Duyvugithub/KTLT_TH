// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#ifndef STDAFX_H
#define STDAFX_H

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include "string.h"

// đọc file để lấy độ dài matrix
void MatSize(FILE *f, int &row, int &col);
// khởi tại mảng 2 chiều để chứa ma trận
void InitMat(int **&arr2d, int row, int col);
// giải phóng mảng 2 chiều
void FreeMat(int **&arr2d, int row);
// đọc mảng 2 chiều 
void ReadMat(FILE *f, int **&arr2d, int row, int col);
// in mảng đọc được ra màn hình
void Output(int **arr2d, int row, int col);
#endif
// TODO: reference additional headers your program requires here
