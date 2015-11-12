#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Grille;

#define SIZE_Y 4
#define SIZE_X 4

namespace cmd {
    int Main();
    void afficheGrille ( Grille g);
    void jeu ();
}
namespace sdl {
    int Main();
    void afficheGrille ( Grille g);
    void jeu ();
}
namespace opengl {
    int Main();
    void afficheGrille ( Grille g);
    void jeu ();
}

#define CMD

#ifdef SDL
    using namespace sdl;
#else
    #ifdef OPENGL
        using namespace opengl;
    #else
        using namespace cmd;
    #endif // SDL
#endif
