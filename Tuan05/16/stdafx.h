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

// nhập điểm 2d
void Input(Diem2D &a);
// ghi điểm 2d vào file text
void WriteFileText(FILE *f, Diem2D a);
// ghi điểm 2d vào file binary
void WriteFileBinary(FILE *f, Diem2D a);
#endif



// TODO: reference additional headers your program requires here
