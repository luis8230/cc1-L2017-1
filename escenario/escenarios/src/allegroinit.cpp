#include "allegroinit.h"
#include <allegro.h>


allegroinit::allegroinit()
{
   allegroinit();
   crearbuffer();

}

void allegroinit::crearbuffer(){

    buffer=create_bitmap(640,400);

}

void allegroinit::alegroinit(){
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,400,0,0);

}
