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
