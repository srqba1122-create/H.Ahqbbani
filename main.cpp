#include "stdafx.h"
#include <iostream>
using namespace std;

void printDescending(int n)
{
    if (n < 1)
        return;

    cout << n << " ";
    printDescending(n - 1);
}

int main()
{
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    printDescending(number);
    cout << endl;

    system("pause");
    return 0;
}
