//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation résistance
// Nom du fichier 		: infoResistance.c
// Date de création 	: 04.03.2022
// Date de modification : 07.03.2022
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : main lié au test 1 semestre 2 PROG (voir données)
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
//-- directive préprocesseur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//-- librairires standards --// 
#include <stdint.h>		// normalisation des types entiers
#include <stdio.h>		// flux d'entrée/sortie 
#include <math.h>

//-- librairies personnelles --// 
#include "infoSeries.h"
#include "infoUser.h"

//----------------------------------------------------------------------------------//
// Nom de la fonction		: AfficherValeurResistance
// Entrée / Sortie / I/O    : - / - / - 
// Description				: calcul la valeur brute de la résistance en ohm 
// Date modfification		: le 06.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
void AfficherValeurResistance(float valRBrute, uint8_t poidPuissance)
{
	//-- déclaration de variable --//
	char displaySuffixe = 0; 
	float displayValeurR; 
	
	//-- test en fct du poid de puissance --//
	if (poidPuissance < CST_K)
	{
		displaySuffixe = ' ';
		displayValeurR = valRBrute; 
	}
	else if (poidPuissance < CST_M)
	{
		displaySuffixe = 'k';
		displayValeurR = valRBrute / pow(10, CST_K); 
	}
	else
	{
		displaySuffixe = 'M';
		displayValeurR = valRBrute / pow(10, CST_M);
	}

	//-- affichage du message --// 
	printf(" est de %3.3f %cohm", displayValeurR, displaySuffixe);
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControleChoixSerie
// Entrée / Sortie / I/O    : valUser / flagOK (c'est pas du tout ecrit ça sur le test) / - 
// Description				: test si la valeur entrée par l'utilisateur est correcte
//							  renvoie un OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
e_validation ControleChoixSerie(char valUser)
{
	char six = 6;
	char douze = 12;
	char vingtquatre = 24;

	if (valUser = six)
	{
		e_validation choixSerieR = OK;
	}
	if (valUser = douze)
	{
		e_validation choixSerieR = OK;
	}
	if (valUser = vingtquatre)
	{
		e_validation choixSerieR = OK;
	}
	else
	{
		e_validation choixSerieR = NOT_OK;
	}
	return;
}


//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControleValR
// Entrée / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entrée par l'utilisateur est correcte
//							  renvoie OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
e_validation ControleValR(float valUser)
{
	char dix = 10;
	char zero = 0;
	char rangResistance = 0;

	if ((valUser <= dix) && (valUser >= zero))
	{
		e_validation rangResistance = OK;
	}
	else
	{
		printf("La valeur utilisée n'est pas correcte \n");
		e_validation rangResistance = NOT_OK;
	}
	return;
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControlePoidPuissanceR
// Entrée / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entrée par l'utilisateur est correcte
//							  renvoie OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
e_validation ControlePoidsPuissanceR(char valUser)
{
	if ((valUser <= LIMITE_POIDS_PUISSANCE_MAX) && (valUser >= LIMITE_POIDS_PUISSANCE_MIN))
	{
		e_validation poidsPuissanceR = OK;
	}
	else
	{
		printf("La valeur utilisée n'est pas correcte \n");
		e_validation poidsPuissanceR = NOT_OK;
	}
	return;
}


//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRUser
// Entrée / Sortie / I/O    : valR, valP / R_ohm / - 
// Description				: calcul la valeur brute de la résistance en ohm 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
float CalculRUser(float valR, char valP)
{
	char dix = 10;

	return valR * pow(dix, valP);
}


//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculValSerie
// Entrée / Sortie / I/O    : - / - / infoR 
// Description				: calcul les différents points de la série choisie 
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
void CalculValSerie()
{

}



//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRNormalisee
// Entrée / Sortie / I/O    : - / - / infoR
// Description				: calcule de la valeur normalisée par rapport à la 
//							  résistance brute   
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
void CalculRNormalisee()
{

}

