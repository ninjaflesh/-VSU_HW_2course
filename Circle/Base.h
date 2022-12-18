#pragma once
#include <iostream>

using namespace std;

class Base {
public:
	virtual void get() = 0;
	virtual void show() = 0;
	virtual double getSquare() = 0;
};
