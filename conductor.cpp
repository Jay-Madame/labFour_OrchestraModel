#include "conductor.h"
#include <algorithm>

Conductor::Conductor() {
    volumeOrch.push_back("pianissimo");
    volumeOrch.push_back("piano");
    volumeOrch.push_back("mezzo-piano");
    volumeOrch.push_back("mezzo-forte");
    volumeOrch.push_back("forte");
    volumeOrch.push_back("fortissimo");
    volume = volumeOrch[4];
}

void Conductor::addToConcertTime(Time obj) {
    concertRuntime = concertRuntime + obj;
}

Time Conductor::getConcertRunTime() const {
    return concertRuntime;
}

std::string Conductor::crescendo() {
    auto it = std::find(volumeOrch.begin(), volumeOrch.end(), volume);
    if (it != volumeOrch.end() && (it + 1) != volumeOrch.end()) {
        volume = *(it + 1);
    }
    return volume;
}

std::string Conductor::decrescendo() {
    auto it = std::find(volumeOrch.begin(), volumeOrch.end(), volume);
    if (it != volumeOrch.end() && it != volumeOrch.begin()) {
        volume = *(it - 1);
    }
    return volume;
}
