#include "sphere.h"

void sphere::get() {
	cout << "Введите коордитнаты центра окружности (x, y, z): ";
	cin >> x >> y >> z;

	bool f = true;
	while (f) {
		cout << "Введите радиус окружности: ";
		cin >> r;

		if (r > 0) f = false;
	}
	cout << endl;
}
void sphere::show() {
	if (x < 0)
		cout << "(x+" << abs(x) << ")^2 + ";
	else if (x == 0)
		cout << "x^2 + ";
	else
		cout << "(x-" << x << ")^2 + ";

	if (y < 0)
		cout << "(y+" << abs(y) << ")^2 + ";
	else if (y == 0)
		cout << "y^2 + ";
	else
		cout << "(y-" << y << ")^2 + ";

	if (z < 0)
		cout << "(z+" << abs(z) << ")^2 = ";
	else if (z == 0)
		cout << "z^2 = ";
	else
		cout << "(z-" << z << ")^2 = ";

	cout << pow(r, 2) << endl;
}
sphere& sphere::operator=(const sphere& a) {
	(circle)*this = a;
	z = a.z;
	return *this;
}
double sphere::sphere_volume() {
	double pi = 3.14159265;
	return (4.0 / 3.0) * pi * pow(r, 3);
}
double sphere::surface_area() {
	double pi = 3.14159265;
	return (4.0 * pi * pow(r, 2));
}

ostream& operator<<(ostream& out, const sphere a) {
	if (a.x < 0)
		cout << "(x+" << abs(a.x) << ")^2 + ";
	else if (a.x == 0)
		cout << "x^2 + ";
	else
		cout << "(x-" << a.x << ")^2 + ";

	if (a.y < 0)
		cout << "(y+" << abs(a.y) << ")^2 + ";
	else if (a.y == 0)
		cout << "y^2 + ";
	else
		cout << "(y-" << a.y << ")^2 + ";

	if (a.z < 0)
		cout << "(z+" << abs(a.z) << ")^2 = ";
	else if (a.z == 0)
		cout << "z^2 = ";
	else
		cout << "(z-" << a.z << ")^2 = ";

	cout << pow(a.r, 2) << endl;
	return out;
}
istream& operator>>(istream& in, sphere& a) {
	in >> a.x >> a.y >> a.z;

	bool f = true;
	while (f) {
		in >> a.r;

		if (a.r > 0) f = false;
	}
	return in;
}

bool operator>(sphere a, sphere b) {
	if ((circle)a > (circle)b) return true;
	else return false;
}
bool operator<(sphere a, sphere b) {
	if ((circle)a < (circle)b) return true;
	else return false;
}

sphere::sphere() {}
sphere::sphere(double a, double b, double c, double d) :circle(a, b, d), z(c) {}
sphere::sphere(const sphere& a) :z(a.z), circle(a) {}
sphere::~sphere() {}
