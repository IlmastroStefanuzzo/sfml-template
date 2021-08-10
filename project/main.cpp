#include <iostream>
#include <game.h>

int main()
{
    // Init game engine
    game gameinst;

    // Game loop
    while (gameinst.getWindowIsOpen())
    {
        // Update
        gameinst.update();

        // Render
        gameinst.render();
    }

    // Application end
    return 0;
}
