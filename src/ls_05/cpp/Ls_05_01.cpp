#include "Ls_05_01.h"

void Ls_05_01::printChar()
{
    int sum = 0, i = 1;
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    cout << "the result :" << sum << endl;
}
