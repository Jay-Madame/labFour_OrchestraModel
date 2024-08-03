#pragma once
#include <vector>

class SongChoice
{
private:
    SongChoice* program[2];

public:
    virtual ~SongChoice();
    virtual void display() = 0;
    static void displayAllSongs();
};