#include "Equipo.h"
#include "Jugador.h"
#include <string>
#include <iostream>


equipo::equipo()
{
    cout<<"debiste agregar jugadores para este equipo"<<endl;
}

equipo::equipo(string name,jugador ingreso[11]){
    IngresoNombre(name);
    Players(ingreso);
}


void equipo::IngresoNombre(string name){
    nombre= name;
}


void equipo::Players(jugador ing[11]){
    string Identificacion, Papel;
    int Camiseta,indisciplina;
    for(int i=0;i<11;i++){

        cout<<"ingrese el nombre del jugador"<<endl;
        cin>>Identificacion;

        cout<<"ingrese el numero de la camiseta del jugador"<<endl;
        cin>>Camiseta;

        cout<<"Ingrese la posicion del jugador"<<endl;
        cin>>Papel;

        cout<<"ingrese que tan agresivo se encuentra el jugador"<<endl;
        cin>>indisciplina;

        ing[i];
        }
}




void equipo::Impresion(){
    cout<<"El nombre del equipo es "<<nombre<<endl;
}

