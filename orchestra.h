#pragma once

#include "songChoice.h"
#include "conductor.h"
#include <ostream>

class Orchestra
{
private:
    SongChoice songChoice;
    Conductor conductor;

public:
    Orchestra();
    void addSong(Song *song);
    void displayConcert() const;
    void setConductor(Conductor newConduct);
    std::string getConductor() const;
    friend std::ostream &operator<<(std::ostream &strm, const Orchestra &obj);
};