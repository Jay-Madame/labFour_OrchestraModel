#pragma once

#include "songChoice.h"
#include "conductor.h"

class Orchestra
{
private:
    SongChoice songChoice;
    Conductor conductor;

public:
    Orchestra();
    void addSong(Song *song);
    void displayConcert() const;
    void setConductor(const Conductor &cond);
};