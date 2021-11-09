#include <iostream>
#include <ctime>
using namespace std;

/*
* \brief - заполнение массива пользователем
* \param arr массив
* \param size размер массива
*/
void userInput(int* arr, const size_t size);

/*
* \brief = заполнение массива случайными числами
* \param arr массив
* \param size размер массива
*/
void randomDigits(int* arr, const size_t size);

/*
* \brief - вывод массива
* \param arr массив
* \param size размер массива
*/
void output(const int* arr, const size_t size);

/*
* \brief - вычисление суммы отрицательных элементов кратных 10
* \param arr массив
* \param size размер массива
* \return - сумма отрицательных элементов кратных 10
*/
int sum(int* arr, const size_t size);

/*
* \brief - переворот первых k элементов массива
* \param arr массив
* \param size размер массива
* \param quantity - число k
*/
void swapMyArrayPlease(int* arr, const size_t size, size_t quantity);

/*
* \brief - нахождение пары соседних элементов с произведением, равным заданному числу.
* \param arr массив
* \param size размер массива
* \param couple - заданное число для поиска пар с произведением
*/
void multiplication(int* arr, const size_t size, const int couple);

enum class path
{
Manuall = 1,
Random = 2
};

/*
* \brief Точка входа в программу
* \return Код ошибки(0 - успех)
*/
int main()
{
setlocale(LC_ALL, "Russian");
cout « "Введите количество элементов массива - ";
size_t size;
cin » size;
int* arr = new int[size];

cout « "Как хотите заполнить массив?" « '\n' « "Введите 1 для заполнения массива с клавиатуры или 2 для заполнения массива случайными числами - ";
int choice;
cin » choice;
const auto filling = static_cast<path>(choice);
switch (filling) {
case path::Random:
{
randomDigits(arr, size);
break;
}
case path::Manuall:
{
userInput(arr, size);
break;
}
default:
{
cout « "Некоректный ввод.";
return 0;
}
}

if (sum(arr, size) == 0)
cout « '\n' « "В массиве нет отрицательных чисел кратных 10.\n";
else
cout « '\n' « "Сумма отрицательных элементов массива кратных 10: " « sum(arr, size) « ".\n";
cout « "Введите количество первых элементов, которое заменятся на те же переменные, но в обратном порядке: ";
size_t quantity;
cin » quantity;
swapMyArrayPlease(arr, size, quantity);
cout « "\nВведите число, которое будет значением произведения пар: ";
int couple;
cin » couple;
multiplication(arr, size, couple);

delete[] arr;
}

void randomDigits(int* arr, const size_t size)
{
const int UP_BOUND = 1000;
const int LOW_BOUND = -1000;
srand(time(NULL));
size_t counter = 0;
while (counter++ < size)
arr[counter] = rand() % (2 * UP_BOUND + 1) + LOW_BOUND;
output(arr, size);
}

void userInput(int* arr, const size_t size)
{
size_t counter = 0;
while (counter++ < size)
cin » arr[counter];
output(arr, size);
}

void output(const int* arr, const size_t size)
{
cout « "Ваш массив: ";
size_t counter = 0;
while (counter++ < size)
cout « arr[counter] « " ";
}

int sum(int* arr, const size_t size)
{
int total = 0;
size_t counter = 0;
while (counter++ < size)
{
if ((arr[counter] < 0) && (arr[counter] % 10 == 0))
total += arr[counter];
}
return total;
}

void swapMyArrayPlease(int* arr, const size_t size, size_t quantity)
{
int buffer;
size_t counter = 1;
for (counter; counter < quantity; counter++, quantity--)
{
buffer = arr[counter];
arr[counter] = arr[quantity];
arr[quantity] = buffer;
}
output(arr, size);
}

void multiplication(int* arr, const size_t size, const int couple)
{
size_t counter = 0;
int out = 1;
cout « "Найдены пары: ";
for (counter; counter < size; counter++)
{
if (arr[counter] * arr[counter + 1] == couple)
{
cout « "[" « arr[counter] « " " « arr[counter + 1] « "]" « " ";
out++;
}
}
if (out == 1)
cout « "пар, произведение которых равно " « couple « ", нет.";
}