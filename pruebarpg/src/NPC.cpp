#include "NPC.h"

void NPC::crea( BITMAP *_img, int _x, int _y, int dir, int _estado, int _lugar )
{
    x = _x;
    y = _y;
    direccion = dir;
    animacion = 0;
    escena = _lugar;

    imagen = create_bitmap(_img->w, _img->h);
    blit( _img, imagen, 0,0, 0,0, _img->w, _img->h);
    estado=_estado;
}
/*void NPC::pinta()
{           rectfill( choque, x+2, y+1, x+30, y+31, 0xff0000);
            masked_blit(imagen, fondo, animacion*32, direccion*32, x, y, 32,32);
}
*/
