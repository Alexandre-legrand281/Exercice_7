//-----------------------------------------------------------------------------------//
// Nom du projet 		: AffTriangleAngleGH
// Nom du fichier 		: AffTriangleAngleGH.c
// Date de création 	: 03.11.2025
// Date de modification : -
//
// Auteur 				: Timéo Doleyres | Nicolas Turrian
//
// Version				: 0.1
//
// Description          : 
//
//
// Remarques :            
//----------------------------------------------------------------------------------//
#include <stdio.h>
// librairie perso
#include "EXO7.h"

//----------------------------------------------------------------------------------//
// Nom fct : AffTriangleAngleGH
// Paramêtre d'entrée   : NbStarMax (char) nb d'étoiles
// Paramêtre de sortie  : StarTrek (char) nb d'étoile affichée au total
// Descrition : Fonction d'affichage d'un triangle d'étoiles
//----------------------------------------------------------------------------------//
char AffTriangleAngleGH(char NbStarMax)
{
    unsigned char StarTrek = 0;  // Variable de comptage des étoiles
    unsigned char i;             // Variable pour la for

    
    while (NbStarMax >= 1)
    {

        // Affiche le nb d'étoiles de la variable NbStarMax sur la console
        for (i = 0; i < NbStarMax; i++) 
        {
            printf("*");
        }

        // Retour à la ligne
        printf("\n");

        // ajoute le nb d'étoiles à la variable de retour StarTrek
        StarTrek += NbStarMax;

        // Décrementer le nb d'étoiles
        NbStarMax--;

    }

    return(StarTrek);

}
