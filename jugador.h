#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>
using namespace std;

class jugador
{
    public:
        string name;
        int numero;
        string posicion;
        int agresividad;
        jugador();
        jugador(string nom ,int camiseta, string lugar , int agress);
        void setName(string n);
        void setNumero(int num);
        void setPosicion(string pos);
        void setAgresividad(int a);

        void print();

};

#endif // JUGADOR_H


///CPP///
#include "jugador.h"


jugador::jugador()
{
cout<<"debiste ingresar un jugador con su Nombre, numero, posicion y agresividad >:v"<<endl;
}
jugador::jugador(string nom ,int camiseta, string lugar , int agress){
        name= nom;
        numero= camiseta;
        posicion= lugar;
        agresividad= agress;
        if(agresividad<=5)
            cout<<"esta jugando normalmente"<<endl;
        if (agresividad>=6)
            cout<<"esta jugando agresivamente"<<endl;
              }

    void jugador::setName(string n){
        n=name;
        };
    void jugador::setNumero(int num){
        num= numero;
        };
    void jugador::setPosicion(string pos){
        pos= posicion;
        };
    void jugador::setAgresividad(int a){
        a= agresividad;
        };

    void jugador::print(){
            cout<<name<<numero<<posicion<<agresividad<<endl;
        };

