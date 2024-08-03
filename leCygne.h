#pragma once
#include "SongChoice.h"
#include "song.h"
#include "time.h"

class LeCygne : public Song
{
private:
    int tempoOfSong;
    std::string volumeOfSong;
    Time runtime;

public:
    LeCygne();
    LeCygne(int tempo, std::string volume, Time rtime);
    virtual void display();
    Time getRunTime();
};