/* Fichier : Labo07.c
 * Auteur  : Julien Leuenberger
 * Date    : 30.10.2018
 *
 * Description :	Le programme permet de calculer un interet,
 *					convertir des euros en frs et vice-versa.
 *					Un petit menu facilite la navigation
 * Remarque(s) :
 *
 * Modifications : Date / Auteur / Raison
 *
 * Compilateur : Visual Studio 2017
*/
#include <stdio.h>
#include <stdlib.h>
#include "simulateurScore.h"

/*Prototypes de fonctions*/
int main(void)
{
	unsigned short registre1 = 0xF000;
	unsigned char value1 = 0xFF;
	write_register(registre1, value1);
	system("PAUSE");
	return EXIT_SUCCESS;

}