#include<stdio.h>

/**
 * MODUO (%) OPERACIJA
 * 
 * Napisati program u kome korisnik unosi N brojeva 
 * Potrebno je ispisati sve brojeve koji su parni 
 * 
 * Formula: broj je paran ako je deljiv sa 2, odnosno ukoliko je ostatak pri deljenju 0
 * Npr. 5:
 * 5 / 2 = 2.5 
 * Ostatak pri deljenju: 0.5 (nije 0, broj je paran)
 * 
 * Npr. 4
 * 4 / 2 = 2
 * Ostatak pri deljenju: 0
 * 
 * Formula: 5 % 2 
 * 
 * % - operacija moduo
 */

int main ()
{
    int broj1 = 4;
    float rezultat = broj1 % 2;

    if (rezultat == 0) {
        printf("Broj %d je paran", broj1);
    } else {
        printf("Broj %d nije paran", broj1);
    }
    
    return 0;
}