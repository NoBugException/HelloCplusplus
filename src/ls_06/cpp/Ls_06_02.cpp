#include "Ls_06_02.h"

void Ls_06_02::OutputInfo()
{
    cout << "One world,one dream!" << endl;    //输出信息
}

void Ls_06_02::OutputInfo(const char* pchData)
{
    cout << pchData << endl;    //输出信息
}

void Ls_06_02::printChar()
{
    OutputInfo();                            //利用默认值作为函数实际参数
    OutputInfo("Beijing 2008 Olympic Games!");    //直接传递实际参数
}
