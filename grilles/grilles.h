#include "../main.h"

#include <cstdlib>
#include <iostream>
#include <vector>

#define GAUCHE  7
#define DROITE  4
#define HAUT    8
#define BAS     2

Grille grilleVide();
Grille initialiseGrille ( Grille grille );
Grille deplacementGauche( Grille grille );
Grille deplacementDroite( Grille grille );
Grille deplacementHaut( Grille grille );
Grille deplacementBas( Grille grille );
bool estTerminer( Grille grille );
int score( Grille grille );
bool estGagnant( Grille grille );
Grille deplacement( Grille grille , int direction );
