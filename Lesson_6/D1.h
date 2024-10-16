#pragma once
#include "B1.h"
#include "B2.h"

class D1 : public B1, private B2
{
	int d1;
public:
	D1(int x, int y, int z) : B1(y), B2(z)
	{
		d1 = x;
	}

	void show_D1() { cout << "D1 = " << d1 << "\n"; show_B1(); show_B2(); }
};