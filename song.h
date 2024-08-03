#pragma once

#include <string>
#include "time.h"

class Song {
public:
    Song();
    Song(int tempo, std::string volume, Time rtime);
    virtual void display() = 0;
    virtual Time getRunTime() = 0;
    virtual ~Song() = default;

protected:
    int tempoOfSong;
    std::string volumeOfSong;
    Time runtime;
};