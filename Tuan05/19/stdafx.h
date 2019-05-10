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
typedef Diem2d Diem2D;
struct DuongTron {
	Diem2D tam;
	double r;
};
typedef struct DuongTron DT;

// nhập đường tròn
void Input(DT &a);
// ghi đường tròn vào file text
void WriteFileText(FILE *f, DT a);
// ghi đường tròn vào file binary
void WriteFileBinary(FILE *f, DT a);
#endif
// TODO: reference additional headers your program requires here
