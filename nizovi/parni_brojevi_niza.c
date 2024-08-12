#include<stdio.h>

/**
 * Napisati program u kome korisnik unosi N brojeva 
 * Potrebno je ispisati sve brojeve koji su parni 
 */

int main() 
{
    const int MAX_BR_ELEMENATA = 5;

    int niz[MAX_BR_ELEMENATA];

    printf("Unesite %d elemenata:\n", MAX_BR_ELEMENATA);

    // ucitaj elemente od korisnika u niz
    for (int i = 0; i < MAX_BR_ELEMENATA; i++) {
        scanf("%d", &niz[i]);
    }

    printf("Parni brojevi su: \n");
    // provera parnosti i ispisivanje 
    for (int i = 0; i < MAX_BR_ELEMENATA; i++) {
        // ukoliko niz[i] nije paran broj (nije deljiv sa 2)
        // preskoci, idi na sledeci element
        if (niz[i] % 2 != 0) {
            continue;
        }

        printf("%d\n", niz[i]);
    }

    return 0;
}