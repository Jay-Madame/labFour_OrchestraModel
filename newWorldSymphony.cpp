#include "newWorldSymphony.h"
#include <iostream>

NewWorldSymphony::NewWorldSymphony() : NewWorldSymphony(120, "fortissimo", Time(43, 51)) {}
NewWorldSymphony::NewWorldSymphony(int tempo, std::string volume, Time rtime) : tempoOfSong(tempo), volumeOfSong(volume), runtime(rtime) {}
void NewWorldSymphony::display()
{
    std::cout << "Anotnin Dvorak's Symphony No. 9 plays at " << tempoOfSong
              << " bpm at a steady volume of " << volumeOfSong
              << " with a runtime of " << runtime << std::endl;
}
Time NewWorldSymphony::getRunTime()
{
    return runtime;
}