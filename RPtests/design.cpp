#include "design.h"
#include <allegro.h>

void Portada(BITMAP *port){
    int blink= 0;
    int y= 0;
    int contador= 0;
    bool start= false;
    bool load= false;

    while(!start){
            if (blink<25)
                blit (port,screen,0,y,0,0,690,400);

            if (key[KEY_ENTER]){
                y= 400;
                load= true;
            }
            if(load) contador++;
            if(contador>400) start= true;
            rest(5);
    }

     clear_to_color(screen,0x000000);
}
void printfondo(BITMAP *fondo, BITMAP *buffer){
    masked_blit(fondo, buffer,0,0,0,0,690,400);

}

