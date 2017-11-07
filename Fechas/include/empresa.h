#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>

using namespace std;


class empresa
{
    public:
        string nombre;
        long long int ruc;

        empresa();
        empresa(string n,long long int r);

        void setnombre(string n);
        void setruc(long long int r);
        void addempleado();
        enum departamentos{};


};

#endif // EMPRESA_H
