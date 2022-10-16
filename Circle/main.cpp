#include <iostream>
#include <fstream>
#include <string>
#include "D:\cpp\Circle\Circle\circle.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	fstream f("source.txt", ios_base::in);

	char str[100];
	int k = 0;
	while (!f.eof()) {
		f.getline(str, 100);
		k++;
	}
	f.close();

	circle* temp = new circle[k];
	f.open("source.txt", ios_base::in);
	int i = 0;
	while (!f.eof()) {
		f >> temp[i];
		i++;
	}
	f.close();

	f.open("source.txt", ios_base::app);
	f << endl;
	for (int i = 0; i < k; i++) {
		f << circle_area(temp[i]) << endl;
	}
	f.close();

	return 0;
}
