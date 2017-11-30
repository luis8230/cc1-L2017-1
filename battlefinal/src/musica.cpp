#include "musica.h"

int musica::Musica(char *archivo)
    {
        MIDI *sonido;
        sonido=load_midi(archivo);
        play_midi(sonido,FALSE);

    }
