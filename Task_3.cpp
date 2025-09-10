#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double start, end, step;
	
	cout << "¬ведите начальное значение x: " << endl;
	cin >> start;

	cout << "¬ведите конечное значение x: ";
	cin >> end;

	cout << "¬ведите шаг: ";
	cin >> step;

	for (double i = start; i<= end; i += step) {
		double y = sin(i);
		cout << i << " : " << y << endl;
	}
	

	return 0;
}