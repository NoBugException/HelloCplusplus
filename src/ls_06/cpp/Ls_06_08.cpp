#include "Ls_06_08.h"

int Ls_06_08::add(int x)
{
    static int n = 0;
    n = n + x;
    return n;
}
