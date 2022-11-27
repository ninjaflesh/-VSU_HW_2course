#include <iostream>
#include <fstream>
#include <string>

#include"Base.h"
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
		Circle a(0, 0, 2), b(0, 1, 5);
		a.arrangementCircles(b);
		Sphere c(4, 5, 1, 0);
	}
	catch (Circle::InputError e) {
		cout << e.name << " " << e.value << endl;
	}

	return 0;
}
