#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief вычисление функции по заданной формуле
* \param x - константа
* \return результат
*/
double solution (double x);


/**
* \brief Точка входа в программу
* \param x - входное значение x
* \return Код ошибки (0-успех)
*/


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите x = ";
	double x;
	cin >> x;

	double rezylt = solution(x);
	cout << rezylt;

	return 0;
}


double solution(double x) //функция поиска решений
{
	double y;
	const double a = 2.5;
	if (x > a)
	{
		y = ( x * ( pow( sin( x ) , 2) ) );
	}
	else
	{
		y = ( x * ( pow ( cos ( x ) , 2) ) );
	}
	return y;
}