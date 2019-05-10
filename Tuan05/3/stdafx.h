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

//khởi tạo mảng 
void InitMat(int **&arr2d, int row, int col);
// nhập mảng
void InputMat(int**&arr2d, int &row, int&col);
// ghi vào ma trận vào file
void WriteFile(FILE *f, int **arr2d, int row, int col);
// giải phóng mảng
void FreeMat(int **&arr2d, int row);
#endif
// TODO: reference additional headers your program requires here
