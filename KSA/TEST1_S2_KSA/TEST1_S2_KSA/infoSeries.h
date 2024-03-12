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
enum e_valSerie {E6 = 6, E12 = 12, E24 = 24};
enum e_suffixePoidPuissance {CST_K = 3, CST_M = 6};

//-- déclaration de structeur --// 
struct s_SerieRX {
	char choixSerieR;			// 1 octet
	char rangResistance;		// 1 octet
	char poidPuissanceR;		// 1 octet
	float pt_tbApproximation;	// 4 octets
	float resistanceBrute;		// 4 octets
	float ResistanceNormalisee;	// 4 octets
};								// Total : 15 octets

// Pointeur structure
struct s_SerieRX SerieRX;
struct s_SerieRX *ptrSerieRX = &SerieRX;

//-- déclaration de prototype --// 
					// controle de la série E6, E12, E24... 
					int ControleChoixSerie(int valUser);

					// contrôle de la valeur unitaire de la résistance 
					float ControleValR(float valUser);

					// contrôle du puissance de puissance en base 10
					int ControlePoidPuissance(int valUser);

					// calcul la résistance brute de l'utilsateur
					float CalculRUser(float valR, int valP);

					// affichage de la valeur de résistance avec suffixe -, k, M
					void CalculValSerie(struct s_SerieRX infoR);

					// calcul de la série de résistance 
					void CalculRNormalisee(struct s_SerieRX infoR);

					// calcul la valeur normalisée de R

#endif // !INFO_SERIE


