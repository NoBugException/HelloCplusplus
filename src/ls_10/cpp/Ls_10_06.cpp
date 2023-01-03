#include "Ls_10_06.h"

namespace MyName1                        //定义命名空间
{
	int iValue=10;
};

namespace MyName2                        //定义命名空间
{
	int iValue=20;
};

int iValue=30; 

void Ls_10_06::printChar()
{
    cout<<MyName1::iValue<<endl;            //引用MyName1命名空间中的变量
    cout<<MyName2::iValue<<endl;            //引用MyName2命名空间中的变量
    cout<<iValue<<endl;
}
