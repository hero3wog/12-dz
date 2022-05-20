#include "Header.h"

int main() {
	srand(time(NULL));
	double z[10] = { 5.3, -21.43, 3.2, 5.67, -3.22, 98.1, 70.4, -0.00012, 15.15, 0.0044 };
	int x[10] = { 22, 1, 35, -69, 47, 49, 78, -96, 12, 9 };
	complex c[10];
	for (int i = 0; i < size(c); ++i) {
		complex buf(rand() % 25, rand() % 25);
		c[i] = buf;
	}

	sortirovka(z, 10);
	sortirovka(x, 10);
	sortirovka(c, 10);

	
}