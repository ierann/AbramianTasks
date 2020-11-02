#include <iostream>
using namespace std;

bool IsPower(int k);
void proc26();

int main()
{
    proc26();
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