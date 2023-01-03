#include "Person.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

namespace n_Ls_10_01 {
    short CPerson::getAge()
    {
        return m_shAge;
    }
    int CPerson::setAge(short sAge)
    {
        m_shAge=sAge;
        return 0;
    }
    int CPerson::getIndex()
    {
        return m_iIndex;
    }
    int CPerson::setIndex(int iIndex)
    {
        m_iIndex=iIndex;
        return 0;
    }
    char* CPerson::getName()
    {
        return m_cName;
    }
    int CPerson::setName(char cName[25])
    {
        strcpy(m_cName,cName);
        return 0;
    }
    double CPerson::getSalary()
    {
        return m_dSalary;
    }
    int CPerson::setSalary(double dSalary)
    {
        m_dSalary=dSalary;
        return 0;
    }
}

namespace n_Ls_10_02 {
    //在默认构造函数中初始化
    CPerson::CPerson()
    {
        m_iIndex=0;
        m_shAge=10;
        m_dSalary=1000;
    }
    //在带参数的构造函数中初始化
    CPerson::CPerson(int iIndex,short m_shAge,double m_dSalary)
    {
        m_iIndex=iIndex;
        m_shAge=m_shAge;
        m_dSalary=m_dSalary;
    }
    int CPerson::getIndex()
    {
        return m_iIndex;
    }
}

namespace n_Ls_10_03 {
    //构造函数
    CPerson::CPerson(int iIndex,short shAge,double dSalary)
    {
        m_iIndex=iIndex;
        m_shAge=shAge;
        m_dSalary=dSalary;
    }
    //复制构造函数
    CPerson::CPerson(CPerson & copyPerson)
    {
        m_iIndex=copyPerson.m_iIndex;
        m_shAge=copyPerson.m_shAge;
        m_dSalary=copyPerson.m_dSalary;
    }
    short CPerson::getAge()
    {
        return m_shAge;
    }
    int CPerson::getIndex()
    {
        return m_iIndex;
    }
    double CPerson::getSalary()
    {
        return m_dSalary;
    }
}

namespace n_Ls_10_04 {

    CPerson::CPerson()
    {
        m_pMessage = new char[2048];
    }
    void CPerson::ShowStartMessage()
    {
        strcpy(m_pMessage,"Welcome to MR");
        cout << m_pMessage << endl;
    }
    void CPerson::ShowFrameMessage()
    {
        strcpy(m_pMessage,"**************");
        cout << m_pMessage << endl;
    }
    CPerson::~CPerson()
    {
        delete[] m_pMessage;
    }
}
