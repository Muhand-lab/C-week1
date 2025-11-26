// week1-3.c
#include <stdio.h>
#include "week1-2.h"

int main(void)
{
    int keuze;

    while (1)
    {
        printf("Geef een geheel getal (negatief om te stoppen): ");
        if (scanf("%d", &keuze) != 1)
        {
            printf("Ongeldige invoer, programma stopt.\n");
            break;
        }

        if (keuze < 0)
        {
            printf("Je voerde %d in -> programma stopt.\n", keuze);
            break;
        }
        else if (keuze == 1)
        {
            printf("Je voerde %d in -> actie: print sterren en streepjes.\n", keuze);
            print_function('*');
            printf(" ");
            print_function('-');
            printf("\n");
        }
        else if (keuze == 2)
        {
            printf("Je voerde %d in -> actie: kwadraat berekenen.\n", keuze);
            printf("%d^2 = %d\n", keuze, keuze * keuze);
        }
        else
        {
            printf("Je voerde %d in -> geen speciale actie, alleen weergeven.\n", keuze);
        }

        printf("\n");
    }

    return 0;
}
