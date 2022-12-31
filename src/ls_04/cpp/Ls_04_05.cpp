#include "Ls_04_05.h"

void Ls_04_05::printChar()
{
    int iInput;
    cout << "Input number" << endl;
    cin >> iInput;//从键盘中输入一个数
    (iInput % 2 != 0) ? cout << "The value is odd number" : cout << "The value is even number";
    cout << endl;
}
