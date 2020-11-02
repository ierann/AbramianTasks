#include <iostream>
using namespace std;

bool IsPowerN(int k, int n);
bool IsPower(int k);
void proc27();

int main()
{
    proc27();
}

void proc27()
{
    /*Описать функцию IsPowerN(K, N ) логического типа, возвращающую
    TRUE, если целый параметр K (> 0) является степенью числа N (> 1), и
    FALSE в противном случае. Дано число N (> 1) и набор из 10 целых по-ложительных чисел. С помощью функции IsPowerN найти количество
    степеней числа N в данном наборе.*/

    int k, n;
    cout << "Enter K: "; cin >> k;
    cout << "Enter N: "; cin >> n;
    bool ok = IsPowerN(k, n);
    cout << "Answer = " << ok << endl;
}

bool IsPowerN(int k, int n)
{
    while (k > 1)
    {
        if (k % n != 0)
        {
            return false;
        }
        k = k / n;
    }
    return true;
}

void proc26()
{
    /*Описать функцию IsPower5(K ) логического типа, возвращающую
    TRUE, если целый параметр K (> 0) является степенью числа 5, и FALSE в
    противном случае. С ее помощью найти количество степеней числа 5 в
    наборе из 10 целых положительных чисел.*/

    int k;
    cout << "Enter K: "; cin >> k;
    bool ok = IsPower(k);
    cout << "Answer = " << ok << endl;
}

// 125 = 1 * 5 * 5 * 5 asd
bool IsPower(int k)
{
    while (k > 1)
    {
        if (k % 5 != 0)
        {
            return false;
        }
        k = k / 5;
    }
    return true;
}