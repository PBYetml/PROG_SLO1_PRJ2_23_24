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

//-- librairies utilis�es --//
#include <stdint.h>
#include "infoUser.h"

//-- d�claration des constantes ou de d�finition --// 
#define LIMITE_R_MIN 1.00
#define LIMITE_R_MAX 10.00
#define LIMITE_POID_PUISSANCE_MIN 0
#define LIMITE_POID_PUISSANCE_MAX 6
#define E6 = 6
#define E12 = 12 
#define E24 = 24

#define MSG_BRUTE "brute"
#define MSG_NORMALISEE "normalisee"

//-- d�claration �num�ration --// 
enum e_valSerie { E6 = 6, E12 = 12, E24 = 24 };
enum e_suffixePoidPuissance { k = 3, M = 6 };

//-- d�claration de structure --// 
typedef struct {

	int choixSerieR;
	int rangResistance;
	int poidPuissanceR;
	float* pt_tbApproximation;
	float resistanceBrute;
	float resistanceNormalisee;

}s_serieRX;

typedef enum {
	NOT_OK,
	OK
} e_validation;

//-- D�claration des fonctions (prototypes) --//
void AfficherValeurResistance(float valRBrute, uint8_t poidPuissance);
e_validation ControleChoixSerie(int valUser);
e_validation ControleValR(float valUser);
e_validation ControlePoidPuissanceR(int valUser);
e_validation CalculRUser(float valR, int valP);
void CalculValSerie(s_serieRX* pointe);
void CalculRnormalise(s_serieRX* pointe);

#endif // !INFO_SERIE


