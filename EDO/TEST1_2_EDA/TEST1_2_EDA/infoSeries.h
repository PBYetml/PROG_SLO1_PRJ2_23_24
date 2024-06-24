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

#include "infoUser.h";
//-- déclaration des constantes ou de définition --// 
#define LIMITE_R_MIN 1.00
#define LIMITE_R_MAX 10.00
#define LIMITE_POID_PUISSANCE_MIN 0
#define LIMITE_POID_PUISSANCE_MAX 6

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- déclaration énumération --// 
typedef enum //enum pour serie resistance
{
	E6 = 6, E12 = 12, E24 = 24
}e_valSerie;

typedef enum //enum pour puissance
{
	CST_K = 3, CST_M = 6
}e_suffixePoidPuissance;

//-- déclaration de structeur --// 
typedef struct
{
	char choixSerieR;
	char rangResistance;
	char poidPuissanceR;
	float *pt_tbApproximation;
	float resistanceBrute;
	float resistanceNormalisee;
}s_serieRX;

//-- déclaration de prototype --// 
e_validation ControleChoixSerie(int choixUserSerie);					// controle de la série E6, E12, E24... 
e_validation ControleValR(float choixUserValResistance);				// contrôle de la valeur unitaire de la résistance 
e_validation ControlePoidPuissanceR(int choixPuissanceR);				// contrôle du puissance de puissance en base 10
float CalculRUser(float choixUserValResistance, int choixPuissanceR);	// calcul la résistance brute de l'utilsateur
void CalculValSerie(s_serieRX *infoR);													// calcul de la série de résistance										
void CalculRNormalisee(s_serieRX *infoR);												// calcul la valeur normalisée de R
void AfficherValeurResistance(float valRBrute, uint8_t poidPuissance);	// affichage de la valeur de résistance avec suffixe -, k, M						
#endif // !INFO_SERIE


