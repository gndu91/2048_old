#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

const int GAUCHE    = 7;
const int DROITE    = 4;
const int HAUT      = 8;
const int BAS       = 2;

typedef vector<vector<int>> Grille;

Grille grilleVide(){}
Grille initialiseGrille ( Grille grille ){}
Grille deplacementGauche( Grille grille ){}
Grille deplacementDroite( Grille grille ){}
Grille deplacementHaut( Grille grille ){}
Grille deplacementBas( Grille grille ){}
bool estTerminer( Grille grille );
int score( Grille grille );
bool estGagnant( Grille grille );
Grille deplacement( Grille grille , int direction ) {
    switch ( direction ) {
        case GAUCHE:
            return deplacementGauche( grille );
        case DROITE:
            return deplacementDroite( grille );
        case HAUT:
            return deplacementHaut( grille );
        case BAS:
            return deplacementBas( grille );
        default:
            cerr << "Deplacement␣non−autorise !" << endl ;
            exit((signed int) -1);
    }
}
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

#define SDL

#ifdef SDL
    using namespace sdl;
#else
    using namespace cmd;
#endif // SDL
