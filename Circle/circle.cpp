#include "D:\cpp\Circle\Circle\circle.h"

void circle::get() {
	cout << "Введите коордитнаты центра окружности (x, y): ";
	cin >> x >> y;

	bool f = true;
	while (f) {
		cout << "Введите радиус окружности: ";
		cin >> r;

		if (r > 0) f = false;
	}
	cout << endl;
}
void circle::show() {
	if (x < 0)
		cout << "(x+" << abs(x) << ")^2 + ";
	else if (x == 0)
		cout << "x^2 + ";
	else
		cout << "(x-" << x << ")^2 + ";

	if (y < 0)
		cout << "(y+" << abs(y) << ")^2 = ";
	else if (y == 0)
		cout << "y^2 = ";
	else
		cout << "(y-" << y << ")^2 = ";

	cout << pow(r, 2) << endl;
}
bool circle::circle_equal(circle x) {
	if (r == x.r)
		return true;
	else
		return false;
}
circle::circle() {}
circle::circle(const circle& a) :x(a.x), y(a.y), r(a.r) {}
circle::circle(double a, double b, double c) : x(a), y(b), r(c) {}
circle::~circle() {}
