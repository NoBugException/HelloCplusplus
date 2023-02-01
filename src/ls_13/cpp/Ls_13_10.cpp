#include "Ls_13_10.h"

void Ls_13_10::printChar()
{
    vector<int> intVect;
    for(int i=0; i<10; i+=2)
        intVect.push_back(i);
    cout << "Vect :" << endl;
    vector<int>::iterator it=intVect.begin();
    while(it!=intVect.end())
        cout << *it++ << endl;
}