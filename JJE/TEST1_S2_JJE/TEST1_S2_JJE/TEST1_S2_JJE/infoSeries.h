//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation résistance
// Nom du fichier 		: infoSeries.h
// Date de création 	: 04.03.2022
// Date de modification : 06.03.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : définition et prototype lié aux sérieS de résistance 
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
#define LIMITE_POIDS_PUISSANCE_MIN 0
#define LIMITE_POIDS_PUISSANCE_MAX 6

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- déclaration énumération --// 
typedef enum {E6 = 6, E12 = 12, E24 = 24} e_valSerie;
typedef enum {CST_K = 3, CST_M = 6} e_suffixePoidsPuissance;

//-- déclaration de structure --// 
typedef struct
{
	char	choixSerieR;			//Valeur de 0 à 100
	char	rangResistance;			//Valeur de 0 à 100
	char	poidsPuissanceR;		//Valeur de 0 à 10
	float	*pt_tbApproximation; 	//Récupère les valeurs d'un tableau afin de les utiliser
	float	resistanceBrute;
	float	resistanceNormalisee;
}s_serieRX;

//-- déclaration de prototype --// 
					// controle de la série E6, E12, E24...
					e_validation ControleChoixSerie(char valUser);

					// contrôle de la valeur unitaire de la résistance 
					e_validation ControleValR(float valUser);

					// contrôle du puissance de puissance en base 10
					e_validation ControlePoidsPuissanceR(char valUser);

					// calcul la résistance brute de l'utilsateur
					float CalculRUser(float valR, char valP);

					// affichage de la valeur de résistance avec suffixe -, k, M
					

					// calcul de la série de résistance 
					void CalculValSerie();

					// calcul la valeur normalisée de R
					void CalculRNormalisee();

#endif // !INFO_SERIE


