#ifndef NEWWORLDSYMPHONY_H
#define NEWWORLDSYMPHONY_H
#include "SongChoice.h"
#include "time.h"

class NewWorldSymphony : public SongChoice
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
#endif