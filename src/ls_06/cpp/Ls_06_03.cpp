#include "Ls_06_03.h"

void Ls_06_03::OutputInfo(int num, ...)                        //定义一个省略号参数的函数
{
    va_list arguments;                            //定义va_list类型变量
    va_start(arguments, num);
    while (num--)                                //读取所有参数的数据
    {
        char* pchData = va_arg(arguments, char*);    //获取字符串数据
        int iData = va_arg(arguments, int);            //获取整型数据
        cout << pchData << endl;                    //输出字符串
        cout << iData << endl;                        //输出整数
    }
    va_end(arguments);
}
