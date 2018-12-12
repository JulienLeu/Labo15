/* Fichier : Labo15_main.c
 * Auteur  : Julien Leuenberger et Quentin Müller
 * Date    : 12.12.2018
 *
 * Description :	Afficher sur des 7 segements
 *						- 
 *						- 
 *
 * Remarque(s) :
 *
 * Modifications : Date / Auteur / Raison
 *
 * Compilateur : Visual Studio 2017
*/
#include <stdio.h>
#include <stdlib.h>

/*Prototypes de fonctions*/
int main(void)
{
	/* Variable du programme */
	int choix_menu;

	printf("\n\nProgramme permettant de tester la librairie outils_saisie");

	do
	{
		/* Interface pour choisir le bon menu */
		printf("\n\n=========== MENU ===========");
		printf("\n 1 - Ecriture des registres");
		printf("\n 2 - Ecriture d'un chiffre");
		printf("\n 3 - Ecriture d'une valeur");
		printf("\n 4 - Etat des boutons");
		printf("\n 5 - Gerer le tableau de score");
		printf("\n 0 - Quitter\n");
		choix_menu =0 ;
		//choix_menu = saisirEntier("Choix -> ");

		switch (choix_menu)
		{
			case 0: // Quitter le programme
			{
				printf("Salut");
				break;
			}
			case 1:
			{
				
				break;
			}
			case 2:
			{
				
				break;
			}
			case 3:
			{
				
				break;
			}
			case 4:
			{
				
				break;
			}
			case 5:
			{
				
				break;
			}
			default: // Valeur correspondant à aucun menu
			{
				printf("\nLa valeur saisie n'est pas valide.");
				break;
			}
		}
	} while (choix_menu != 0);
	return EXIT_SUCCESS;
}