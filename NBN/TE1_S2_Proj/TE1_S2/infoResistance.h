//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation résistance
// Nom du fichier 		: infoResistance.h
// Date de création 	: 07.03.2024
// Date de modification : 07.03.2024
//
// Auteur 				: NBN
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//


// prototype de fonction
int ControleChoixSerie(int valUser); //test si la valeur entrée par l'utilisateur est correcte 

int ControleValR(float valUser); //test si la valeur entrée par l'utilisateur est correcte renvoie OK, et renvoi un NOT_OK si incorrecte 

int ControlePoidPuissanceR(int valUser); // test si la valeur entrée par l'utilisateur est correcte renvoie OK, et renvoi un NOT_OK si incorrecte

float CalculRUser(float valR, int valP); //calcul la valeur brute de la résistance en ohm

int CalculValSerie(int infoR); //calcul les différents points de la série choisie 

int CalculRNormalisee(int infoR) //calcule de la valeur normalisée par rapport à la