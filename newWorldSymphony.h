#pragma once
#include "SongChoice.h"
#include "song.h"
#include "time.h"

class NewWorldSymphony : public Song
{
private:
    int tempoOfSong;
    std::string volumeOfSong;
    Time runtime;

public:
    NewWorldSymphony();
    NewWorldSymphony(int tempo, std::string volume, Time rtime);
    virtual void display();
    Time getRunTime();
};