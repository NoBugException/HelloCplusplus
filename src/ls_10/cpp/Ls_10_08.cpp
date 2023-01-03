#include "Ls_10_08.h"

namespace Output                            //定义命名空间
{
    void Show()                            //定义函数
    {
        cout<<"Output's function!"<<endl;
    }
    namespace MyName                    //定义嵌套命名空间
    {
        void Demo()                        //定义函数
        {
            cout<<"MyName's function!"<<endl;
        }
    }
}

void Ls_10_08::printChar()
{
    Output::Show();                        //调用Output命名空间中的函数
    Output::MyName::Demo();                //调用MyName命名空间中的函数
}
