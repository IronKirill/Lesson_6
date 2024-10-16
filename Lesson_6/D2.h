#pragma once
#include "B3.h"

class D2 : private B3
{
	int d2;
public:
	D2(int x, int y) : B3(y)
	{
		d2 = x;
	}

	void show_D2() { cout << "D2 = " << d2 << "\n"; show_B3(); }
};