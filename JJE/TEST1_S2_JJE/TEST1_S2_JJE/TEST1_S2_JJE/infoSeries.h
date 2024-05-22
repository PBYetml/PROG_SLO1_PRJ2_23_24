//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: infoSeries.h
// Date de cr�ation 	: 04.03.2022
// Date de modification : 06.03.2024
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : d�finition et prototype li� aux s�rieS de r�sistance 
//
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
#ifndef INFO_SERIE
#define INFO_SERIE 

//-- librairies utilis�es --//
#include <stdint.h>
#include "infoUser.h"

//-- d�claration des constantes ou de d�finition --// 
#define LIMITE_R_MIN 1.00
#define LIMITE_R_MAX 10.00
#define LIMITE_POIDS_PUISSANCE_MIN 0
#define LIMITE_POIDS_PUISSANCE_MAX 6

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- d�claration �num�ration --// 
typedef enum {E6 = 6, E12 = 12, E24 = 24} e_valSerie;
typedef enum {CST_K = 3, CST_M = 6} e_suffixePoidsPuissance;

//-- d�claration de structure --// 
typedef struct
{
	char	choixSerieR;			//Valeur de 0 � 100
	char	rangResistance;			//Valeur de 0 � 100
	char	poidsPuissanceR;		//Valeur de 0 � 10
	float	*pt_tbApproximation; 	//R�cup�re les valeurs d'un tableau afin de les utiliser
	float	resistanceBrute;
	float	resistanceNormalisee;
}s_serieRX;

//-- d�claration de prototype --// 
					// controle de la s�rie E6, E12, E24...
					e_validation ControleChoixSerie(char valUser);

					// contr�le de la valeur unitaire de la r�sistance 
					e_validation ControleValR(float valUser);

					// contr�le du puissance de puissance en base 10
					e_validation ControlePoidsPuissanceR(char valUser);

					// calcul la r�sistance brute de l'utilsateur
					float CalculRUser(float valR, char valP);

					// affichage de la valeur de r�sistance avec suffixe -, k, M
					

					// calcul de la s�rie de r�sistance 
					void CalculValSerie();

					// calcul la valeur normalis�e de R
					void CalculRNormalisee();

#endif // !INFO_SERIE


