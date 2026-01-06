#pragma once
//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice7
// Nom du fichier 		: EXO7.h
// Date de création 	: 16.12.2025
// Date de modification : 16.12.2025
//
// Auteur 				: AOD
//
// Description          : Header file de l'exercice 7
//
//
// Remarques :          :  -
//----------------------------------------------------------------------------------//

#ifndef EXO7_H
#define EXO7_H

// Définition des differentes formes proposé
#define FORME_A		65	// Forme A en ASCII
#define FORME_a		97	// Forme a en ASCII
#define FORME_B		66	// Forme B en ASCII
#define FORME_b		98	// Forme b en ASCII
#define FORME_C		67	// Forme C en ASCII
#define FORME_c		99	// Forme c en ASCII
#define FORME_D		68	// Forme D en ASCII
#define FORME_d		100	// Forme d en ASCII
#define FORME_F		70	// Forme F en ASCII
#define FORME_f		102	// Forme f en ASCII
#define FORME_G		71	// Forme G en ASCII
#define FORME_g		103	// Forme g en ASCII

// Prototypes
char AffTriangleAngleGH(char NbrStarFormeA);
char AffTriangleAngleGB(char NbrStarFormeB);
char AffTriangleAngleDH(char NbrStarFormeC);
char AffTriangleAngleDB(char NbrStarFormeD);
char AffParalleG(char NbrStarFormeF);
char AffParalleD(char NbrStarFormeG);

#endif