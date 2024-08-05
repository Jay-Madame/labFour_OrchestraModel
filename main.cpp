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
#include "song.cpp"
#include "song.h"
#include "time.cpp"
#include "time.h"

int main()
{
    Orchestra orchestra;

    Song *nws = new NewWorldSymphony();
    Song *jup = new Jupiter();
    Song *swan = new LeCygne();

    orchestra.addSong(nws);
    orchestra.addSong(jup);
    orchestra.addSong(swan);

    Conductor conductor("Gustavo Dudamel");
    

    orchestra.setConductor(conductor);

    std::cout << orchestra;

    orchestra.displayConcert();

    return 0;
}
