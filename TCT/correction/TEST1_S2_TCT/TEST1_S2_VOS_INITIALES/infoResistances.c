//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: infoResistance.c
// Date de cr�ation 	: 04.03.2022
// Date de modification : 07.03.2022
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : main li� au test 1 semestre 2 PROG (voir donn�es)
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
//-- directive pr�processeur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//-- librairires standards --// 
#include <stdint.h>		// normalisation des types entiers
#include <stdio.h>		// flux d'entr�e/sortie 
#include <math.h>		//pour les calcules

//-- librairies personnelles --// 
#include "infoSeries.h"
#include "infoUser.h"


//----------------------------------------------------------------------------------//
// Nom de la fonction		: AfficherValeurResistance
// Entr�e / Sortie / I/O    : - / - / - 
// Description				: calcul la valeur brute de la r�sistance en ohm 
// Date modfification		: le 06.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
void AfficherValeurResistance(float valRBrute, uint8_t poidPuissance)
{
	//-- d�claration de variable --//
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
// Entr�e / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entr�e par l'utilisateur est correcte
//							  renvoie un OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
e_validation ControleChoixSerie(int valUser)
{

	if (valUser == E6 | valUser == E12 | valUser == E24)
	{
		return OK;
	}
	else
	{
		printf("la s�rie n'est pas valide.\n");
		return NOT_OK;
	}

}


//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControleValR
// Entr�e / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entr�e par l'utilisateur est correcte
//							  renvoie OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
e_validation ControleValR(float valUser)
{

	if (valUser >= LIMITE_R_MIN & valUser <= LIMITE_R_MAX)
	{
		return OK;
	}
	else
	{
		printf("la valeur n'est pas correct.\n");
		return NOT_OK;
	}

}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControlePoidPuissanceR
// Entr�e / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entr�e par l'utilisateur est correcte
//							  renvoie OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
e_validation ControlePoidPuissanceR(int valUser)
{

	if (valUser >= LIMITE_POID_PUISSANCE_MIN & valUser <= LIMITE_POID_PUISSANCE_MIN)
	{
		return OK;
	}
	else
	{
		printf("la valeur n'est pas correct.\n");
		return NOT_OK;
	}

}


//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRUser
// Entr�e / Sortie / I/O    : valR, valP / R_ohm / - 
// Description				: calcul la valeur brute de la r�sistance en ohm 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
float CalculRUser(float valR,int valP)
{

	float valCalculee;

	valCalculee = valR * (10 ^ valP);

	return valCalculee;
}






//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculValSerie
// Entr�e / Sortie / I/O    : - / - / infoR 
// Description				: calcul les diff�rents points de la s�rie choisie 
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
void calculCalSerie(s_serieRX *infoR)
{
	infoR->pt_tbApproximation = (pow(10, ((1 / infoR->choixSerieR) * (infoR->pt_tbApproximation - 1))));
	
}



//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRNormalisee
// Entr�e / Sortie / I/O    : - / - / infoR
// Description				: calcule de la valeur normalis�e par rapport � la 
//							  r�sistance brute   
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
void CalculRNormalisee(s_serieRX *infoR)
{
	int rang = 0;
	rang = log10(pow(infoR->choixSerieR, infoR->choixSerieR));
}

