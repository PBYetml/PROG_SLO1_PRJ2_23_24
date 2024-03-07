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
#include <math.h>		// librairie math pour les deux derniers fonctions

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
// Entrée / Sortie / I/O    : valUser / flagOK / - 
// Description				: test si la valeur entrée par l'utilisateur est correcte
//							  renvoie un OK, et renvoi un NOT_OK si incorrecte 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
e_validation ControleChoixSerie(int valUser)
{
	switch (valUser)					// case des série sélectionné
	{
	case E6: OK;
		break;

	case E12: OK;
		break;

	case E24: OK;
		break;

	default: NOT_OK;

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
	if (valUser >= 1)					//test si plus grand que 1
	{
		if (valUser <= 10)				// test si plus petit ou egale a 10
		{
			e_validation OK ;
		}
		else
		{
			e_validation NOT_OK;
		}
	}
	else
	{
		e_validation NOT_OK;
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
e_validation ControlePoidPuissanceR(int valUser)
{
	if (valUser >= 0)							//test si plus grand ou égal à 0
	{
		if (valUser <= 6)						// test si plus petit ou egale a 6
		{
			e_validation OK;			
		}
		else
		{
			e_validation NOT_OK;
		}
	}
	else
	{
		e_validation NOT_OK;
	}
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRUser
// Entrée / Sortie / I/O    : valR, valP / R_ohm / - 
// Description				: calcul la valeur brute de la résistance en ohm 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
float CalculRUser(float valR, int valP)
{
	float resultat;

	resultat = valR + valP;						//pas juste mais a revoir si j'ai le temps
}


//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculValSerie
// Entrée / Sortie / I/O    : - / - / infoR 
// Description				: calcul les différents points de la série choisie 
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
s_serieRX CalculValSerie(s_serieRX infoR)
{
												//pas eu le temps
}

//----------------------------------------------------------------------------------//
// Nom de la fonction		: CalculRNormalisee
// Entrée / Sortie / I/O    : - / - / infoR
// Description				: calcule de la valeur normalisée par rapport à la 
//							  résistance brute   
// Date modfification		: le 07.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
s_serieRX CalculRNormalise(s_serieRX infoR)
{
											//pas eu le temps
}

