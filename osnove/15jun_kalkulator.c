#include <stdio.h>

#define OPERACIJA_USPELA 1
#define OPERACIJA_NIJE_USPELA 0

// 2. mini kalkulator (unos korisnika)
// Kad se pokrene, ispisati poruku korisniku da unese prvi broj
// Zatim, kad korisnik unese prvi broj, ispisati korisniku poruku da unese znak za opereraciju
// i ispisati koje su sve operacije dostupne (+, -, /, *)
// Zatim, kad korisnik unese operaciju, potrebno je da se ispise poruka da unese
// drugi broj. 
// Ukoliko korisnik ne unese neku od podrzanih operacija, ispisati gresku.
// Ukoliko se desi da ne moze da se izracuna (npr. deljenje sa 0), ispisati gresku
// Nakon toga, potrebno je izracunati i ispisati rezultat operacije.

int main(void)
{
    double broj1, broj2, rezultat;
    char operacija;

    // cuva da li je operacija uspela ili nije (true/false)
    int da_li_je_operacija_uspela;

    printf("Molimo vas unesite prvi broj: ");
    scanf("%lf", &broj1);

    printf("Unesite operaciju: (dostupne operacije: +, -, *, /): ");
    fflush(stdin); // cisti karaktere koji su ostali od prethodnog unosa
    scanf("%c", &operacija);

    printf("Molimo vas unesite drugi broj: ");
    fflush(stdin);
    scanf("%lf", &broj2);

    // racunaje

    if (operacija == '+') {
        rezultat = broj1 + broj2;
        da_li_je_operacija_uspela = OPERACIJA_USPELA;

    } else if (operacija == '-') {
        rezultat = broj1 - broj2;
        da_li_je_operacija_uspela = OPERACIJA_USPELA;
        
    } else if (operacija == '/') {

        if (broj2 == 0) {
            printf("\nNije dozvoljeno deliti nulom!\n");
            da_li_je_operacija_uspela = OPERACIJA_NIJE_USPELA;

        } else {
            rezultat = broj1 / broj2;
            da_li_je_operacija_uspela = OPERACIJA_USPELA;
        }
        
    } else if (operacija == '*') {
        rezultat = broj1 * broj2;
        da_li_je_operacija_uspela = OPERACIJA_USPELA;

    } else if (operacija == '^') {
        // rezultat = broj1 - broj2;
        da_li_je_operacija_uspela = OPERACIJA_USPELA;
        
    } else {
        printf("\nUneli ste nepodrzanu operaciju: %c\n", operacija);
        da_li_je_operacija_uspela = OPERACIJA_NIJE_USPELA;
    }

if (operacija != '+' && operacija != '-' && operacija != '*')

    // ispis rezultata

    if (da_li_je_operacija_uspela == OPERACIJA_USPELA) {
        printf("\n%f %c %f = %f\n", broj1, operacija, broj2, rezultat);
    }

    return 0;
}