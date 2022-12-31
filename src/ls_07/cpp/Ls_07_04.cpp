#include "Ls_07_04.h"

void Ls_07_04::printChar()
{
    char str1[30],str2[20];
    cout<<"please input string1:"<< endl;
    gets_s(str1);
    cout<<"please input string2:"<<endl;
    gets_s(str2);
    strcat(str1,str2);
    cout <<"Now the string1 is:"<<endl;
    puts(str1);
}
