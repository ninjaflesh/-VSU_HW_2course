#pragma once
#include "circle.h"
class angem_circle : public circle {
public:
	void get();
	void show();

	angem_circle();
	angem_circle(double, double, double, double);
	angem_circle(const angem_circle&);
	~angem_circle();

protected:
	double z;
};

