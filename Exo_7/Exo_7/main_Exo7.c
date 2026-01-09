//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice7
// Nom du fichier 		: main_Exo7.c
// Date de création 	: 08.12.2025
// Date de modification : 08.01.2026
//
// Auteur 				: AOD
//
// Description          : main code de l'exercice 7 
//
//
// Remarques :          :  -
//----------------------------------------------------------------------------------//

// Librairies Standars
#include <stdio.h>		// pour usage printf
#include <stdint.h>		// uniformation du type entier 
#include <stdbool.h>

// Librairies Personnel
#include "EXO7.h"
#include "AffParalleG.h"
#include "AffTriangleAngleGB.h"

int main(void)
{
	//Déclarations des variables locales
	char NbrStar;
	char Forme;
	char Nettoyage;
	short WriteNbrStar;
	unsigned char NbrStarTot;

	// Déclarations des constantes locales
	const char NbrStarMax = 15;
	const char NbrStarMin = 0;

	while (1)
	{
		// Reset des valeurs
		NbrStar = 0;
		Forme = 0;
		WriteNbrStar = 0;
		NbrStarTot = 0;

		// Récéption du nombre d'étoiles
		printf("Combien d'etoiles souhaitez vous entre 0 et 15 (Tout autre charactere seras traduit par 0): ");
		scanf("%3d", &WriteNbrStar);

		// Nettoyage du buffer
		while ((Nettoyage = getchar()) != '\n');

		// Reset de nettoyage
		Nettoyage = 0;

		if (((WriteNbrStar < NbrStarMin) || (WriteNbrStar > NbrStarMax)))
		{
			if (WriteNbrStar > NbrStarMax)
			{
				// Affichage de message d'erreur
				printf("Vous avez selectionner plus que 15 etoiles, veuillez recommencer... \n");
			}
			else if (WriteNbrStar < NbrStarMin)
			{
				// Affichage de message d'erreur
				printf("Vous avez selectionner moins que 0 etoiles, veuillez recommencer... \n");
			}
		}
		else
		{
			// Récupération de la valeur ecrite
			NbrStar = WriteNbrStar;

			// Récéption de la forme désiré
			printf("Quel forme souhaitez vous entre la Forme A a G (la Forme E n'existe pas): ");
			scanf_s("%c", &Forme);

			// Nettoyage du buffer
			while ((Nettoyage = getchar()) != '\n');

			// Reset de nettoyage
			Nettoyage = 0;

			// Affichage de la forme désiré
			switch (Forme)
			{
			case FORME_A:
			case FORME_a:
				// Affichage des étoiles sous la forme A
				NbrStarTot = AffTriangleAngleGH(NbrStar);
				break;

			case FORME_B:
			case FORME_b:
				// Affichage des étoiles sous la forme B
				NbrStarTot = AffTriangleAngleGB(NbrStar);
				break;

			case FORME_C:
			case FORME_c:
				// Affichage des étoiles sous la forme C
				NbrStarTot = AffTriangleAngleDH(NbrStar);
				break;

			case FORME_D:
			case FORME_d:
				// Affichage des étoiles sous la forme D
				NbrStarTot = AffTriangleAngleDB(NbrStar);
				break;

			case FORME_F:
			case FORME_f:
				// Affichage des étoiles sous la forme F
				NbrStarTot = AffParalleG(NbrStar);
				break;

			case FORME_G:
			case FORME_g:
				// Affichage des étoiles sous la forme G
				NbrStarTot = AffParalleD(NbrStar);
				break;

			default:
				// Affichage de message d'erreur
				printf("Forme non repertorie, veuillez recommencer... \n");
				break;
			}

			// Affichage de nombres d'étoiles affiché
			printf("Vous avez affiche au total %d etoiles \n", NbrStarTot);
		}
	}
}
