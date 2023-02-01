#include "Ls_13_07.h"

void Output_7(int val)
{
    cout << val << ' ';
}
bool equals5(int val)
{
    return val==5;
}

void Ls_13_07::printChar()
{
    vector<int > intVect;
    intVect.push_back(7);
    intVect.push_back(3);
    intVect.push_back(5);
    cout << "Vect :";
    for_each(intVect.begin(),intVect.end(),Output_7);
    partition(intVect.begin(),intVect.end(),equals5);
    cout << endl;
    cout << "Vect :";
    for_each(intVect.begin(),intVect.end(),Output_7);
    cout << endl;
}