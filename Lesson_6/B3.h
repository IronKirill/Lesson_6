#pragma once
#include <iostream>
using namespace std;

class B3
{
	int b3;
public:
	B3(int x)
	{
		b3 = x;
	}
	
	void show_B3() { cout << "B3 = " << b3 << "\n";}
};