#pragma once
#include "D1.h"
#include "D2.h"

class D3 : public D1, protected D2
{
	int d3;
public:
	D3(int x, int y, int z, int i, int j, int k) : D1(y, z, i), D2(j, k)
	{
		d3 = x;
	}

	void show_D3() { cout << "D3 = " << d3 << "\n"; show_D1(); show_D2(); }
};