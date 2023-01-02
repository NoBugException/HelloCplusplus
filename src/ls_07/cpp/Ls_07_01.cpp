#include "Ls_07_01.h"

void Ls_07_01::printChar()
{
    int i,a[10];
    //利用循环，分别为10个元素赋值
    for(i=0; i<10; i++)
        a[i]=i;
    //将数组中的10的元素输出到显示设备
    for(i=0; i<10; i++)
        cout << a[i] << endl;
}
