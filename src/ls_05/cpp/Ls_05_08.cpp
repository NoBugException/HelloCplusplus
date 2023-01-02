#include "Ls_05_08.h"

void Ls_05_08::printChar()
{
    int i, j;
    i = 1;
    j = 1;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < i + 1; j++)
            cout << setw(4) << i << "*" << j << "=" << setw(2) << i * j;
        cout << endl;
    }
}
