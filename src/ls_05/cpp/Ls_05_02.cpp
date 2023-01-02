#include "Ls_05_02.h"

void Ls_05_02::printChar()
{
    int sum = 0, i = 1;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    cout << "the result :" << sum << endl;
}
