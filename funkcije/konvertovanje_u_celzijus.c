

// 1. unos korisnika za racunanje temperature


#include <stdio.h>

double konvertuj_farenhajt_u_celzijus(double temperatura_farenhajt)
{
    double celzijus_stepeni = (temperatura_farenhajt - 32) * 5/9;

    return celzijus_stepeni;
}

void main(void)
{
    double temperatura_unos;

    printf("Unesite temperaturu: ");
    scanf("%lf", &temperatura_unos);

    printf("Uneta temperatura je: %f\n", temperatura_unos);

    double rezultat1 = konvertuj_farenhajt_u_celzijus(temperatura_unos);
    printf("%f Farenhajta je %f Celzijusa\n", temperatura_unos, rezultat1);
}

