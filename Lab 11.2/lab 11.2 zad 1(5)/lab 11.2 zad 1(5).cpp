//Завдання 1 пункт 5 Варіант 13
//5. В одновимірному масиві, що складається з дійсних елементів, обчислити максимальний за модулем елемент масиву; 
//суму елементів масиву, розташованих між першим і другим додатними елементами.Перетворити масив таким чином, щоб елементи, 
//рівні нулю, розташовувалися після всіх інших.

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
    int sum = 0;
    int i, j;

    cout << "Масив: ";

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 30 - 10;
        cout << setw(3) << arr[i];
    }
    cout << endl;

    int maxValue = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (abs(arr[i]) > maxValue)
        {
            maxValue = abs(arr[i]);
        }
    }
    cout << "Максимальне число масиву за модулем: " << maxValue << endl;
    cout << endl;

    i = 0;
    sum = 0.0;
    while (arr[i] < 0 && i < size)
        ++i;
    if (i == size)
    {
        cout << "Немає плюсових елементів" << endl;
    }
    ++i;
    while (arr[i] < 0 && i < size)
        sum += arr[i++];
    if (i == size)
    {
        cout << "Тільки один плюсовий елемент" << endl;
    }

    cout << "Сума елементів масиву, розташованих між першим і другим додатними елементами = " << sum << endl;;

    for (i = j = size - 1; i >= 0; --i)
    {
        if (arr[i] != 0)
        {
            if (i != j)
                arr[j] = arr[i];
            --j;
        }
    }
    for (i = 0; i <= j; i++)
        arr[i] = 0;

    cout << endl;

    cout << "Новий масив: ";
    for (i = 0; i < size; i++)
    {
        cout << setw(3) << arr[i];
    }


}