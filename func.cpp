#include "Header.h"

complex::complex(int re, int im) {
	this->re = re;
	this->im = im;
}
int complex::module() {
	return sqrt(pow(re, 2) + pow(im, 2));
}
bool complex::operator>(const complex& num) {
	return this->module() > sqrt(pow(num.re, 2) + pow(num.im, 2));
}
ostream& operator<<(ostream& os, const complex& num) {
	return os << num.re << "+" << num.im << "i" << endl;
}
template<class T>
void print(T* ar, int size) {
	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";
	cout << endl ;
}

template <class T>
void sortirovka(T* mas, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (mas[j] > mas[j + 1]) {
				T temp = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; ++i)
		cout << mas[i] << " ";
	cout << endl;
}
template void sortirovka<int>(int*, int);
template void sortirovka<double>(double*, int);
template void sortirovka<complex>(complex*, int);