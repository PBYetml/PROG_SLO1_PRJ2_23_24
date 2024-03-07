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


//-- librairies personnelles --// 
#include "infoUser.h"
#include "infoSeries.h"



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
	if (poidPuissance < CONST_K)
	{
		displaySuffixe = ' ';
		displayValeurR = valRBrute; 
	}
	else if (poidPuissance < CONST_M)
	{
		displaySuffixe = 'k';
		displayValeurR = valRBrute / pow(10, CONST_K); 
	}
	else
	{
		displaySuffixe = 'M';
		displayValeurR = valRBrute / pow(10, CONST_M);
	}

	//-- affichage du message --// 
	printf(" est de %3.3f %cohm", displayValeurR, displaySuffixe);
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControleChoixSerie
// Entrée / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entrée par l'utilisateur est correcte
//							  renvoie un OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
	char ControleChoixSerie(int valUser)
{
	e_validation validationSerie= NOT_OK;
	
	switch (valUser)
	{
	case E6: 
		e_validation validationSerie = OK;
		break;

	case E12: 
		e_validation validationSerie = OK;
		break;

	case E24: 
		e_validation validationSerie = OK;
		break;

	default: 
		e_validation validationSerie = NOT_OK;
		break;
	}
	return (validationSerie);
}
//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControleValR
// Entrée / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entrée par l'utilisateur est correcte
//							  renvoie OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
char ControleValR(float valUser)
{
	e_validation validationResistance = NOT_OK;		

	if (valUser >= LIMITE_R_MIN && valUser <= LIMITE_R_MAX)
	{
		e_validation validationResistance = OK;		
	}
	else
	{
		e_validation validationResistance = NOT_OK;		
	
	return (validationResistance);
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControlePoidPuissanceR
// Entrée / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entrée par l'utilisateur est correcte
//							  renvoie OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
	char ControlePoidPuissanceR(int valUser)
	{
		e_validation validadationPuissanceR = NOT_OK;

		if (valUser >= LIMITE_POID_PUISSANCE_MIN && valUser <= LIMITE_POID_PUISSANCE_MAX)
		{
			e_validation validadationPuissanceR = OK;
		}
		else
		{
			e_validation validadationPuissanceR = NOT_OK;
		}

		return (validadationPuissanceR);
	}
//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRUser
// Entrée / Sortie / I/O    : valR, valP / R_ohm / - 
// Description				: calcul la valeur brute de la résistance en ohm 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
	
	int CalculeRUser(float valR, int valP)
	{
	
	}



//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculValSerie
// Entrée / Sortie / I/O    : - / - / infoR 
// Description				: calcul les différents points de la série choisie 
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//




//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRNormalisee
// Entrée / Sortie / I/O    : - / - / infoR
// Description				: calcule de la valeur normalisée par rapport à la 
//							  résistance brute   
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//


