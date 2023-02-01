#include "Ls_13_08.h"

void Output_8(int val)
{
    cout << val << ' ';
}

void Ls_13_08::printChar()
{
    vector<char > charVect;
    charVect.push_back('M');
    charVect.push_back('R');
    charVect.push_back('K');
    charVect.push_back('J');
    charVect.push_back('H');
    charVect.push_back('I');
    cout << "Vect :";
    for_each(charVect.begin(),charVect.end(),Output_8);
    sort(charVect.begin(),charVect.end());
    cout << endl;
    cout << "Vect :";
    for_each(charVect.begin(),charVect.end(),Output_8);
    cout << endl;
}