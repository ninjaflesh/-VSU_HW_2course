#pragma once
#include "Base.h"

class Circle : public Base {
public:
	class InputError {
	public:
		string name;
		double value;

		InputError(string e, double v) {
			name = e;
			value = v;
		}
	};

	void get();
	void show();
	double getSquare();
	double getPerimeter();
	Circle operator++(int);
	Circle operator--(int);
	Circle& operator=(const Circle&);
	bool operator==(Circle);

	friend void arrangementCircles(Circle, Circle);
	friend ostream& operator<<(ostream&, const Circle);
	friend istream& operator>>(istream&, Circle&);
	friend bool operator>(Circle, Circle);
	friend bool operator<(Circle, Circle);

	Circle();
	Circle(double, double, double);
	Circle(const Circle&);
	~Circle();

protected:
	double x, y, r;
};
