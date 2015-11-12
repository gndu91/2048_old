/** @file "main.cpp"
 * @brief
 */
#include "main.h"

#include "grilles/grilles.h"

/**< TODO:Add sdl/opengl 3 */
#include <SDL2/SDL.h>


int main(int argc, char *argv[]) {
    return Main();
}


namespace cmd {
    int Main() {
        return 0;
    }
}


namespace sdl {

    int Main() {
        atexit(SDL_Quit);
        SDL_Init(SDL_INIT_VIDEO);

        return 0;
    }

}

namespace opengl {

    int Main() {
        SDL_Init(SDL_INIT_VIDEO);

        SDL_Quit();
        return 0;
    }

}

