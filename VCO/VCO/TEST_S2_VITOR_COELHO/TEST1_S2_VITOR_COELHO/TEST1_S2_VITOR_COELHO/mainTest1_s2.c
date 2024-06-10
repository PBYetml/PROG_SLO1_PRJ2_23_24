//-----------------------------------------------------------------------------------//
// Nom du projet 		: Approximation r�sistance
// Nom du fichier 		: main.c
// Date de cr�ation 	: 04.03.2022
// Date de modification : 06.03.2024
//
// Auteur 				: Philou (Ph. Bovey)
// Nodification			: Vitor Coelho
//
// Description          : main li� au test 1 semestre 2 PROG (voir donn�es)
//
//
// Remarques :   Code modifi� lors du test 07.03.2024       :
//----------------------------------------------------------------------------------//
//-- directive pr�processeur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//-- librairires standards --// 
#include <stdio.h>		// flux d'entr�e / sortie 
#include <stdint.h>		// normalisation des types entiers 

//-- librairies personnelles --// 
#include "infoSeries.h"
#include "infoUser.h"

//-- d�finition ou constante --// 
#define NOM_DEVELOPPEUR "xxx"
#define SEMESTRE		 2

//-- d�claration de constantes gloables --//
const char VERSION_PROJET = 1;
const unsigned short ANNEE_TEST = 2024;

//-- programme principales --// 
void main()
{
	//-- d�claration de variables --// 
	//-- enumeration --// 
	e_validation validationSerie = NOT_OK;			// NOT_OK valeur non valid�e => OK valeur valid�e
	e_validation validationResistance = NOT_OK;		// NOT_OK valeur non valid�e => OK valeur valid�e
	e_validation validadationPuissanceR = NOT_OK;	// NOT_OK valeur non valid�e => OK valeur valid�e

	//-- floattant --// 
	float choixUserValResistance; 
	float tbDecadeE6[E6] = { 0 }, tbDecadeE12[E12] = { 0 }, tbDecadeE24[E24] = { 0 }; 

	double test; 
	//-- entier --// 
	int choixUserSerie, choixPuissanceR; 

	//-- strcuture --//
	s_serieRX Resistances;  //ResistanceE12, ResistanceE24; 


	//-- message user --// 
	printf("PROJET%d SEMESTRE %d - ANNEE %d - DEVELOPPEUR : %s \n", VERSION_PROJET, SEMESTRE, ANNEE_TEST, NOM_DEVELOPPEUR);
	
	//-- it�ration faire tant que l'utilisateur de donner pas de bonne information  --// 
	do
	{
		//-- test sur le choix de la s�rie --// 
		if (validationSerie == NOT_OK)
		{
			//-- information / demande au user --// 
			printf("\nVeuillez choisir une serie en inscrivant le nombre de celle ci (ex: E6 => 6) : ");

			//-- r�cup�ration de info utilisateur --// 
			scanf("%d", &choixUserSerie);

			//-- appel de fonction => vider le buffer clavier --//
			ViderBufferClavier(); 

			//-- appel de fonction => test si s�rie valide --//
			validationSerie = ControleChoixSerie(choixUserSerie);
		}

		//-- test sur le choix de la valeur de r�sistance --// 
		if (validationResistance == NOT_OK)
		{
			//-- information / demande � l'utilisateur 
			printf("\nVeuillez inserer une valeur unitaire de resistance entre 1.00 a 9.99 (ex : 3.14) : "); 

			//-- r�cup�ration de info utilisateur --// 
			scanf("%f", &choixUserValResistance);

			//-- appel de fonction => vider le buffer clavier --//
			ViderBufferClavier();

			//-- appel de fonction => test si valeur r�sistance unitaire est dans les limites --// 
			validationResistance = ControleValR(choixUserValResistance);
		}

		//-- test sur le choix de la puissance de 10 que l'utilsateur --// 
		if (validadationPuissanceR == NOT_OK)
		{
			//-- information / demande � l'utilisateur 
			printf("\nVeuillez inserer une valeur de puissance de 10 entre 0 et 6 : 10 ^ ");

			//-- r�cup�ration de info utilisateur --// 
			scanf("%d", &choixPuissanceR);

			//-- appel de fonction => vider le buffer clavier --//
			ViderBufferClavier();

			//-- appel de fonction => test si valeur r�sistance unitaire est dans les limites --// 
			validadationPuissanceR = ControlePoidPuissanceR(choixPuissanceR);
		}

	} while ((validationSerie == NOT_OK) || (validationResistance == NOT_OK) || (validadationPuissanceR == NOT_OK));

	//-- appel de fonction => calculer la r�sistance d�finit par l'utilisateur
	Resistances.resistanceBrute = CalculRUser(choixUserValResistance, choixPuissanceR);

	//-- appel de fonction => afficher la valeur de la r�sistance avec le suffixe de puissance (-, k, M)
	printf("\nla valeur brute"); 
	AfficherValeurResistance(Resistances.resistanceBrute, choixPuissanceR);

	//-- s�lection de la structure � utiliser en fonction du choix de l'utilisateur --// 
	switch (choixUserSerie)
	{
		case E6: 
			//-- MAJ de la structure Resistance --// 
			Resistances.choixSerieR = E6; 
			Resistances.pt_tbApproximation = &tbDecadeE6[0]; 
			break; 

		case E12: 
			//-- MAJ de la structure Resistance --// 
			Resistances.choixSerieR = E12;
			Resistances.pt_tbApproximation = &tbDecadeE12[0];
			break; 

		case E24: 
			//-- MAJ de la structure Resistance --// 
			Resistances.choixSerieR = E24;
			Resistances.pt_tbApproximation = &tbDecadeE24[0];
			break; 

		default: 
			printf("!! Aucune structure selectionnee !!"); 
			break; 
	}
	//-- MAJ de la structure avec la notion de puissance de 10^x --// 
	Resistances.poidPuissanceR = choixPuissanceR; 

	//-- calcul des points de s�rie --//
	CalculValSerie(&Resistances); 

	//-- calcul de la valeur normalis�e --// 
	CalculRNormalisee(&Resistances); 
	
	//-- appel de fonction => afficher la valeur de la r�sistance avec le suffixe de puissance (-, k, M)
	printf("\nla valeur normalisee");
	AfficherValeurResistance(Resistances.resistanceNormalisee, Resistances.poidPuissanceR);
}
