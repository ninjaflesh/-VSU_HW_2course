#pragma once
#include"Base.h"

class Circle : public Base {
public:
	class InputError {
	public:
		string name;
		int value;

		InputError(string e, int v) {
			name = e;
			value = v;
		}
	};

	void get();
	void show();
	void arrangementCircles(Circle);
	double circleArea();

	Circle operator++(int);
	Circle operator--(int);
	Circle& operator=(const Circle&);
	bool operator==(Circle);

	friend bool operator>(Circle, Circle);
	friend bool operator<(Circle, Circle);
	friend ostream& operator<<(ostream&, const Circle);
	friend istream& operator>>(istream&, Circle&);

	Circle();
	Circle(double, double, double);
	Circle(const Circle&);
	~Circle();

protected:
	double x, y, r;
};
