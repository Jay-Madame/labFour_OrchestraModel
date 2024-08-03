#include "songChoice.h"
#include <iostream>

SongChoice::~SongChoice()
{
    for (auto &song : newWorldSongs)
    {
        delete song;
    }
    for (auto &song : jupiterSongs)
    {
        delete song;
    }
}

void SongChoice::addSong(NewWorldSymphony *song)
{
    newWorldSongs.push_back(song);
}

void SongChoice::addSong(Jupiter *song)
{
    jupiterSongs.push_back(song);
}

void SongChoice::displayAllSongs() const
{
    std::cout << "New World Symphony Songs:\n";
    for (const auto &song : newWorldSongs)
    {
        song->display();
    }

    std::cout << "\nJupiter Songs:\n";
    for (const auto &song : jupiterSongs)
    {
        song->display();
    }
}
