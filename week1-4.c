
#include <stdio.h>

void calculate(double diameter, double *circumference);
int main(void)
{
    double diameter;
    double circumference;
    printf("Geef de dimater van de cirkel: ");
    if (scanf("%1F", &diameter) != 1)
    {
        printf("Ongeldige invoer. \n");
        return 1;
    }

     calculate(diameter, &circumference);
    printf("De omterk van een cirkel met diameter %.2f is %.2f\n",
          diameter, circumference);
    return 0;
}
void calculate(double diameter, double *circumference)
{
    const double PI = 3.14159265358979323846;
    *circumference = PI * diameter;
}