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
typedef enum  { 
	E6 = 6, E12, E24
}e_valSerie;
typedef enum {
	CONST_K = 3, CONST_M = 6
}e_suffixePoidPuissance;
//-- déclaration de structeur --// 
typedef struct {
	char choixSerieR;
	char rangR;
	char  poidPuissanceR;
	float *pt_tbApproximation;
	float resistanceBrute;
	float resistanceNormalisee;


}s_serieRX;

//-- déclaration de prototype --// 
// controle de la série E6, E12, E24... 
e_validation ControleChoixSerie

(char valUser);
// contrôle de la valeur unitaire de la résistance 
e_validation ControleValR(float valUser);
// contrôle du puissance de puissance en base 10
e_validation ControlePoidPuissanceR(float valUser);
// calcul la résistance brute de l'utilsateur
float CalculRUser(float valR, char valP);
// affichage de la valeur de résistance avec suffixe -, k, M
void AfficherValeurResistance(float valRBrute, uint8_t poidPuissance);
// calcul de la série de résistance 
s_serieRX CalculValSerie(s_serieRX *infoR);
// calcul la valeur normalisée de R
s_serieRX CalculRNormalisee(s_serieRX *infoR);

#endif // !INFO_SERIE


