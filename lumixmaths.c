#include <stdio.h>
#include <stdlib.h>
#include "lumixmaths.h"
#include "menu.h"


int addition(int nombre1, int nombre2, int resultat)
{
	resultat = nombre1 + nombre2;
	printf("Le resultat est %d\n", resultat);

	return nombre1 + nombre2;
}
int division(int nombre1, int nombre2, int resultat)
{
	resultat = nombre1 / nombre2;
	printf("Le resultat est %d\n", resultat);

	return nombre1 / nombre2;
}
int modulo(int nombre1, int nombre2, int resultat)
{
	resultat = floorf(nombre1 / nombre2);
	printf("Le resultat est %d\n", resultat);

	return nombre1 + nombre2;
}
int soustraction(int nombre1, int nombre2, int resultat)
{
	resultat = nombre1 - nombre2;
	printf("Le resultat est %d\n", resultat);

	return nombre1 + nombre2;
}
int multiplication(int nombre1, int nombre2, int resultat)
{
	resultat = nombre1 * nombre2;
	printf("Le resultat est %d\n", resultat);

	return nombre1 * nombre2;
}
