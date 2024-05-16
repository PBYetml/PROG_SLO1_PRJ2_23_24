//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: infoUser.c
// Date de cr�ation 	: 05.03.2022
// Date de modification : xx.xx.202x
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : d�finition et prototype li� aux s�rie de r�sistance 
//
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
//-- directive pr�processeur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//-- librairires standards --// 
#include <stdio.h>		// flux d'entr�e / sortie 
#include <stdint.h>		// normalisation des types entiers 

//-- librairies personnelles --// 
#include "infoUser.h"

//----------------------------------------------------------------------------------//
// Nom de la fonction		: ViderBufferClavier
// Entr�e / Sortie / I/O    : - / - / - 
// Description				: vide le buffer (flux d'entr�e) => ici clavier 
// Date modfification		: le 05.03.2022
// Remarque					: -
//----------------------------------------------------------------------------------//
void ViderBufferClavier(void)
{
	//-- d�clarataion de variable --// 

	//-- it�ration tant qu'on lit un caract�re diff�rents de \n ou EOF, on reste 
	//   dans la boucle
	while ((getchar() != '\n') && (getchar() != EOF));
}
