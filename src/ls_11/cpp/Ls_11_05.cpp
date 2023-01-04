#include "Ls_11_05.h"

namespace n_Ls_11_05 {
    class CBook
    {
    public:
        CBook (int iPage)
        {
            m_iPage=iPage;
        }
        CBook operator+( CBook b)
        {
            return CBook (m_iPage+b.m_iPage);
        }
        void display()
        {
            cout << m_iPage << endl;
        }
    protected:
        int m_iPage;
    };
}

void Ls_11_05::printChar()
{
    n_Ls_11_05::CBook bk1(10);
    n_Ls_11_05::CBook bk2(20);
    n_Ls_11_05::CBook tmp(0);
    tmp= bk1+bk2;
    tmp.display();
}
