#include "stdafx.h"
#include <iostream>
using namespace std;

long long factorial(int n)
{
    if (n < 0)
        return -1; // قيمة غير صالحة

    if (n == 0 || n == 1)
        return 1; // حالة التوقف

    return n * factorial(n - 1);
}

int main()
{
    int number;
    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0)
        cout << "Please enter a non-negative number." << endl;
    else
        cout << "Factorial = " << factorial(number) << endl;

    system("pause");
    return 0;
}
