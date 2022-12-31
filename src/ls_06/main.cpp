#include <Ls_06_01.h>
#include <Ls_06_02.h>
#include <Ls_06_03.h>
#include <Ls_06_04.h>
#include <Ls_06_05.h>
#include <Ls_06_06.h>
#include <Ls_06_07.h>
#include <Ls_06_08.h>

int main(int argc, char** argv)
{

    Ls_06_01 ls_06_01;
    ls_06_01.ShowMessage(); //函数调用语句
    ls_06_01.ShowAge(); //函数调用语句
    ls_06_01.ShowIndex(); //函数调用语句

    Ls_06_02 ls_06_02;
    ls_06_02.OutputInfo();                            //利用默认值作为函数实际参数
    ls_06_02.OutputInfo("Beijing 2008 Olympic Games!");    //直接传递实际参数

    Ls_06_03 ls_06_03;
    ls_06_03.OutputInfo(2, "Beijing", 2008, "Olympic Games", 2008);    //调用OutputInfo函数

    Ls_06_04 ls_06_04;
    int x, y;
    cout << "输入两个数" << endl;
    cin >> x;
    cin >> y;

    if (x < y)
       ls_06_04.swap(x, y);
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

    Ls_06_05 ls_06_05;
    int n;
    ls_06_05.lCount = 0;
    cout << "please input a number" << endl;
    cin >> n;
    ls_06_05.move(n, 'a', 'b', 'c');

    Ls_06_06 ls_06_06;
    int n;
    long f;
    cout << "please input a number" << endl;
    cin >> n;
    f = ls_06_06.Fac(n);
    cout << "Result :" << f << endl;

    Ls_06_07 ls_06_07;
    int ivar = ls_06_07.Add(5, 2);            //调用第一个Add函数
    float fvar = ls_06_07.Add(10.5, 11.4);    //调用第二个Add函数

    Ls_06_08 ls_06_08;
    int i, j, sum;
    cout << " input the number:" << endl;
    cin >> i;
    cout << "the result is:" << endl;
    for (j = 1; j <= i; j++)
    {
        sum = ls_06_08.add(j);
        cout << j << ":" << sum << endl;
    }

    return 0;
}
