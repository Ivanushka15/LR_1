#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double start, end, step;
	
	cout << "¬ведите начальное значение x: " << endl;
	cin >> start;

  if (!cin) {
    cerr << "Invalid input: enyer the number" << endl;
    return 1;
  }
 
	cout << "¬ведите конечное значение x: ";
	cin >> end;
  if (!cin) {
    cerr << "Invalid input: enyer the number" << endl;
    return 1;
  }
  if (end < 0) {
    cerr << "Invalid input: cannot be negative" << endl;
    return 1;
  }

	cout << "¬ведите шаг: ";
	cin >> step;
  if (!cin) {
    cerr << "Invalid input: enyer the number" << endl;
    return 1;
  }
  if (step < 0) {
    cerr << "Invalid input: cannot be negative" << endl;
    return 1;
  }

	for (double i = start; i<= end; i += step) {
		double y = sin(i);
		cout << i << " : " << y << endl;
	}
	

	return 0;
}