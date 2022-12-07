//Завдання 1 пункт 3 Варіант 13
//3. В одновимірному масиві, що складається з цілих елементів, обчислити: добуток елементів масиву з парними номерами; 
//суму елементів масиву, розташованих між першим і останнім нульовим елементами.
//Перетворити масив таким чином, щоб спочатку розташовувалися всі додатні елементи, 
//а потім − усі від’ємні(елементи, рівні 0, вважати додатними).

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
        arr[i] = rand() % 30 - 10;

        cout << arr[i] << " ";
    }

    int d = 1;

    for (int i = 0; i < size; i++)
    {
        if (!i == 0 && i % 2 == 0)
        {
            d *= arr[i];
        }
    }
    cout << endl;
    cout << "Добуток = " << d << endl;

    int index1 = 0, index2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            break;
        }
        if (arr[i] == 0)
        {
            break;
        }

        index1 = i + 1;
    }
    for (int i = size; i > 0; i--)
    {
        if (arr[i] != 0)
        {
            break;
        }
        if (arr[i] == 0)
        {
            break;
        }

        index2 = i - 1;
    }
    cout << "Номер першого нульового елемента: " << index1 << endl <<
        "Номер першого нульового елемента: " << index2 << endl;

    int sum = 0;

    if ((index1 < index2) && (index2 != 0))
    {
        for (int i = index1; i < index2; i++)
        {
            sum += arr[i];
        }
        cout << "Сума = " << sum << endl;
    }
    else
    {
        cout << "Немає суми" << endl;
    }

    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }

    cout << endl;
    cout << "Впорядкований масив: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}