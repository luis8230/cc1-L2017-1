#include "musica.h"

musica::musica(const char *archivo)
{
    fondo=load_midi(archivo);
    play_midi(fondo,1);

}
