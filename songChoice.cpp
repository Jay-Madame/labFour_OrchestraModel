#include "songChoice.h"
SongChoice::~SongChoice()
{
    delete program;
}
static void SongChoicedisplayAllSongs()
{
    for (auto &*song : program)
    {
        song->display();
    }
}
