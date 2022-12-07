//Завдання 1 пункт 4 Варіант 13
//4. В одновимірному масиві, що складається з дійсних елементів, обчислити: 
//суму елементів масиву з непарними номерами; суму елементів масиву, розташованих між першим і останнім від’ємними елементами.
//Стиснути масив, видаливши з нього всі елементи, модуль яких не перевищує 1. Елементи, що звільнилися в кінці масиву, 
//заповнити нулями.

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
    double arr[size];
    int i, n, nno = 0, npo = 0;
    bool flag = 0;
    double sum = 0;

    cout << "Масив: ";

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 30 - 10.5;

        cout << arr[i] << " ";
    }

    for (i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            sum += arr[i];
        }
        if (arr[i] < 0)
        {
            if (flag == 0)
            {
                nno = i;
                flag = 1;
            }
            else npo = i;
        }
    }
    cout << endl;

    cout << "Сума непарних елементів = " << sum << endl;

    if (flag == 0)
        cout << "Немає від'ємних елементів" << endl;
    else

        if (flag && npo == 0)

            cout << "Один від'ємний елемент" << endl;
        else

            if (nno + 1 == npo)

                cout << "Від`ємні числп стоять поруч";

            else
            {
                sum = 0;
                for (i = nno + 1; i < npo; i++)
                    sum += arr[i];
                cout << "Сума елементів масиву, розташованих між першим і останнім від’ємними елементами = " << sum << endl;
            }
    for (i = 0; i < size; i++)
    {
        if (abs(arr[i]) < 1)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = 0;
            }
        }
    }
    cout << "Стиснутий масив: ";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}