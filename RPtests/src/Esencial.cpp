#include "Esencial.h"

void Esencial::load()
{
    J;
    bosqueA= load_bmp("bosque.bmp",NULL);
    bosqueB = load_bmp("bosque-sup.bmp",NULL);
    bosqueC = load_bmp("bosque-choque.bmp",NULL);

    mapa= bosqueA; chocar=bosqueC; vista=bosqueB;
}

void Esencial::refresh(Jugador &J)
{
    int change=0;
    int ax,ay;
    ax= J.getx();
    ay= J.gety();
    J.keyboard();

    bool choque= false;
    int zx= J.getx();
    int zy= J.gety();

   for (int i=0;i<32;i++){
        for (int j=0;j<32;i++){
            if(getpixel(chocar,zx+i,zy+j)==0xff0000){
                choque=true;
            }}}
           // if(getpixel(chocar,zx+i,zy+j)==0x00ff00){
             //   choque=true;}}}

    if ( choque ){
         J.posiciona( ax,ay );}
         }


void Esencial::paint(Jugador J)
{
    blit( mapa, buffer, 0, 0, 0, 0, Anchura, Altura);
    J.pintar();
    masked_blit( vista, buffer, 0, 0, 0, 0, Anchura, Altura);
}
void Esencial::pintar()
{
}

Esencial:: Esencial(){
}



