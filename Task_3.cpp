#include <iostream>
#include <math.h>

int main() {
setlocale(LC_ALL, "RU");
double start, end, step;

std::cout << "Enter the initial value x: ";
std::cin >> start; // Задаем исходное значение переменной
if (!std::cin) {
  std::cerr<<"Invalid input: enyer the number" << std::endl;
  return 1;
}

std::cout << "Enter the final value x: ";
std::cin >> end; // Задаем конечноe значение переменной
if (!std::cin) {
	std::cerr << "Invalid input: enyer the number" << std::endl;
	return 1;
}
if (end < 0) {
  std::cerr << "Invalid input: can't be negative" << std::endl;
  return 1;
}

std::cout << "Enter the step: ";
std::cin >> step; // Задаем шаг, с которым с которым будет изменяться аргумент
if (!std::cin) {
	std::cerr << "Invalid input: enyer the number" << std::endl;
	return 1;
}
if (step < 0) {
  std::cerr << "Invalid input: cannot be negative" <<std::endl;
}
for (double x = start; x <= end; x += step) {
double y = sin(x); // функция y = sin(x)
std::cout << x << " | " << y << std::endl; // Выводим значения функции для каждого аргумента (x | y)
return 1;
}
return 0;
}