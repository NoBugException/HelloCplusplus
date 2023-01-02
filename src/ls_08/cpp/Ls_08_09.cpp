#include "Ls_08_09.h"

void Ls_08_09::printChar()
{
    enum Weekday {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
    int a=2,b=1;
    Weekday day;
    day=(Weekday)a;
    cout << day << endl;
    day=(Weekday)(a-b);
    cout << day << endl;
    day=(Weekday)(Sunday+Wednesday);
    cout << day << endl;
    day=(Weekday)5;
    cout << day << endl;
}
