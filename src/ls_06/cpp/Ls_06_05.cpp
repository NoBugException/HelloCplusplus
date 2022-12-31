#include "Ls_06_05.h"

void Ls_06_05::move(int n, char x, char y, char z)//将n个盘子从x针借助y针移到z针上。
{
    if (n == 1)
        cout << "Times:" << ++lCount << x << "->" << z << endl;
    else
    {
        move(n - 1, x, z, y);
        cout << "Times:" << ++lCount << x << "->" << z << endl;
        move(n - 1, y, x, z);
    }
}

void Ls_06_05::printChar()
{
    int n;
    lCount = 0;
    cout << "please input a number" << endl;
    cin >> n;
    move(n, 'a', 'b', 'c');
}
