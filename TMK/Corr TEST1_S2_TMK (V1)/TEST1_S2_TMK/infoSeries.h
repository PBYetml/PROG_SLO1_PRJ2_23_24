//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation résistance
// Nom du fichier 		: infoSeries.h
// Date de création 	: 04.03.2022
// Date de modification : 06.03.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : définition et prototype lié aux série de résistance 
//
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
#ifndef INFO_SERIE
#define INFO_SERIE 

//-- librairies utilisées --//
#include <stdint.h>
#include "infoUser.h"

//-- déclaration des constantes ou de définition --// 
#define LIMITE_R_MIN 1.00
#define LIMITE_R_MAX 10.00
#define LIMITE_POID_PUISSANCE_MIN 0
#define LIMITE_POID_PUISSANCE_MAX 6

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- déclaration énumération --// 
#define enum e_valSerie { E6 = 6, E12 = 12, E24 = 24 }e_valSerie;

#define enum e_suffixePoidPuissance { CST_K = 3, CST_M = 6 }e_suffixePoidPuissance;

//-- déclaration de structeur --// 
struct s_serieRX
{
	char choixSerieR;
	char rangR;
	char poidPuissanceR;
	float *pt_tbApporoximation;
	float RUser;
	float RNormalisee;

}s_serieRX;

//-- déclaration de prototype --// 
					// controle de la série E6, E12, E24... 
					// contrôle de la valeur unitaire de la résistance 
					// contrôle du puissance de puissance en base 10
					// calcul la résistance brute de l'utilsateur
					// affichage de la valeur de résistance avec suffixe -, k, M
					// calcul de la série de résistance 
					// calcul la valeur normalisée de R

#endif // !INFO_SERIE


