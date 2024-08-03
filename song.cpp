#include "song.h"

Song::Song() : tempoOfSong(0), volumeOfSong(""), runtime() {}

Song::Song(int tempo, std::string volume, Time rtime)
    : tempoOfSong(tempo), volumeOfSong(volume), runtime(rtime) {}
