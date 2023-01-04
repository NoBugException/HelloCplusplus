#pragma once
#ifndef __LS_11_05__
#define __LS_11_05__

#include<iostream>
using namespace std;

class Ls_11_05
{
public:
    void printChar();
};

class CItem;                                //前导声明CItem类
class CList                                //定义CList类
{
private:
    CItem * m_pItem;                        //定义私有数据成员m_pItem
public:
    CList();                                //定义默认构造函数
    ~CList();                                //定义析构函数
    void OutputItem();                        //定义OutputItem成员函数
};
class CItem                                //定义CItem类
{
    friend void CList::OutputItem();                //声明友元函数
private:
    char m_Name[128];                        //定义私有数据成员
    void OutputName()                        //定义私有成员函数
    {
        printf("%s\n",m_Name);                //输出数据成员信息
    }
public:
    void SetItemName(const char* pchData)        //定义共有方法
    {
        if (pchData != NULL)                    //判断指针是否为空
        {
            strcpy(m_Name,pchData);        //赋值字符串
        }
    }
    CItem()                                //构造函数
    {
        memset(m_Name,0,128);                //初始化数据成员m_Name
    }
};

#endif