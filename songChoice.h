#ifndef SONGCHOICE_H
#define SONGCHOICE_H

#include <vector>
#include "time.h"
#include "newWorldSymphony.h"
#include "jupiter.h"

class SongChoice
{
public:
    SongChoice() = default;
    ~SongChoice();

    void addSong(NewWorldSymphony *song);
    void addSong(Jupiter *song);
    void displayAllSongs() const;

private:
    std::vector<NewWorldSymphony *> newWorldSongs;
    std::vector<Jupiter *> jupiterSongs;
};
#endif