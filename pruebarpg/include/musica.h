#ifndef MUSICA_H
#define MUSICA_H
#include <allegro.h>
#include <string>

class musica
{

    MIDI *song;

    public:

     musica(char const *a);
    ~musica();

    void play();
    void stop();
    void pause();
    void resume();
};

#endif // MUSICA_H
