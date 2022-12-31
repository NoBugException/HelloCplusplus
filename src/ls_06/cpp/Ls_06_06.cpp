#include "Ls_06_06.h"

long Ls_06_06::Fac(const UINT n)        //定义函数
{
    long ret = 1;                //定义结果变量
    for (int i = 1; i <= n; i++)            //累计乘积
    {
        ret *= i;
    }
    return ret;                    //返回结果
}

void Ls_06_06::printChar()
{
    int n;
    long f;
    cout << "please input a number" << endl;
    cin >> n;
    f = Fac(n);
    cout << "Result :" << f << endl;
}