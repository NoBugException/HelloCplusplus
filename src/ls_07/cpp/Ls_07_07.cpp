#include "Ls_07_07.h"

void Ls_07_07::printChar()
{
    char str1[30],str2[20];
    int len1,len2;
    cout<<"please input string1:"<< endl;
    gets_s(str1);
    cout<<"please input string2:"<<endl;
    gets_s(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    cout <<"the length of string1 is:"<< len1 <<endl;
    cout <<"the length of string2 is:"<< len2 <<endl;
}
