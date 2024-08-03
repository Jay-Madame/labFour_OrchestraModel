#include "songChoice.h"
#include <iostream>

SongChoice::~SongChoice()
{
    for (Song *song : songs)
    {
        delete song;
    }
}

void SongChoice::addSong(Song *song)
{
    songs.push_back(song);
}

void SongChoice::displayAllSongs() const
{
    for (Song *song : songs)
    {
        song->display();
    }
}
