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

struct SinhVien {
	char MSSV[10];
	char HoTen[50];
	double dtb;
};
typedef SinhVien SV;
// nhập 1 sinh viên, i là thứ tự sinh viên
void Nhap1SinhVien(FILE *f, int i);
// nhập danh sách sinh viên, ghi vào file
void NhapSinhVien(FILE *f, int &n);
// đọc danh sách sinh viên từ file
void DocSinhVien(FILE *f);
#endif
// TODO: reference additional headers your program requires here
