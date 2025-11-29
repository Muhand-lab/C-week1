#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double circumference_from_diameter(double d)
{
    double pi = 3.141592653589793;
    return pi * d;
}

int main(void)
{
    char buf[100];
    double diameter;
    double omtrek;

    printf("Geef de diamter van de cirkel (bv 5.2): ");

    if (fgets(buf, sizeof buf, stdin) == NULL) {
        puts("Hmm, niks ingevoerd. Ik stop even.");
        return 1;
    }

    if (sscanf(buf, "%lf", &diameter) != 1) {
        printf("Huh? kon geen nummer lezen. Probeer iets zoals 3.5\n");
        return 1;
    }

    if (diameter < 0) {
        printf("Negatieve diameter? Ok, ik gebruik de absolute waarde.\n");
        diameter = fabs(diameter);
    }

    omtrek = circumference_from_diameter(diameter);
    printf("Dus ehm... de omtrek van een cirkel met diameter %.2f is ongeveer %.2f\n",
           diameter, omtrek);

    return 0;}
