#include <iostream>
using namespace std;

bool IsPowerN(int k, int n);
bool IsPower(int k);
bool IsPrime(int n);
int DigitCount(int k);
int DigitN(int k, int n);
int SumDigits(int k);
int ReverseInt(int k);
bool IsPalindrom(int k);
void proc31();

int main()
{
    proc31();
}

int ReverseInt(int k)
{
    k = abs(k);
    int sum = 0;
    while (k > 0)
    {
        int d = k % 10;
        sum = sum * 10 + d;
        k = k / 10;
    }
    return sum;
}

void proc31()
{
    /*Описать функцию IsPalindrom(K ), возвращающую TRUE, если целый
    параметр K (> 0) является палиндромом (то есть его запись читается
    одинаково слева направо и справа налево), и FALSE в противном случае. С ее
    помощью найти количество палиндромов в наборе из 10 целых положи-тельных чисел.*/

    int k;
    cout << "Enter number: "; cin >> k;
    bool ok = IsPalindrom(k);
    cout << "Answer is " << ok << endl;
}

bool IsPalindrom(int k)
{
    int r = ReverseInt(k);
    return r == k;
}

int SumDigits(int k)
{
    k = abs(k);
    int sum = 0;
    while (k > 0)
    {
        int d = k % 10;
        sum = sum + d;
        k = k / 10;
    }
    return sum;
}

void proc30()
{
    /*Описать функцию DigitN(K, N ) целого типа, возвращающую N -ю циф-ру целого положительного числа K (цифры в числе нумеруются справа
    налево). Если количество цифр в числе K меньше N, то функция возвра-щает ¡1. Для каждого из пяти данных целых положительных чисел K 1,K 2, ... ,
    K 5 вызвать функцию DigitN с параметром N, изменяющимся от 1 до 5.*/

    int n, k;
    cout << "Enter number: "; cin >> k;
    cout << "Enter digit you want to separate: "; cin >> n;
    int d = DigitN(k, n);
    cout << "Answer is = " << d << endl;
}

int DigitN(int k, int n)
{
    if (k == 0) return 0;
    k = abs(k);
    int counter = 0;
    while (k > 0)
    {
        int d = k % 10;
        if (counter == n) return d;
        counter++;
        k = k / 10;
    }
    return 0;
}

void proc29()
{
    /*Описать функцию DigitCount(K ) целого типа, находящую количество
    цифр целого положительного числа K. Используя эту функцию, найти количество
    цифр для каждого из пяти данных целых положительных чисел.*/

    for (int i = 0; i < 5; i++)
    {
        int k;
        cout << "Enter K: "; cin >> k;
        cout << DigitCount(k) << endl;

    }
}

int DigitCount(int k)
{
    if (k == 0) return 1;
    k = abs(k);
    int counter = 0;
    while (k > 0)
    {
        counter++;
        k = k / 10;
    }
    return counter;
}

void proc28()
{
    /*Описать функцию IsPrime(N ) логического типа, возвращающую TRUE,
    если целый параметр N (> 1) является простым числом, и FALSE в противном случае (число, большее 1, называется простым, если оно не имеет
    положительных делителей, кроме 1 и самого себя). Дан набор из 10 целых чисел, больших 1. С помощью функции IsPrime найти количество
    простых чисел в данном наборе.*/

    int n;
    cout << "Enter number: ";
    cin >> n;
    bool ok = IsPrime(n);
    cout << "Answer is " << ok << endl;
}

bool IsPrime(int n)
{
    int g = 2;
    while (g < sqrt(n)+1)
    {
        if (n % g == 0) return false;
        g++;
    }
    return true;
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