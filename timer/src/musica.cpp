#include "musica.h"

musica::musica(string a)
{
    song=load_midi(a);
}

void musica::play()
{
    play_midi(song,1):
}
void musica::stop()
{
    stop_midi();
}
void musica::pause()
{
    midi_pause();
}
void musica::resume()
{
    midi_resume();
}

musica::~musica()
{
    destroy_midi(song);
}
