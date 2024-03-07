//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation résistance
// Nom du fichier 		: infoSeries.h
// Date de création 	: 04.03.2022
// Date de modification : 06.03.2024
//
// Auteur 				: Philou (Ph. Bovey)
// Modification			: Vitor Coelho
//
// Description          : définition et prototype lié aux série de résistance 
//
//
// Remarques :   Code modifié lors du test 07.03.2024       : 
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
typedef enum e_valSerie 
{
#define	E6	= 6,
#define E12 = 12,
#define E24 = 24
};

typedef enum e_suffixePoids 
{
#define CST_K = 3,
#define	CST_M = 6
};

//-- déclaration de structeur --// 

typedef struct s_serieRX
{
	char choixSerieR;
	char rangResistance;
	char poidPuissanceR;
	float *pt_tbApproximation;
	float resistanceBrute;
	float resistanceNormalisee;
};
//-- déclaration de prototype --// 
					// controle de la série E6, E12, E24... 
					// contrôle de la valeur unitaire de la résistance 
					// contrôle du puissance de puissance en base 10
					// calcul la résistance brute de l'utilsateur
					// affichage de la valeur de résistance avec suffixe -, k, M
					// calcul de la série de résistance 
					// calcul la valeur normalisée de R

#endif // !INFO_SERIE


