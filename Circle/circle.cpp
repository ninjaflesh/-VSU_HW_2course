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
bool circle::operator==(circle x) {
	if (r == x.r)
		return true;
	else
		return false;
}
double circle_area(circle x) {
	const double pi = 3.1415926535;
	return pi * (pow(x.r, 2));
}
ostream& operator<<(ostream& out, const circle a) {
	if (a.x < 0)
		out << "(x+" << abs(a.x) << ")^2 + ";
	else if (a.x == 0)
		out << "x^2 + ";
	else
		cout << "(x-" << a.x << ")^2 + ";

	if (a.y < 0)
		out << "(y+" << abs(a.y) << ")^2 = ";
	else if (a.y == 0)
		out << "y^2 = ";
	else
		out << "(y-" << a.y << ")^2 = ";

	out << pow(a.r, 2) << endl;

	return out;
}
istream& operator>>(istream& in, circle& a) {
	in >> a.x >> a.y >> a.r;

	if (a.r > 0) return in;
	else in >> a.r;
}

circle::circle() {}
circle::circle(const circle& a) :x(a.x), y(a.y), r(a.r) {}
circle::circle(double a, double b, double c) : x(a), y(b), r(c) {}
circle::~circle() {}
