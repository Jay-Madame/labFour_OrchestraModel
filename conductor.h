#pragma once
#include "time.h"
#include <vector>

/*
[ ] Conductor
    [x] Controls the tempo of the song
    [x] Controls the volume of the orchestra
    [ ] Changes the song
    [x] Has a runtime for the whole concert
*/

class Conductor
{
private:
    Time concertRuntime;
    std::vector<std::string> volumeOrch;
    int tempoCurrently;
    std::string volume;
    std::string name;

public:
    Conductor();
    Conductor(std::string nm);
    void addToConcertTime(Time obj);
    Time getConcertRunTime() const;
    std::string crescendo();
    std::string decrescendo();
    int getTempoCurrently();
    std::string getConductor() const;
};