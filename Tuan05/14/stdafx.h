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
void InitArr(PS *&arr1d, int n);
// nhập mảng
void InputArr(PS *&arr1d, int &n);
// ghi vào ma trận vào file text
void WriteFileText(FILE *f, PS *arr1d, int n);
// ghi vào ma trận vào file binary
void WriteFileBinary(FILE *f, PS*arr1d, int n);
// giải phóng mảng
void FreeMat(PS *&arr1d);
#endif



// TODO: reference additional headers your program requires here
