﻿#include "Ls_05_04.h"

void Ls_05_04::printChar()
{
    int i, n, sum;
    sum = 0;
    cout << "input 10 number" << endl;
    for (i = 1; i <= 10; i++)
    {
        cout << i << ":";
        cin >> n;
        if (n < 0)     //判断输入是否为负数
            break;
        sum += n;     //对输入的数进行累加
    }
    cout << "The Result :" << sum << endl;
}
