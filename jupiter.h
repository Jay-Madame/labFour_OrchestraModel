/*
[ ] jupiter
    [ ] displays composer
    [ ] displays the runtime of the song
*/

#pragma once
#include "songChoice.h"
#include "time.h"

class Jupiter : public SongChoice
{
private:
    int tempoOfSong;
    std::string volumeOfSong;
    Time runtime;

public:
    Jupiter();
    Jupiter(int tempo, std::string volume, Time rtime);
    virtual void display();
    Time getRunTime();
};