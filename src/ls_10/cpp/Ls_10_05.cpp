#include "Ls_10_05.h"

void Ls_10_05::printChar()
{
    CList list;                                //定义CList对象list
    list.OutputItem();                        //调用CList的OutputItem方法
}

void CList::OutputItem()                        //CList类的OutputItem成员函数的实现
{
    m_pItem->SetItemName("BeiJing");            //调用CItem类的共有方法
    m_pItem->OutputName();                //在友元函数中访问CItem类的私有方法OutputName
}
CList::CList()                                //CList类的默认构造函数
{
    m_pItem = new CItem();                    //构造m_pItem对象
}
CList::~CList()                                //CList类的析构函数
{
    delete m_pItem;                        //释放m_pItem对象
    m_pItem = NULL;                        //将m_pItem对象设置为空
}