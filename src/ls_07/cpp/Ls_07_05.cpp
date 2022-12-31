#include "Ls_07_05.h"

void Ls_07_05::printChar()
{
    char str1[30],str2[20];
    cout<<"please input string1:"<< endl;
    gets_s(str1);
    cout<<"please input string2:"<<endl;
    gets_s(str2);
    strcpy(str1,str2);
    cout<<"Now the string1 is:\n"<<endl;
    puts(str1);
}
