// Ukljuciti standardnu biblioteku

// Definisati funkciju konvertuj_farenhajt_u_celzijus koja ce za
// zadati razlomljeni broj koji predstavlja stepene u Farenhajtovoj skali
// pretvoriti u stepene u Celzijusovoj skali koristeci izraz:

// celzijus_stepeni = (farenhhajt_stepeni - 32) * 5/9

// definisati main funkciju

// u main funkciji pozvati funkciju nekoliko puta sa razlicitim
// pozitivnim i negativnim vrednostima i ispisati u konzoli

#include <stdio.h>

double konvertuj_farenhajt_u_celzijus(double temperatura_farenhajt)
{
    double celzijus_stepeni = (temperatura_farenhajt - 32) * 5/9;

    return celzijus_stepeni;
}

int main(void)
{
    double rezultat1 = konvertuj_farenhajt_u_celzijus(50);
    printf("50 Farenhajta je %f Celzijusa\n", rezultat1);

    double rezultat2 = konvertuj_farenhajt_u_celzijus(133.4);
    printf("133.4 Farenhajta je %f Celzijusa\n", rezultat2);

    double rezultat3 = konvertuj_farenhajt_u_celzijus(-12.5);
    printf("-12.5 Farenhajta je %f Celzijusa\n", rezultat3);

    return 0; 
}

