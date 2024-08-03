#pragma once

#include <vector>
#include "song.h"

class SongChoice {
public:
    SongChoice() = default;
    ~SongChoice();

    void addSong(Song* song);
    void displayAllSongs() const;

private:
    std::vector<Song*> songs;
};
