//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: infoResistance.h
// Date de cr�ation 	: 07.03.2024
// Date de modification : 07.03.2024
//
// Auteur 				: NBN
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//


// prototype de fonction
int ControleChoixSerie(int valUser); //test si la valeur entr�e par l'utilisateur est correcte 

int ControleValR(float valUser); //test si la valeur entr�e par l'utilisateur est correcte renvoie OK, et renvoi un NOT_OK si incorrecte 

int ControlePoidPuissanceR(int valUser); // test si la valeur entr�e par l'utilisateur est correcte renvoie OK, et renvoi un NOT_OK si incorrecte

float CalculRUser(float valR, int valP); //calcul la valeur brute de la r�sistance en ohm

int CalculValSerie(int infoR); //calcul les diff�rents points de la s�rie choisie 

int CalculRNormalisee(int infoR); //calcule de la valeur normalis�e par rapport � la