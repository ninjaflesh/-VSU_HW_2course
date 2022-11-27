#include "Sphere.h"

double PI = 3.1415926535;

void Sphere::get() {
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
void Sphere::show() {
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
Sphere& Sphere::operator=(const Sphere& a) {
	(Circle&)*this = a;
	z = a.z;
	return *this;
}
double Sphere::sphereVolume() {
	return (4.0 / 3.0) * PI * pow(r, 3);
}
double Sphere::surfaceArea() {
	return (4.0 * PI * pow(r, 2));
}
ostream& operator<<(ostream& out, const Sphere a) {
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
istream& operator>>(istream& in, Sphere& a) {
	in >> a.x >> a.y >> a.z >> a.r;
	if (a.r <= 0) { throw Circle::InputError("r <= 0", a.r); }
	return in;
}
bool operator>(Sphere a, Sphere b) {
	return (Circle)a > (Circle)b;
}
bool operator<(Sphere a, Sphere b) {
	return (Circle)a > (Circle)b;
}

Sphere::Sphere() : z(0), Circle() {}
Sphere::Sphere(double a, double b, double c, double d) :Circle(a, b, d), z(c) {
	if (r <= 0) { throw InputError("r <= 0", r); }
}
Sphere::Sphere(const Sphere& a) :z(a.z), Circle(a) {}
Sphere::~Sphere() {}
