#ifndef CODIGOS_H
#define CODIGOS_H
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

class Codigos
{
    public:

        string alfabeto= "abcdefghijklmnopqrstuwvxyz";
        Codigos();
        virtual ~Codigos();
        int a,b,inversa,modulo;
        int invm();
        int aleatorio();
        string Cafin(string m);

    protected:
    private:
};

#endif // CODIGOS_H
