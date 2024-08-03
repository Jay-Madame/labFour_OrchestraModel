#include "songChoice.h"
SongChoice::~SongChoice()
{
    for (auto song : program)
    {
        delete song;
    }
}

void SongChoice::addSong(Song *song)
{
    program.push_back(song);
}

void SongChoice::displayAllSongs() const
{
    for (const auto &song : program)
    {
        song->display();
    }
}
