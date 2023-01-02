#include "Ls_06_08.h"

int Ls_06_08::add(int x)
{
    static int n = 0;
    n = n + x;
    return n;
}

void Ls_06_08::printChar()
{
    int i, j, sum;
    cout << " input the number:" << endl;
    cin >> i;
    cout << "the result is:" << endl;
    for (j = 1; j <= i; j++)
    {
        sum = add(j);
        cout << j << ":" << sum << endl;
    }
}