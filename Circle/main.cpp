#include <iostream>
#include "D:\cpp\Circle\Circle\circle.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	circle a, b(0, -1, 5);
	a.get();
	a.show();
	b.show();
	cout << (a == b) << endl;
	cout << "Площадь окружности: " << circle_area(a) << endl;

	return 0;
}
