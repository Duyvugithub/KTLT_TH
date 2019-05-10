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

// nhập phân số
void Input(PS &a);
// ghi phân số vào file text
void WriteFileText(FILE *f, PS a);
// ghi phân số vào file binary
void WriteFileBinary(FILE *f, PS a);
#endif


// TODO: reference additional headers your program requires here
