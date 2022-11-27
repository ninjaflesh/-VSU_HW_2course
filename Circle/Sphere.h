#pragma once
#include "Circle.h"

class Sphere : public Circle {
public:
	void get();
	void show();
	Sphere& operator=(const Sphere&);
	double sphereVolume();
	double surfaceArea();

	friend ostream& operator<<(ostream&, const Sphere);
	friend istream& operator>>(istream&, Sphere&);
	friend bool operator>(Sphere, Sphere);
	friend bool operator<(Sphere, Sphere);

	Sphere();
	Sphere(double, double, double, double);
	Sphere(const Sphere&);
	~Sphere();

protected:
	double z;
};
