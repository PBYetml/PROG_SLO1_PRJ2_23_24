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
typedef enum {E6 = 6, E12 = 12, E24 = 24} e_valSerie;				//enum pour la série souhaitée

typedef enum {CST_K = 3, CST_M = 6}e_suffixePoidsPuissance;			//enum pour le suffixe de la valeur


//-- déclaration de structure --// 


typedef struct {													//définition de la structure
	uint8_t choixSerieR;					//1 octet 
	uint8_t rangResistance;					//1 octet
	uint8_t poidsPuissance;					//1 octet
	float *pt_tbApproximation;				//4 octets
	float resistanceBrute;					//4 octets
	float resistanceNormalisee;				//4 octets
} s_serieRX;								//Total = 15 octets



//-- déclaration de prototype --// 
e_validation ControleChoixSerie(int valUser);				// controle de la série E6, E12, E24... 
e_validation ControleValR(float valUser);					// contrôle de la valeur unitaire de la résistance 
e_validation ControlePoidPuissanceR(int valUser);			// contrôle du puissance de puissance en base 10
float CalculRUser(float valR, int valP);					// calcul la résistance brute de l'utilsateur
															// affichage de la valeur de résistance avec suffixe -, k, M
s_serieRX CalculValSerie(s_serieRX infoR);					// calcul de la série de résistance 
s_serieRX CalculRNormalise(s_serieRX infoR);				// calcul la valeur normalisée de R

#endif // !INFO_SERIE


