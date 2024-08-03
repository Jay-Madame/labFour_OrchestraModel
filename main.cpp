#include "orchestra.h"
#include "orchestra.cpp"
#include "newWorldSymphony.h"
#include "newWorldSymphony.cpp"
#include "jupiter.h"
#include "jupiter.cpp"
#include "conductor.h"
#include "conductor.cpp"

int main()
{
    Orchestra orchestra;

    Song *nws = new NewWorldSymphony();
    Song *jup = new Jupiter();

    orchestra.addSong(nws);
    orchestra.addSong(jup);

    Conductor conductor;
    orchestra.setConductor(conductor);

    orchestra.displayConcert();

    return 0;
}
