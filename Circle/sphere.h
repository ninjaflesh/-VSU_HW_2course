#pragma once
#include "circle.h"
class sphere : public circle {
public:
	void get();
	void show();
	sphere& operator=(const sphere&);
	double sphere_volume();
	double surface_area();

	friend ostream& operator<<(ostream&, const sphere);
	friend istream& operator>>(istream&, sphere&);
	friend bool operator>(sphere, sphere);
	friend bool operator<(sphere, sphere);

	sphere();
	sphere(double, double, double, double);
	sphere(const sphere&);
	~sphere();

protected:
	double z;
};
