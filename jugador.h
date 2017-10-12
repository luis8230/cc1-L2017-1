#ifndef JUGADOR_H
#define JUGADOR_H
#include<iostream>
using namespace std;

class jugador
{
    public:
        char*name;
        int numero;
        char*posicion;
        int agresividad;
        jugador();
        jugador(char *nom,int camiseta, char *lugar, int agress  ){
        name= nom;
        numero= camiseta;
        posicion= lugar;
        agresividad= agress;
        if(agresividad<=5)
            cout<<"esta jugando normalmente"<<endl;
        if (agresividad>=6)
            cout<<"esta jugando agresivamente"<<endl;
              }
};

#endif // JUGADOR_H
