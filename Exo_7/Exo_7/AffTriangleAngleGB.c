#include "AffTriangleAngleGB.h"

// Fonction qui permet d'afficher un triangle composé d'étoiles
// Paramètres d'entrée :
// NbrStar : Nombre d'étoiles à afficher sur une ligne au maximum
// Paramètres de sortie : 
// NbrStarTotal : Nombre d'étoiles affichées
// Constantes :
// MIN_NBR_STARS : Nombre minimum d'étoiles à afficher sur une ligne
// MAX_NBR_STARS : Nombre maximum d'étoiles à afficher sur une ligne
// STAR_CHARACTER : Charactère étoile à afficher
unsigned char AffTriangleAngleGB(const int NbrStar) {
	unsigned char NbrStarTotal = 0;

	// Vérification du numbre 
	if (NbrStar >= MIN_NBR_STARS && NbrStar <= MAX_NBR_STARS)
	{
		// Pour chaque ligne de la pyramide
		for (unsigned char Ligne = 1; Ligne <= NbrStar; Ligne++) {
			// 
			for (unsigned char NbrStarOnCurrentLine = 0; NbrStarOnCurrentLine < Ligne; NbrStarOnCurrentLine++)
			{
				// Affiche une étoile
				printf_s(STAR_CHARACTER);

				// Incrémente le compteur de nombre d'étoiles qui ont été affichées 
				// au total durant l'appel de la fonction
				NbrStarTotal++;
			}
			// Nouvelle ligne, on passe à la suivante
			printf_s("\n");
		}
	}
	else
	{
		// Affichage d'un message d'erreur à l'utilisateur si on dépasse les limites définies dans les constantes
		printf_s("Entree invalide, veuillez entrer un nombre compris entre %u et %u.\n", MIN_NBR_STARS, MAX_NBR_STARS);
	}
	
	// Retourne le nombre d'étoiles affichées
	return NbrStarTotal;
}