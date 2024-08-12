#include<stdio.h>

/**
 * Primer izlaska iz for petlje
 * 
 * Napisati program u kome korisnik unosi brojeve (najvise 10 elemenata)
 * Ako korisnik unese 0, tu se zaustavlja unos
 * Nakon toga, izracunati sumu unetih elemenata
 */

int main()
{
    const int MAX_BR_ELEMENATA = 10;

    int suma = 0;
    int niz[MAX_BR_ELEMENATA];

    printf("Unesite max. %d elemenata (ili unesite 0 za kraj):\n", MAX_BR_ELEMENATA);

    for (int i = 0; i < MAX_BR_ELEMENATA; i++) {
        int uneti_broj;

        // Korisnik unosi broj i smestamo ga u lokalnu/privremenu promenjivu uneti_broj
        scanf("%d", &uneti_broj);

        // proveravamo da li je korisnik uneo 0
        // ukoliko jeste, prekidamo for petlju (program izlazi iz petlje i nastavlja dalje izvrsavanje van nje)
        // dakle, prekida se izvrsavanje petlje (for), ali ne i sam program, on nastavlja svoje izvrsavanje 
        // van for petlje 
        if (uneti_broj == 0) {
            break;
        }

        // ovaj deo koda (ispod) se izvrsava samo ukoliko korisnik nije uneo 0
        niz[i] = uneti_broj;
        suma = suma + uneti_broj;
    }
    
    printf("%d\n", suma);

    return 0;
}