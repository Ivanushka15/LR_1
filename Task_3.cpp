#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double start, end, step;
	
	cout << "������� ��������� �������� x: " << endl;
	cin >> start;

	cout << "������� �������� �������� x: ";
	cin >> end;

	cout << "������� ���: ";
	cin >> step;

	for (double i = start; i<= end; i += step) {
		double y = sin(i);
		cout << i << " : " << y << endl;
	}
	

	return 0;
}