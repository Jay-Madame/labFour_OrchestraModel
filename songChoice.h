#pragma once

#include <vector>
#include "song.h"

class SongChoice
{
private:
    std::vector<Song *> program;

public:
    ~SongChoice();
    void addSong(Song *song);
    void displayAllSongs() const;
};
