#include <iostream>
#include "Fecha.h"
using namespace std;

int main()
{
    Fecha uno(31,12,2012);

    uno.bisiesto();
    uno.sumadias(5);

    return 0;
}
