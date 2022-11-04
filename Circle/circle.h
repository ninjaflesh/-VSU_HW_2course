#pragma once
#include <iostream>

using namespace std;

class circle {
public:
	void get();
	void show();
	circle operator++(int);
	circle operator--(int);
	circle& operator=(const circle&);
	bool operator==(circle);
	friend bool operator>(circle, circle);
	friend bool operator<(circle, circle);
	friend ostream& operator<<(ostream&, const circle);
	friend istream& operator>>(istream&, circle&);
	friend double circle_area(circle x);

	circle();
	circle(double, double, double);
	circle(const circle&);
	~circle();

protected:
	double x, y, r;
};
