// stdafx.cpp : source file that includes just the standard includes
// 10.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
bool CheckSoChanN(int n)
{
	while (n > 0)
	{
		if ((n % 10) % 2 == 1)
		{
			return false;
		}
		return CheckSoChanN(n / 10);
	}

}