#include "angem_circle.h"

void angem_circle::get() {
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
void angem_circle::show() {
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

	if (z < 0)
		cout << "(z+" << abs(z) << ")^2 = ";
	else if (z == 0)
		cout << "z^2 = ";
	else
		cout << "(z-" << z << ")^2 = ";

	cout << pow(r, 2) << endl;
}

angem_circle::angem_circle() {}
angem_circle::angem_circle(double a, double b, double c, double d) :circle(a, b, d), z(c) {}
angem_circle::angem_circle(const angem_circle& a) :z(a.z), circle(a) {}
angem_circle::~angem_circle() {}
