#include "Ls_10_07.h"

namespace MyName                        //定义命名空间
{
int iValue=10;                            //定义整型变量
}

using namespace MyName;                    //使用命名空间MyName

void Ls_10_07::printChar()
{
   cout<<iValue<<endl;                        //输出命名空间中的变量
}
