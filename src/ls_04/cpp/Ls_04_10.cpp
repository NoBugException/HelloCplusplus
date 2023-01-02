#include "Ls_04_10.h"

void Ls_04_10::printChar()
{
    char iInput;
    cin >> iInput;
    if (iInput == 'A')
    {
        cout << "very good" << endl;
        return;
    }
    else if (iInput == 'B')
    {
        cout << "good" << endl;
        return;
    }
    else if (iInput == 'C')
    {
        cout << "normal" << endl;
        return;
    }
    else if (iInput == 'D')
    {
        cout << "failure" << endl;
        return;
    }
    else
        cout << "input error" << endl;
}
