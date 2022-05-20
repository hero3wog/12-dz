
#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

class complex {
	int re;
	int im;
public:
	complex(int re = 0, int im = 0);
	int module();
	bool operator >(const complex& num);
	friend ostream& operator<<(ostream& os, const complex& num);
	
	
};

template <class T>
void sortirovka(T* ar, int size);

#endif Header