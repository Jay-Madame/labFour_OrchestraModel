#include "songChoice.h"
#include "newWorldSymphony.h"
#include "jupiter.h"

int main() {
    // Create instances of NewWorldSymphony and Jupiter
    NewWorldSymphony* nws = new NewWorldSymphony();
    Jupiter* jup = new Jupiter();

    // Create an instance of SongChoice
    SongChoice playlist;
    playlist.addSong(nws);  // Add existing song objects
    playlist.addSong(jup);

    // Display all songs
    playlist.displayAllSongs();

    return 0;
}
