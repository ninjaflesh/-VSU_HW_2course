#pragma once
#include <iostream>

using namespace std;

class circle {
public:
	void get();
	void show();
	bool operator==(circle);
	friend double circle_area(circle x);

	circle();
	circle(double, double, double);
	circle(const circle&);
	~circle();

private:
	double x, y, r;
};
