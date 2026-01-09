#include <stdio.h>
#include <math.h>
#include "EXO7.h"

// prototype
char AffTriangleAngleDB(char Nbr_Star);

	// Description
	//cette fonction affiche un triangle en bas à gauche
    // et compte le nombre d'étoile total du triangle
    // 
	// auteur : Allenbach Christophe et Espinosa Dilan 
	char AffTriangleAngleDB(char Nbr_Star)
{
    char i;
    char j;
    char total = 0;
    char etoile = '*';
    char vide = ' ';

    for (i = 1; i <= Nbr_Star; i++)
    {
        // zone de vide
        for (j = 1; j <= Nbr_Star - i; j++)
        {
            printf("%c", vide);
        }

        // affichage des Étoiles
        for (j = 1; j <= i; j++)
        {
            printf("%c", etoile);
            total++;
        }
        printf("\n");
    }
    return(total);
}

