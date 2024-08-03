#include "orchestra.h"
#include "orchestra.cpp"
#include "newWorldSymphony.h"
#include "newWorldSymphony.cpp"
#include "jupiter.h"
#include "jupiter.cpp"
#include "conductor.h"
#include "conductor.cpp"
#include "leCygne.h"
#include "leCygne.cpp"
#include "songChoice.h"
#include "songChoice.cpp"

int main()
{
    Orchestra orchestra;

    Song *nws = new NewWorldSymphony();
    Song *jup = new Jupiter();
    Song *swan = new LeCygne();

    orchestra.addSong(nws);
    orchestra.addSong(jup);
    orchestra.addSong(swan);

    Conductor conductor;
    orchestra.setConductor(conductor);

    orchestra.displayConcert();

    SongChoice displayProgram;
    displayProgram.displayAllSongs();

    return 0;
}
