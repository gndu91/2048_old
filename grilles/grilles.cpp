#include "grilles.h"

Grille grilleVide(){
    return Grille(SIZE_Y,vector<int>(SIZE_X,0));
}
Grille initialiseGrille ( Grille grille ){
    return grille;
}
Grille deplacementGauche( Grille grille ) {
    return grille;
}
Grille deplacementDroite( Grille grille ) {
    return grille;
}
Grille deplacementHaut( Grille grille ) {
    return grille;
}
Grille deplacementBas( Grille grille ) {
    return grille;
}
bool estTerminer( Grille grille ) {
    return true;
}
int score( Grille grille ) {
    return -1;
}
bool estGagnant( Grille grille ) {
    return false;
}
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
