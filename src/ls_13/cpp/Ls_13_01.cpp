#include "Ls_13_01.h"

void Ls_13_01::printChar()
{
    vector<int> v1,v2;
	v1.reserve(10); //预分配分配空间							
	v2.reserve(10); //预分配分配空间		
	v1 = vector<int>(8,7); // 8个7，size = 8
	int array[8]= {1,2,3,4,5,6,7,8};			//定义数组
	v2 = vector<int>(array,array+8);		//给v2赋值
	cout<<"v1容量"<<v1.capacity()<<endl;
	cout<<"v1当前各项:"<<endl;
	size_t i = 0;
	for(i = 0;i<v1.size();i++)
	{
		cout<<" "<<v1[i];
	}
	cout<<endl;
	cout<<"v2容量"<<v2.capacity()<<endl;
	cout<<"v2当前各项:"<<endl;
	for(i = 0;i<v1.size();i++)
	{
		cout<<" "<<v2[i];
	}
	cout<<endl;
	v1.resize(0);
	cout<<"v1的容量通过resize函数变成0"<<endl;
	if(!v1.empty())
		cout<<"v1容量"<<v1.capacity()<<endl;
	else
		cout<<"v1是空的"<<endl;
	cout<<"将v1容量扩展为8"<<endl;
	v1.resize(8);
	cout<<"v1当前各项:"<<endl;
	for(i = 0;i<v1.size();i++)
	{
		cout<<" "<<v1[i];
	}
	cout<<endl;
	v1.swap(v2);
	cout<<"v1与v2 swap了"<<endl;
	cout<<"v1当前各项:"<<endl;
	cout<<"v1容量"<<v1.capacity()<<endl;
	for(i = 0;i<v1.size();i++)
	{
		cout<<" "<<v1[i];
	}
	cout<<endl;
	v1.push_back(3);
	cout<<"从v1后边加入了元素3"<<endl;
	cout<<"v1容量"<<v1.capacity()<<endl;
	for(i = 0;i<v1.size();i++)
	{
		cout<<" "<<v1[i];
	}
	cout<<endl;
	v1.erase(v1.end()-2);
	cout<<"删除了倒数第二个元素"<<endl;
	cout<<"v1容量"<<v1.capacity()<<endl;
	cout<<"v1当前各项:"<<endl;
	for(i = 0;i<v1.size();i++)
	{
		cout<<" "<<v1[i];
	}
	cout<<endl;
	v1.pop_back();
	cout<<"v1通过栈操作pop_back放走了最后的元素"<<endl;
	cout<<"v1当前各项:"<<endl;
	cout<<"v1容量"<<v1.capacity()<<endl;
	for(i = 0;i<v1.size();i++)
	{
		cout<<" "<<v1[i];
	}
	cout<<endl;
}