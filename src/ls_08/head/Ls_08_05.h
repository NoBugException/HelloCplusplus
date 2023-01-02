#pragma once
#ifndef __LS_08_05__
#define __LS_08_05__

#include<iostream>
using namespace std;

namespace n_Ls_08_05 {
    struct PersonInfo                            //定义结构体
    {
        int index;
        char name[30];
        short age;
    };
}

class Ls_08_05
{
public:
    void ShowStuctMessage(n_Ls_08_05::PersonInfo MyInfo);
    void printChar();
};

#endif