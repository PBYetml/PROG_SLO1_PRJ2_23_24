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
e_validation ControleChoixSerie(char valUser)
{
	//test appel fct 
	if (1)
	{
		return OK;
	}
	else
	{
		printf("la série n'est pas valide");
		return NOT_OK;
	}



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
	if ((valUser > LIMITE_R_MIN) && (valUser < LIMITE_R_MAX))
	{
		return OK;
	}
	else
	{
		printf("la valeur n'est pas correcte");
		return NOT_OK;
	}



}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ControlePoidPuissanceR
// Entrée / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entrée par l'utilisateur est correcte
//							  renvoie OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
e_validation ControlePoidPuissanceR(float valUser)
{
	if ((valUser > LIMITE_POID_PUISSANCE_MIN) && (valUser < LIMITE_POID_PUISSANCE_MAX))
	{
		return OK;
	}
	else
	{
		printf("la série n'est pas valide");
		return NOT_OK;
	}



}


//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRUser
// Entrée / Sortie / I/O    : valR, valP / R_ohm / - 
// Description				: calcul la valeur brute de la résistance en ohm 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
float CalculRUser(float valR,char valP)
{

	return (valR * pow(10, valP));

}




//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculValSerie
// Entrée / Sortie / I/O    : - / - / infoR 
// Description				: calcul les différents points de la série choisie 
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
s_serieRX CalculValSerie(s_serieRX *infoR)
{
	

	for (char i = 0; i < infoR->resistanceNormalisee; i++)
	{
		infoR->resistanceNormalisee = pow(10, (1 / infoR->resistanceNormalisee) * i - 1);

	}


}



//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRNormalisee
// Entrée / Sortie / I/O    : - / - / infoR
// Description				: calcule de la valeur normalisée par rapport à la 
//							  résistance brute   
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
s_serieRX CalculRNormalisee(s_serieRX *infoR)
{
	for (char i = 0; i < 10; i++)
	{



	}


}

