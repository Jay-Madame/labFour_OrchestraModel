#include "conductor.h"

Conductor::Conductor()
{
    volumeOrch.push_back("pianisimo");
    volumeOrch.push_back("piano");
    volumeOrch.push_back("metzo-piano");
    volumeOrch.push_back("metzo-forte");
    volumeOrch.push_back("forte");
    volumeOrch.push_back("fortissimo");
    volume = volumeOrch[4];
}
void Conductor::addToConcertTime(Time obj)
{
    concertRuntime = (concertRuntime + obj);
}
Time Conductor::getConcertRunTime()
{
    return concertRuntime;
}
std::string Conductor::crescendo()
{
    int index;
    for (int i = 0; i < sizeof(volumeOrch); i++)
    {
        if (volume == volumeOrch[i])
        {
            index = i;
        }
    }
    if (index < sizeof(volumeOrch))
    {
        volume = volumeOrch[(index + 1)];
    }
    return volume;
}
std::string Conductor::decrescendo()
{
    int index;
    for (int i = 0; i < sizeof(volumeOrch); i++)
    {
        if (volume == volumeOrch[i])
        {
            index = i;
        }
    }
    if (index > 0)
    {
        volume = volumeOrch[(index - 1)];
    }
    return volume;
}