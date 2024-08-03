/*
[ ] jupiter
    [ ] displays composer
    [ ] displays the runtime of the song
*/

#pragma once
#include "SongChoice.h"
#include "song.h"
#include "time.h"

class Jupiter : public Song
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