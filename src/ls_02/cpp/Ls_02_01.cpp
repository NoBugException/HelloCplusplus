#include "Ls_02_01.h"

void Ls_02_01::printChar()
{
    char c1, c2;                            // 定义两个char类型的变量
    c1 = 'a';                               // 将变量ch1赋值为'a'
    c2 = 'b';                               // 将变量ch2赋值为'b'
    printf("%c,%d\n%c,%d", c1, c1, c2, c2); // 分别公字符型和整型格式输出变量
}
