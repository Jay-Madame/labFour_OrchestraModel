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

void Orchestra::setConductor(Conductor newConduct)
{
    conductor = newConduct;
}

std::string Orchestra::getConductor() const
{
    return conductor.getConductor();
}

std::ostream &operator<<(std::ostream &strm, const Orchestra &obj)
{
    strm << "The orchestra is warming up right now... it sounds bad.\n"
         << "Oh wait... they don't sound bad it's just the violas playing.\n"

         << "\nThey stopped. The concert master comes out and bows.\n"
         << "Tuning commences...\n"
         << "\nThey stop. They all sit and shuffle their feet, whilst " << obj.getConductor()
         << " walks on stage.\n\n";
    return strm;
}
