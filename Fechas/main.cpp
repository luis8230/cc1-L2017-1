#include <iostream>
#include "Fecha.h"
#include "empleado.h"
#include "empresa.h"

using namespace std;

int main()
{
    Fecha uno(31,12,2012);

    uno.bisiesto();
    uno.sumadias(5);

    empresa a("Leche",12121212121);

    return 0;
}
