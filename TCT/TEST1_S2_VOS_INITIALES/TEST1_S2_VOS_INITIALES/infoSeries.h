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

#define CONST_K 3
#define CONST_M 6
#define CONST_G 9

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- déclaration énumération --// 
typedef enum e_valSerie {E6 = 6, E12 = 12, E24 = 24};
typedef enum e_suffixePoidPuissance {CST_K = 3, CST_M = 6};

//-- déclaration de structure --// 
typedef struct
{
	char choixSerieR;			//1 octet
	char rangResistance;
	char poidPuissanceR;
	float *pt_tbApproximation;	//4 octets
	float resistanceBrute;		
	float resistanceNormalisee;
}s_serieRX;						//15 octets

//-- déclaration de prototype --// 
	int ControleChoixSerie(enum e_validation);			// controle de la série E6, E12, E24... 
	float ControleValR(enum e_validation);				// contrôle de la valeur unitaire de la résistance 
	int ControlePoidPuissanceR(enum e_validation);		// contrôle du puissance de puissance en base 10
	float; int CalculRUser(float);						// calcul la résistance brute de l'utilsateur								
														// affichage de la valeur de résistance avec suffixe -, k, M
	void calculCalSerie(void);							// calcul de la série de résistance 
	void CalculRNormalisee(void);						// calcul la valeur normalisée de R

#endif // !INFO_SERIE


