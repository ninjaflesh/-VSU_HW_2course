#include <iostream>
#include "D:\cpp\Circle\Circle\circle.h"

using namespace std;

void circle::get() {
	cout << "Введите коордитнаты центра окружности (x, y): ";
	cin >> x >> y;
	cout << "Введите радиус акружности: ";
	cin >> r;
	cout << endl;
}
void circle::show() {
	cout << "(x-" << x << ")^2 + (y-" << y << ")^2 = " << pow(r, 2) << endl;
}
