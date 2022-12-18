#include <iostream>
#include <fstream>
#include <string>

#include "Base.h"
#include "Circle.h"
#include "Sphere.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	//fstream f("source.txt", ios_base::in);

	//char str[100];
	//int k = 0;
	//while (!f.eof()) {
	//	f.getline(str, 100);
	//	k++;
	//}
	//f.close();

	//circle* temp = new circle[k];
	//f.open("source.txt", ios_base::in);
	//int i = 0;
	//while (!f.eof()) {
	//	f >> temp[i];
	//	i++;
	//}
	//f.close();

	//f.open("source.txt", ios_base::app);
	//f << endl;
	//for (int i = 0; i < k; i++) {
	//	f << circle_area(temp[i]) << endl;
	//}
	//f.close();

	try {
		Circle a(1, 2, 2.4), b(5, 1, 5.4);
		cout << a.getPerimeter() << endl;
		cout << b.getSquare() << endl;
		arrangementCircles(a, b);
		Sphere c(5, 1, 1, 0.1);
		cout << c.getVolume() << endl;
		cout << c.getPerimeter() << endl;
		Sphere c1(5, 1, 1, 0);
	}
	catch (Circle::InputError e) {
		cout << e.name << " " << e.value << endl;
	}

	int n = 3;
	Base** array = new Base * [n];
	int a;
	for (int i = 0; i < n; i++) {
		cout << "0-Circle, 1-Sphere" << endl;
		cin >> a;
		if (a == 0) {
			array[i] = new Circle;
			array[i]->get();
		}
		if (a == 1) {
			array[i] = new Sphere;
			array[i]->get();
		}
	}
	for (int i = 0; i < n; i++) {
		cout << array[i]->getSquare() << endl;
	}

	return 0;
}
