//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: infoSeries.h
// Date de cr�ation 	: 04.03.2022
// Date de modification : 06.03.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : d�finition et prototype li� aux s�rie de r�sistance 
//
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
#ifndef INFO_SERIE
#define INFO_SERIE 

//-- librairies utilis�es --//
#include <stdint.h>
#include "infoUser.h"

//-- d�claration des constantes ou de d�finition --// 
#define LIMITE_R_MIN 1.00
#define LIMITE_R_MAX 10.00
#define LIMITE_POID_PUISSANCE_MIN 0
#define LIMITE_POID_PUISSANCE_MAX 6

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- d�claration �num�ration --// 
#define enum e_valSerie { E6 = 6, E12 = 12, E24 = 24 }e_valSerie;

#define enum e_suffixePoidPuissance { CST_K = 3, CST_M = 6 }e_suffixePoidPuissance;

//-- d�claration de structeur --// 
struct s_serieRX
{
	char choixSerieR;
	char rangR;
	char poidPuissanceR;
	float *pt_tbApporoximation;
	float RUser;
	float RNormalisee;

}s_serieRX;

//-- d�claration de prototype --// 
					// controle de la s�rie E6, E12, E24... 
					// contr�le de la valeur unitaire de la r�sistance 
					// contr�le du puissance de puissance en base 10
					// calcul la r�sistance brute de l'utilsateur
					// affichage de la valeur de r�sistance avec suffixe -, k, M
					// calcul de la s�rie de r�sistance 
					// calcul la valeur normalis�e de R

#endif // !INFO_SERIE


