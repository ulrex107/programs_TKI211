#include <iostream>
#include <cmath>

using namespace std;

/**
*\brief Функция для расчета y
*\param x Параметр x
*\return Значение функции
*/
double GetY(double x);

/**
*\brief точка входа в программу
*\return Код ошибки(0 - успех)
*/
int main()
{
setlocale(LC_ALL, "Russian");

const int LOW_BOUND = 0;
const int UP_BOUND = 1;
const double step = 0.1;
double x = LOW_BOUND;

cout « fixed;
if (x < 0)
for (x; x < 0; x+=step)
cout « "x: " « x « "| y: Невозможно посчитать значение функции в данной точке\n";
for (x; x <= UP_BOUND; x += step)
cout « "x: " « x « " | y: " « GetY(x) « '\n';
return 0;
}

double GetY(const double x)
{
return 3 * x - 4 * log(x) - 5;
}