#include <iostream>
#include "allegro.h"

using namespace std;

int main()
{
    allegro_init();
    install_keyboard();
    //Pantalla//
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,300,0,0);
    BITMAP *buffer = create_bitmap(640,300);
    clear_to_color(buffer,0xFFFFFF);
    //Personje y Sprites//

    BITMAP *personajeArriba;
    BITMAP *personajeAbajo;
    BITMAP *personajeDerecha;
    BITMAP *personajeIzquierda;
    BITMAP *personajeAtaqueNI;
    BITMAP *personajeAtaqueND;
    BITMAP *personajeAtaqueFA;
    BITMAP *personajeAtaqueFB;
//Sprites Enemigos//
    //Sprites Magias y animaciones//
    BITMAP *FuegoPersonaje;
    BITMAP *AtaqueOdin1;
    BITMAP *AtaqueOdin2;


    //Enemigo uno//
    BITMAP *EnemigoAr1;
    BITMAP *EnemigoAb1;
    BITMAP *EnemigoIz1;
    BITMAP *EnemigoDe1;
    BITMAP *EnemigoAt1;

    //Enemigo dos//
    BITMAP *EnemigoAr2;
    BITMAP *EnemigoAb2;
    BITMAP *EnemigoIz2;
    BITMAP *EnemigoDe2;
    BITMAP *EnemigoAt2;

    //Enemigo tres//
    BITMAP *EnemigoAr3;
    BITMAP *EnemigoAb3;
    BITMAP *EnemigoIz3;
    BITMAP *EnemigoDe3;
    BITMAP *EnemigoAt3;



    //Jefe Odin//

    BITMAP *OdinAr1;
    BITMAP *OdinAb1;
    BITMAP *OdinIz1;
    BITMAP *OdinDe1;
    BITMAP *OdinAt1;


    //LOCALIZACION DEL PERSONAJE y VARIABLES//
    int x=200;
    int y=50;
    int xf;
    bool ff= false;

    //ACCIONES DEL PERSONAJE//
//Personaje Principal//
    personajeArriba=  load_bitmap("0.bmp",NULL);
    personajeAbajo=  load_bitmap("1.bmp",NULL);
    personajeDerecha= load_bitmap("8.bmp",NULL);
    personajeIzquierda= load_bitmap("7.bmp",NULL);
    personajeAtaqueNI= load_bitmap("4.bmp",NULL);
    personajeAtaqueND= load_bitmap("9.bmp",NULL);
    personajeAtaqueFA= load_bitmap("AtaqueAlto.bmp",NULL);
    personajeAtaqueFB= load_bitmap("AtaqueBajo.bmp",NULL);
//Enemigo CABALLERO-----1-----//

    EnemigoAr1= load_bitmap("Caballero1.bmp",NULL);
    EnemigoDe1= load_bitmap("Caballero1.bmp",NULL);
    EnemigoIz1= load_bitmap("Caballero1Flip.bmp",NULL);
    EnemigoAb1= load_bitmap("Caballero1Flip.bmp",NULL);
    EnemigoAt1= load_bitmap("Caballero2.bmp",NULL);


//enemigo CENTAURO ------2-----//

    EnemigoAr2= load_bitmap("Centauro1.bmp",NULL);
    EnemigoDe2= load_bitmap("Centauro1.bmp",NULL);
    EnemigoIz2= load_bitmap("Centauro1Flip.bmp",NULL);
    EnemigoAb2= load_bitmap("Centauro1Flip.bmp",NULL);
    EnemigoAt2= load_bitmap("Centauro2.bmp",NULL);

//enemigo AQUA----3-----//
    EnemigoAr3= load_bitmap("Aqua1.bmp",NULL);
    EnemigoDe3= load_bitmap("Aqua1.bmp",NULL);
    EnemigoIz3= load_bitmap("Aqua1Flip.bmp",NULL);
    EnemigoAb3= load_bitmap("Aqua1Flip.bmp",NULL);
    EnemigoAt3= load_bitmap("Aqua2.bmp",NULL);
//MAGIAS Y ANIMACIONES (seguir agregando)//
    FuegoPersonaje= load_bitmap("AtaqueFuerte.bmp",NULL);
    AtaqueOdin1= load_bitmap("FuegoJefe1.bmp",NULL);
    AtaqueOdin2= load_bitmap("FuegoJefe2.bmp",NULL);




    //Verificar//
    if (!personajeArriba) {
    cout<<("Error al cargar el bitmap");
}


//Bucle y comandos//
    while(!key[KEY_ESC]) {
            blit(personajeAbajo, screen, 0, 0, x, y, 38, 54);
            if(key[KEY_UP]){
                y-=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeArriba,screen,0,0,x,y,38,54);
                rest(130);
            }
            else if(key[KEY_LEFT]){
                x-=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeIzquierda,screen,0,0,x,y,38,54);
                rest(130);
            }
            else if(key[KEY_DOWN]){
               y+=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeAbajo,screen,0,0,x,y,38,54);
                rest(130);
            }
            else if(key[KEY_RIGHT]){
                x+=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeDerecha,screen,0,0,x,y,38,54);
                rest(130);
            }
            if(key[KEY_SPACE]&&key[KEY_LEFT]){
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeAtaqueNI,screen,0,0,x,y,69,78);
                rest(90);
            }
            else if(key[KEY_SPACE]&&key[KEY_RIGHT]){
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeAtaqueND,screen,0,0,x,y,69,78);
                rest(90);
            }
            else if(key[KEY_SPACE]&&key[KEY_UP]){
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeAtaqueFA,screen,0,0,x,y,111,57);
                rest(150);
                ff=true;
                xf= y-60;
            }
            else if(key[KEY_SPACE]&&key[KEY_DOWN]){
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeAtaqueFB,screen,0,0,x,y,111,57);
                rest(150);
                ff=true;
                xf= y+60;
            }
            if(ff){
                blit(buffer,screen,0,0,0,0,640,300);
                blit(FuegoPersonaje,screen,0,0,x,xf,111,57);
                ff=false;
                rest(150);
            }


    }
    readkey();
    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN();
