#include "LeCygne.h"
#include <iostream>

LeCygne::LeCygne() : LeCygne(94, "metzo-piano", Time(3, 28)) {}
LeCygne::LeCygne(int tempo, std::string volume, Time rtime) : tempoOfSong(tempo), volumeOfSong(volume), runtime(rtime) {}
void LeCygne::display()
{
    std::cout << "Saint-Saens Le Cygne plays at " << tempoOfSong
              << " bpm at a steady volume of " << volumeOfSong
              << " with a runtime of " << runtime << std::endl;
}
Time LeCygne::getRunTime()
{
    return runtime;
}