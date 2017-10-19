#include <iostream>
#include "complejo.h"
using namespace std;

int main()
{
    complejo (12,3);
    complejo i(5,7);
    complejo j(7,3);
    i.suma(j);
    cout<<i.r<<" , "<<i.i<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
