#include "newWorldSymphony.h"
#include <iostream>

NewWorldSymphony::NewWorldSymphony() : NewWorldSymphony(120, "fortissimo", Time(43, 51)) {}
NewWorldSymphony::NewWorldSymphony(int tempo, std::string volume, Time rtime) : tempoOfSong(tempo), volumeOfSong(volume), runtime(rtime) {}
void NewWorldSymphony::display()
{
    std::cout << "Anotnin Dvorak's Symphony No. 9 plays at " << tempoOfSong << " bpm at a steadu volume of " << volumeOfSong;
}
Time NewWorldSymphony::getRunTime()
{
    return runtime;
}