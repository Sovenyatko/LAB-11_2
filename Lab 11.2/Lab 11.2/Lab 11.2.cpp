//Завдання 1 пункт 1 Варіант 13
//1. Напишіть програму, що вводить із клавіатури число A і друкує кількість елементів заданого масиву, більших за A.

#include<iostream>
#include<Windows.h>
#include<ctime>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    srand(time(NULL));

    const int size = 10;
    int arr[size];

    cout << "Масив: ";

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;

        cout << arr[i] << " ";
    }

    int a;
    int index = 0;

    cout << endl;
    cout << "Введіть число А: ";
    cin >> a;

    for (int i = 0; i < size; i++)
    {
        if (a < arr[i])
        {
            index++;
        }
    }

    cout << "Кількість елементів масиву більших за А: " << index;
}

