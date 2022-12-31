#include "Ls_06_04.h"

void Ls_06_04::swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Ls_06_04::printChar()
{
    int x, y;
    cout << "输入两个数" << endl;
    cin >> x;
    cin >> y;

    if (x < y)
       swap(x, y);
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
}