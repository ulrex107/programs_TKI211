#include <iostream>
using namespace std;


/**
* \brief Вычисление давления
* \param m - масса
* \param s - площадь
* \param g - ускорение свободного падения
*/
double pressure(const double s, const double m);



/**
* \brief точка входа в программу
* \param m - масса
* \param s - площадь
* \param g - ускорение свободного падения
* \return Код ошибки(0 - успех)
*/
int main()
{
setlocale(LC_ALL, "Russian");

cout << "Введите S - ";
double s;
cin >> s;
cout << "Введите m - ";
double m;
cin >> m;;

double rezult = pressure(s, m);
cout << rezult;
}

double pressure(const double s, const double m)
{
double const g = 9.8;
return (m * g) / s;
}
