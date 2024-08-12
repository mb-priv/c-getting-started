#include<stdio.h>

int main() 
{

    /**
     * Napisati program koji racuna faktorijel broja
     *  5! => 5 * 4 * 3 * 2 * 1
     */

    int rezultat = 1;

    int broj = 5;

    for (int i = broj; i > 1; i--) {
        rezultat = rezultat * i;
    }

    printf("%d! => %d\n", broj, rezultat);

    return 0;

    // za domaci: napisati da korisnik unese broj za koji da se racuna foktorijel
}