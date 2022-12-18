#include "Circle.h"

double P = 3.1415926535;

void Circle::get() {
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
void Circle::show() {
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
void arrangementCircles(Circle a, Circle b) {
	double d = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
	if (a.r + b.r > d && a.r + d > b.r && b.r + d > a.r) {
		cout << "Окружности перескаются." << endl;
	}
	if ((a.r + b.r) == d) {
		cout << "Окружности касаются снаружи." << endl;
	}
	if (abs(a.r - b.r) == d) {
		cout << "Окружности касаются внутри." << endl;
	}
	if (a.r + b.r < d) {
		cout << "Окружности не пересекаются, вне друг друга." << endl;
	}
	if (a.r + d < b.r) {
		cout << "Окружности не пересекаются, лежит внутри." << endl;
	}
}
bool Circle::operator==(Circle a) {
	if (r == a.r && x == a.x && y == a.y)
		return true;
	else
		return false;
}
double Circle::getSquare() {
	return P * (pow(r, 2));
}
double Circle::getPerimeter() {
	return 2 * P * r;
}
ostream& operator<<(ostream& out, const Circle a) {
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
istream& operator>>(istream& in, Circle& a) {
	in >> a.x >> a.y >> a.r;
	if (a.r <= 0) { throw Circle::InputError("r <= 0", a.r); }
	return in;
}
Circle Circle::operator++(int a) {
	r++;
	return *this;
}
Circle Circle::operator--(int a) {
	r--;
	return *this;
}
bool operator>(Circle a, Circle b) {
	return a.getSquare() > b.getSquare();
}
bool operator<(Circle a, Circle b) {
	return a.getSquare() < b.getSquare();
}
Circle& Circle::operator=(const Circle& a) {
	x = a.x;
	y = a.y;
	r = a.r;
	return *this;
}

Circle::Circle() : x(0), y(0), r(1) {}
Circle::Circle(const Circle& a) :x(a.x), y(a.y), r(a.r) {}
Circle::Circle(double a, double b, double c) : x(a), y(b), r(c) {
	if (r <= 0) { throw InputError("r <= 0", r); }
}
Circle::~Circle() {}
