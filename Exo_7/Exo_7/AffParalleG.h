//-----------------------------------------------------------------------------------//
// Nom du projet 		: AffParalleG
// Nom du fichier 		: AffParalleG.h
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

#ifndef AFFPARALLEG_H
#define AFFPARALLEG_H

// Fonction réelle qui accepte une chaîne de caractères
unsigned char AffParalleG_v2(const char* str);

#define AffParalleG(x) AffParalleG_v2(#x)

#endif // AFFPARALLEG_H

