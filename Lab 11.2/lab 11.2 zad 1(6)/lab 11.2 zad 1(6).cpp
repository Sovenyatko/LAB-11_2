//Завдання 1 пункт 5 Варіант 13
//6. В одновимірному масиві, що складається з дійсних елементів, обчислити кількість елементів масиву, рівних 0; 
//суму елементів масиву, розташованих після мінімального елемента.Упорядкувати елементи масиву за зростанням модулів елементів

#include<iostream>
#include<Windows.h>
#include<ctime>
#include<iomanip>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    srand(time(NULL));

    const int size = 10;
    double arr[size];
    int a, b, sum = 0;
    int col0 = 0;

    cout << "Масив: ";

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 30 - 10;
        cout << setw(4) << arr[i];
    }
    cout << endl;

    int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            index++;
        }
    }
    cout << "КІлькість елементів рівних 0 = " << index << endl;

    int min = arr[0];
    int mini = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == 0)
        {
            col0++;
        }
        if (arr[i] < min)
        {
            mini = i;
            min = arr[i];
        }

    }
    for (int i = mini + 1; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Сума елементів масиву, розташованих після мінімального елемента = " << sum;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (abs(arr[j]) < abs(arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << endl;
    cout << "Новий масив: ";

    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << arr[i];
    }
}