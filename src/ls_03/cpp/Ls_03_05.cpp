#include "Ls_03_05.h"

void Ls_03_05::printChar()
{
    double result;
    char a = 'k';
    int b = 10;
    float e = 1.515;
    result = (a + b) - e;          // 字符型加整型减单精度浮点型
    printf("%f\n", result);  // 输出结果
}
