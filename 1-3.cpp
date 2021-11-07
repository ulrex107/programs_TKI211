#include <iostream>
using namespace std;


/**
* \brief Вычисление давления
* \param m - масса
* \param s - площадь
* \param g - ускорение свободного падения
*/
void pressure(double s, double m, double const g);



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

std::cout « "Введите S - ";
double s;
std::cin » s;
std::cout « "Введите m - ";
double m;
std::cin » m;;

pressure(s, m);
}

void pressure(double s, double m)
{
double const g = 9.8;
std::cout « "Давление равно - " « (m * g) / s « endl;
}
