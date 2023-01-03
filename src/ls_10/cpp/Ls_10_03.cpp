#include "Ls_10_03.h"
#include "Person.h"

using namespace n_Ls_10_03;

void Ls_10_03::printChar()
{
    CPerson p1(20,30,100);
    CPerson p2(p1);
    cout << "m_iIndex of p1 is:" << p2.getIndex() << endl;
    cout << "m_shAge of p1 is:" << p2.getAge() << endl;
    cout << "m_dSalary of p1 is:" << p2.getSalary() << endl;
    cout << "m_iIndex of p2 is:" << p2.getIndex() << endl;
    cout << "m_shAge of p2 is:" << p2.getAge() << endl;
    cout << "m_dSalary of p2 is:" << p2.getSalary() << endl;
}
