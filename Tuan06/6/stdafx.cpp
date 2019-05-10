// stdafx.cpp : source file that includes just the standard includes
// 6.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
long TinhXn(int n)
{
	if (n == 0)
		return 0;
	long s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += TinhXn(n - i)*i*i; // lan ra dau tien ung voi lan vao cuoi cung (Xn-1) va nguoc lai -> dk n==0 la lan ra cuoi cung -> di tu phan tu cuoi cung di len
	}
	return s;
}