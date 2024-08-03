#include "orchestra.h"
#include <iostream>

Orchestra::Orchestra() : conductor() {}

void Orchestra::addSong(Song *song)
{
    songChoice.addSong(song);
    conductor.addToConcertTime(song->getRunTime());
}

void Orchestra::displayConcert() const
{
    songChoice.displayAllSongs();
    std::cout << "Concert Runtime: " << conductor.getConcertRunTime() << std::endl;
}

void Orchestra::setConductor(const Conductor &cond)
{
    conductor = cond;
}
