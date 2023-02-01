#include "Ls_13_06.h"

void Output(int val)
{
	cout << val << ' ';
}

void Ls_13_06::printChar()
{
	vector<int > intVect;
	for(int i=0;i<10;++i)
		intVect.push_back(i);
	cout << "Vect :";
	for_each(intVect.begin(),intVect.end(),Output);
    srand ( unsigned ( time(0) ) ); // 更改随机种子
	random_shuffle(intVect.begin(),intVect.end()); // 如果没有更改随机种子，则每次都是同一种打乱顺序
	cout << endl;
	cout << "Vect :";
	for_each(intVect.begin(),intVect.end(),Output);
	cout << endl;
}