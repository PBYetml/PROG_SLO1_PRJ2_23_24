//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: infoSeries.h
// Date de cr�ation 	: 04.03.2022
// Date de modification : 06.03.2024
//
// Auteur 				: Philou (Ph. Bovey)
// Modification			: Vitor Coelho
//
// Description          : d�finition et prototype li� aux s�rie de r�sistance 
//
//
// Remarques :   Code modifi� lors du test 07.03.2024       : 
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
#define ZERO 0
#define UN 1
#define DEUX 2
#define TROIS 3
#define QUATRE 4
#define CINQ 5
#define SIX 6
#define SEPT 7
#define HUIT 8
#define NEUF 9
#define DIX 10


#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- d�claration �num�ration --// 
typedef enum
{
#define	E6	= 6,
#define E12 = 12,
#define E24 = 24
}e_valSerie;

typedef enum
{
#define CONST_K = 3,
#define	CONST_M = 6
}e_suffixePoids;

//-- d�claration de structeur --// 

typedef struct
{
	char choixSerieR;
	char rangResistance;
	char poidPuissanceR;
	float *pt_tbApproximation;
	float resistanceBrute;
	float resistanceNormalisee;
}s_serieRX;

#endif // !INFO_SERIE


