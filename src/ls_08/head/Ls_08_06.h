#pragma once
#ifndef __LS_08_06__
#define __LS_08_06__

#include<iostream>
#include<string>
using namespace std;

namespace n_Ls_08_06 {
	struct PersonInfo
	{
    	int index;
    	char name[30];
    	short age;
	};
}

class Ls_08_06
{
public:
    void ShowStuctMessage(n_Ls_08_06::PersonInfo *pInfo);
    void printChar();
};

#endif