#include <iostream>
#include <fstream>
#include <string>
#include "D:\cpp\Circle\Circle\circle.h"
#include "D:\cpp\Circle\Circle\angem_circle.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	angem_circle a, b(1, 4, -3, 5), c(b);
	a.get();
	a.show();
	b.show();
	c.show();

	return 0;
}
