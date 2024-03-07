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
enum e_valSerie {E6,E12,E24};
enum e_suffixePoidPuisssance {CST_K, CST_M};

	//-- déclaration de structeur --// 
	struct s_serieRX
    {
		int choixSerieR[101];
		int rangResistance[101];
		int poidPuissanceR[11];
		float pt_tbApproximation;
		float ResistanceBrute;
		float ResistanceNomalisee; 
    };

//-- déclaration de prototype --// 
void ControlChoixSerie(float valUser, int E_Validation);	  // controle de la série E6, E12, E24... 
void ControleValR(float valUser, int E_Validation);  	      // contrôle de la valeur unitaire de la résistance 
void ControlePoidPuissanceR(int valUser, int E_Validation);	  // contrôle du puissance de puissance en base 10
void CalculRUser(float valR );								  // calcul la résistance brute de l'utilsateur
void CalculValSerie();										  // affichage de la valeur de résistance avec suffixe -, k, M
void CalculRNormalisee();				                      // calcul de la série de résistance 

#endif // !INFO_SERIE


