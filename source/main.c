#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "lumixmaths.h"
int main(int argc, char* argv[])
{
    int nombreEntre1 = 0, nombreEntre2 = 0, resultatentre = 0;
    printf("Entrez les nombres avec lequelles vous voulez travailler : \nEntrez votre premier nombre: ");
    scanf_s("%d", &nombreEntre1);
    printf("Entrez votre second nombre: ");
    scanf_s("%d", &nombreEntre2);
    switch (menu())
    {
    case 1:
        addition(nombreEntre1, nombreEntre2, resultatentre);
        break;
    case 2:
        soustraction(nombreEntre1, nombreEntre2, resultatentre);
        break;
    case 3:
        division(nombreEntre1, nombreEntre2, resultatentre);
        break;
    case 4:
        multiplication(nombreEntre1, nombreEntre2, resultatentre);
        break;
    case 5:
        modulo(nombreEntre1, nombreEntre2, resultatentre);
        break;
    }
    return 0;
}
