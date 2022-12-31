#include "Ls_04_08.h"

void Ls_04_08::printChar()
{
    char iInput;
    cin >> iInput;
    switch (iInput)
    {
    case 'A':
        cout << "very good" << endl;
        break;
    case 'B':
        cout << "good" << endl;
        break;
    case 'C':
        cout << "normal" << endl;
        break;
    case 'D':
        cout << "failure" << endl;
        break;
    default:
        cout << "input error" << endl;
    }
}
