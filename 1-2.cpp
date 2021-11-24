#include <iostream>
#include <cmath>

using namespace std;
/**
* \brief Вычисление расстояния между двумя точками с заданными координтами 
* \param double x1 - координата x первой точки
* \param double y1 - координата y первой точки
* \param double x2 - координата x второй точки
* \param double y1 - координата y второй точки
* \return расстояние между двумя точками
*/
double GetDistance(const double x1, const double y1, const double x2, const double y2);


/**
* \brief Точка входа в программу
* \param double x1 - координата x первой точки
* \param double y1 - координата y первой точки
* \param double x2 - координата x второй точки
* \param double y1 - координата y второй точки
* \return Код ошибки(0 - успех)
*/
int main()
{
	double x1, y1,x2, y2;
	cout << "Введите координаты первой точки" << "\n";
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки" << "\n";
	cin >> x2 >> y2;
	
	double distance = GetDistance(x1, y1, x2, y2);

	cout << distance;
	return 0;
}	

double GetDistance(const double x1, const double y1, const double x2, const double y2)
{
	double rezult = sqrt(pow((x2-x1),2) + pow((y2-y1), 2));
	return rezult;
}