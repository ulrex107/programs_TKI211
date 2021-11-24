#include <iostream>
#include <algorithm>

using namespace std;

/**
* \brief перемена местами переменных с использованием 3ей переменной
* \param c - переменная-буфер
*/
void swapping_with_third_variable(double value1, double value2);

/**
* \brief пермена местами переменных без использования 3ей переменной
*
*/
void swap_without_third_variable(double value1, double value2);

/**
* \brief выбор заполнения массива
*/
enum path
{
	first = 1,
	second = 2
};

/**
* \brief Точка входа в программу.
* \param a - переменная 1
* \param b - переменная 2
* \param f - переменная для выбора алгоритма
* \return Код ошибки (0 - успех).
*/

int main()
{
	setlocale(LC_ALL, "Russian");

	int value1, value2, choice;
	cout << "Введите а и b ";
	cin >> value1 >> value2;
	cout << "Выберите как хотите поменять цифры:\n1 - с с помощью третьей переменной\n2 - без третьей переменной\n";
	cin >> choice;
	const auto filling = static_cast<path>(choice);
	switch (filling) {
	case path::first:
	{
		swapping_with_third_variable(value1, value2);
		break;
	}
	case path::second:
	{
		swap_without_third_variable( value1,  value2);
		break;
	}
	default:
		cout << "Некоректный ввод.";
		break;
	}
}

void swapping_with_third_variable(double value1, double value2)
{
	swap(value1,value2);
	cout << "Значение а после перестановки - " << value1 << '\n'<< "Значение b после перестановки - " << value2 << '\n';
	
}


void swap_without_third_variable(double value1, double value2){
	value1 = value1 + value2;
	value2 = value1 - value2;
	value1 = value1 - value2;
	cout << "Значение а после перестановки - " << value1 << '\n'<< "Значение b после перестановки - " << value2 << '\n';
}