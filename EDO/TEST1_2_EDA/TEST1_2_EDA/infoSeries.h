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

#include "infoUser.h";
//-- d�claration des constantes ou de d�finition --// 
#define LIMITE_R_MIN 1.00
#define LIMITE_R_MAX 10.00
#define LIMITE_POID_PUISSANCE_MIN 0
#define LIMITE_POID_PUISSANCE_MAX 6

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- d�claration �num�ration --// 
typedef enum //enum pour serie resistance
{
	E6 = 6, E12 = 12, E24 = 24
}e_valSerie;

typedef enum //enum pour puissance
{
	CST_K = 3, CST_M = 6
}e_suffixePoidPuissance;

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

//-- d�claration de prototype --// 
e_validation ControleChoixSerie(int choixUserSerie);					// controle de la s�rie E6, E12, E24... 
e_validation ControleValR(float choixUserValResistance);				// contr�le de la valeur unitaire de la r�sistance 
e_validation ControlePoidPuissanceR(int choixPuissanceR);				// contr�le du puissance de puissance en base 10
float CalculRUser(float choixUserValResistance, int choixPuissanceR);	// calcul la r�sistance brute de l'utilsateur
void CalculValSerie(s_serieRX *infoR);													// calcul de la s�rie de r�sistance										
void CalculRNormalisee(s_serieRX *infoR);												// calcul la valeur normalis�e de R
void AfficherValeurResistance(float valRBrute, uint8_t poidPuissance);	// affichage de la valeur de r�sistance avec suffixe -, k, M						
#endif // !INFO_SERIE


