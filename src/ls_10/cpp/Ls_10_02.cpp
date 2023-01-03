#include "Ls_10_02.h"
#include "Person.h"

using namespace n_Ls_10_02;

void Ls_10_02::printChar()
{
    CPerson p1;
    cout << "m_iIndex is:" << p1.getIndex() << endl;
	
    CPerson p2(1,20,1000);
    cout << "m_iIndex is:" << p2.getIndex() << endl;
}