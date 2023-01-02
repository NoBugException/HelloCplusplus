#include "Ls_07_10.h"

void Ls_07_10::printChar()
{
    int a=100;
    int *p=&a;
    printf("address:%x\n",p);
    p++;
    printf("address:%x\n",p);
    p--;
    printf("address:%x\n",p);
    p--;
    printf("address:%x\n",p);
}
