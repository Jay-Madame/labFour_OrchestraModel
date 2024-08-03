/*
[ ] jupiter
    [ ] displays composer
    [ ] displays the runtime of the song
*/

#ifndef JUPITER_H
#define JUPITER_H
#include "SongChoice.h"
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
#endif