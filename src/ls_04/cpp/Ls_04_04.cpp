#include "Ls_04_04.h"

void Ls_04_04::printChar()
{
    int iInput;
    cin >> iInput;
    if (iInput >= 90)
    {
        cout << "very good" << endl;
    }
    else if (iInput >= 80 && iInput < 90)
    {
        cout << "good" << endl;
    }
    else if (iInput >= 70 && iInput < 80)
    {
        cout << "good" << endl;
    }
    else if (iInput >= 60 && iInput < 70)
    {
        cout << "normal" << endl;
    }
    else if (iInput < 60)
    {
        cout << "failure" << endl;
    }
}
