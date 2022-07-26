#include <stdlib.h>
#include <stdio.h>
#include "menu.h"

int menu()
{
    int choix = 0;

    while (choix < 1 || choix > 5)
    {
        printf("Menu :\n");
        printf("1 : addition \n");
        printf("2 : soustraction\n");
        printf("3 : division\n");
        printf("4 : multiplication\n");
        printf("5 : modulo\n");
        printf("Votre choix ? ");
        scanf_s("%d", &choix);
    }

    return choix;
}
