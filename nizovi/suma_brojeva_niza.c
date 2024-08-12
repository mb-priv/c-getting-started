#include<stdio.h>

/*
Napisati program koji racuna sumu zadatih brojeva preko tastature.
Brojevi se unose u niz fiksne velicine.
Ispsati sumu na kraju.
 */

int main(void)
{
    const int MAX_VELICINA = 5;
    float suma = 0;

    // ovde smo deklarisali niz (nismo definisali vrednosti)
    // koji se zove brojevi
    // tipa float (elementi niza su tipa float)
    // koji je velicine MAX_VELICINA (u ovom slucaju 5 - 5 elemenata)
    float brojevi[MAX_VELICINA];

    printf("Unesite %d brojeva (jedan broj u jednom redu): \n", MAX_VELICINA);

    // i++ --> inkrement
    // i = i + 1;

    // ucitavamo elemente niza sa tastature, jedan po jedan
    for (int i = 0; i < MAX_VELICINA; i++) {
        int nas_broj_elementa = i + 1;
        printf("Unesite %d. element niza, index: [%d]: \n", nas_broj_elementa, i);
        
        scanf("%f", &brojevi[i]);

        // ** scanf **
        // funkcija za unos sa tastature
        // prima dva parametra:
        // 1. koji tip podataka unosimo (float)
        // 2. gde da smesti tu vrednost (u koju promenjivu)
    }

    // prolazimo ponovo kroz niz i ispisujemo svaki element
    for (int i = 0; i < MAX_VELICINA; i++) {
        printf("Brojevi [%d]: %f\n", i, brojevi[i]);

        // i racunamo sumu tako sto sabiramo svaki element sa prethodnim
        // u prvoj iteraciji, suma je 0 (inicijalizovana gore) i sabira se sa prvim elementom
        // u drugoj iteraciji suma je prvi element i sabira se sa drugim, i tako dalje....
        suma = suma + brojevi[i];
    }

    // izracunali smo sumu, ispisujemo ovde
    printf("Suma brojeva: %f\n", suma);

    return 0;
}