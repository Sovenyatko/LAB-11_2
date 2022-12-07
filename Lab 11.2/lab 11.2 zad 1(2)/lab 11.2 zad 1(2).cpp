//Завдання 1 пункт 2 Варіант 13
//2. Задано числовий масив 𝐴[𝑚].Вирахувати та надрукувати кількість різних чисел в цьому масиві.
//Наприклад в масиві 5, 7, 5 є 2 різних числа 7 і 5.

#include<iostream>
#include<Windows.h>
#include<ctime>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    bool alreadyThere;

    cout << "Масив: ";

    for (int i = 0; i < SIZE; )
    {
        alreadyThere = false;
        int newRandomValue = rand() % 20;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                alreadyThere = true;
                break;
            }

        }
        if (!alreadyThere)
        {
            arr[i] = newRandomValue;
            i++;
        }

    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}