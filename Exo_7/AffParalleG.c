//-----------------------------------------------------------------------------------//
// Nom du projet 		: AffParalleG
// Nom du fichier 		: AffParalleG.c
// Date de création 	: 25.12.2025
// Date de modification : 25.12.2025
//
// Auteur 				: SVD et MBY
//
// Version				: 1.0
//
// Description          : parallèlogramme décaller à droite 
// Remarques :        
//----------------------------------------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "AffParalleG.h"

unsigned char AffParalleG(unsigned char nombre)
{
    int i, decalage, etoile, nbrEtoile;

    if (nombre >= 0 && nombre <= 15)
    {
        for (i = 0; i < nombre; i++)
        {
            // Décalage vers la gauche
            for (decalage = 0; decalage < i; decalage++)
            {
                printf(" ");
            }
            // Étoiles
            for (etoile = 0; etoile < nombre; etoile++)
            {
                printf("*");
            }
            printf("\n");
        }
        nbrEtoile = nombre * nombre;
        printf("%d etoiles au total !\n", nbrEtoile);
        return (nbrEtoile); // Succès
    }
    else
    {
        printf("%d n'est pas une valeur comprise entre 0 et 15 !\n", nombre);
        return 0; // Échec
    }
}