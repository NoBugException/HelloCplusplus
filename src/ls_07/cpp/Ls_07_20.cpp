#include "Ls_07_20.h"

void Ls_07_20::swap(int & a,int & b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}

void Ls_07_20::printChar()
{
    int x,y;
    cout << "请输入x" << endl;
    cin >> x;
    cout << "请输入y" << endl;
    cin >> y;
    cout<<"通过引用交换x和y"<<endl;
    swap(x,y);
    cout << "x=" << x <<endl;
    cout << "y=" << y <<endl;
}
