//Завдання 2 варіант 13
//Для всіх послідовностей від’ємних чисел поміняти місцями елементи з максимальним та мінімальним значенням.

#include<iostream>
#include<ctime>
#include<Windows.h>




using namespace std;

int main()
{
    srand(time(NULL));

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a, b, size = 0, i = 0, c = 0, max = 0, min = 0, x;

    size = rand() % 300 + 1;
    int* arr = new int[size];

    for (int start = 0;; start++)
    {
        a = rand() % 401 - 200;
        b = rand() % 401 - 200;

        c = abs(b - a);

        if ((a < b) && (c >= size))
        {
            break;
        }
    }

    for (i; i < size; i++)
    {

        arr[i] = rand() % 401 - 200;

        if ((arr[i] >= a) && (arr[i] <= b))
        {

            cout << arr[i] << " ";
        }
        else { i--; }
    }

    cout << endl;


    for (i; i < size; i++)
    {
        if (arr[i] > 0)
        {
            min = i;
            max = i;
            break;
        }
    }

    i = 0;

    for (int i = 0; i < size - 1; i++)
    {

        if (arr[i] > 0)
        {
            for (int j = i + 1; j < size; j++)
                if (arr[j] > 0)
                {
                    if ((arr[j] > arr[max]))
                    {
                        max = j;
                    }

                    if ((arr[j] < arr[min]))
                    {
                        min = j;
                    }

                }
        }
    }

    swap(arr[min], arr[max]);

    i = 0;
    for (i; i < size; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;
}