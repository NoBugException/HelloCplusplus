#include "Ls_03_06.h"

void Ls_03_06::printChar()
{
    float i, j;
    int k;
    i = 60.25;
    j = 20.5;
    k = (int)i + (int)j;    // 强制转换i和j为整型，并求和
    cout << k << endl;  // 输出k的值
}
