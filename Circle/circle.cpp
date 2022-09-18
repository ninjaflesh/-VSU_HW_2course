#include <iostream>
#include "D:\cpp\Circle\Circle\circle.h"

using namespace std;

void circle::get() {
	cout << "Введите коордитнаты центра окружности (x, y): ";
	cin >> x >> y;
	
	bool f = true;
	while (f) {
		cout << "Введите радиус окружности: ";
		cin >> r;

		if (r >= 1) f = false;
	}
	cout << endl;
}
void circle::show() {
	cout << "(x-" << x << ")^2 + (y-" << y << ")^2 = " << pow(r, 2) << endl;
}
