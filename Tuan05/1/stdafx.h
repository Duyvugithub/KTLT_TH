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

// tìm số dòng
void RowSize(FILE *f, int &dong);
// tìm số nguyên tố giữa m và n rồi ghi vào output.txt
void PrimeFromAtoB(FILE *fout, int a[2]);

#endif

// TODO: reference additional headers your program requires here
