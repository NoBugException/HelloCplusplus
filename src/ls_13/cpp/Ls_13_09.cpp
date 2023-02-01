#include "Ls_13_09.h"

void Output_9(int val)
{
    cout << val << ' ';
}

void Output_9_01(string val)
{
    cout << val << ' ';
}

void Ls_13_09::printChar()
{
    vector<int> intVect1;
    for(int i=0; i<5; i++)
        intVect1.push_back(i);
    cout << "Vect";
    std::for_each(intVect1.begin(),intVect1.end(),Output_9);
    int result1 = accumulate(intVect1.begin(),intVect1.end(),5); // 从5开始， 累计相加
    cout << endl;
    cout << "Result1 :" << result1 << endl;
}