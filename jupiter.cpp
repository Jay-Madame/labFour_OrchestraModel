#include "jupiter.h"
#include <iostream>

Jupiter::Jupiter() : Jupiter(60, "mezzo-forte", Time(7, 36)) {}
Jupiter::Jupiter(int tempo, std::string volume, Time rtime) : tempoOfSong(tempo), volumeOfSong(volume), runtime(rtime) {}
void Jupiter::display()
{
    std::cout << "Gustav Holst's Jupiter plays at " << tempoOfSong
              << " bpm at a steady volume of " << volumeOfSong
              << " with a runtime of " << runtime << std::endl;
}
Time Jupiter::getRunTime()
{
    return runtime;
}