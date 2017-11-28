#include "juegocontrol.h"

juegocontrol::juegocontrol(){

    puntaje=0;
    buffer=create_bitmap(640,400);
    install_keyboard();


    switch (cambio)

case 1:
    while (true){
    pantallainicio(MENU);
    if (key[KEY_ENTER]){
        ++cambio;
        destroy_bitmap(MENU);
        break;
    }

    }
case 2:

    while (true){

    bucleprincipal();

        if(key[KEY_ESC])

            cout<<"puntaje: "<<puntaje<<endl;
            destroy_bitmap(buffer);
            break;

    }

}

void juegocontrol::pantallainicio(BITMAP a){
    MENU=load_bmp("menu.bmp",NULL);
    blit(a,buffer,0,0,0,0,640,400);
}


void juegocontrol::bucleprincipal(){

    //aca metele todo lo del main

}
