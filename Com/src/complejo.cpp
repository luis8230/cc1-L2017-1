#include "complejo.h"

complejo::complejo()
{
    r=0;
    i=0;
}

complejo::complejo(int a, int b)
{
    r=a;
    i=b;
}
complejo complejo::suma(complejo j){
    r=j.r+r;
    i=j.i+i;
    }
void complejo::escalar(int e){
    r=e*r;
    i=e*i;
}
complejo complejo::resta(complejo j){
    r=r-j.r;
    i=i-j.i;
}
