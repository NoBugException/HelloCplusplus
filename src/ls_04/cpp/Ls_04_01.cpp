#include "Ls_04_01.h"

void Ls_04_01::printChar()
{
    int iInput;
    cout << "Input a value:" << endl;
    cin >> iInput; //输入一整型数
    if (iInput % 2 != 0)
        cout << "The value is odd number" << endl;
}
