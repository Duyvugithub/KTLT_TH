// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#ifndef _STDAFX_H_
#define _STDAFX_H_
#define MAX_FIELD 20 // số ký tự tối đa biểu diễn loại thông tin (MSSV,Họ Tên,DTB)

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>

struct SinhVien {
	char MSSV[10];
	char HoTen[50];
	double dtb;
};
typedef SinhVien SV;

// đếm số sinh viên có trong danh sách
int RowFile(FILE *f);
// đọc file csv rồi in ra màn hình
void ReadFileCSV(FILE *f);
#endif
// TODO: reference additional headers your program requires here
