//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice7
// Nom du fichier 		: main_Exo7.c
// Date de création 	: 08.12.2025
// Date de modification : 08.01.2026
//
// Auteur 				: CAH DEA
//
// Description          : cette fonction affiche un triangle en bas à gauche
// 						  et compte le nombre d'étoile total du triangle
//
//
// Remarques :          :  -
//----------------------------------------------------------------------------------//

#include <stdio.h>
#include <math.h>
#include "EXO7.h"

//----------------------------------------------------------------------------------//
//-- nom fct : CalculPerimetreCercle
//-- paramètre entrée : Nbr_Star (char)
//-- paramètre sortie : total (char)
//-- paramètre IN-OUT : - 
//-- description	  : faire un triangle avec un nombre d'étoile donnée et de calculer le nombre d'étoile total du triangle
//----------------------------------------------------------------------------------//
	
char AffTriangleAngleDB(char Nbr_Star)
{
    char i;
    char j;
    char totalStars = 0;
    char Star = '*';
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
            printf("%c", Star);
            totalStars++;
        }
        printf("\n");
    }
    return(totalStars);
}


