#include<stdio.h>

int main(void)
{
    // definicija i deklaracija niza
    // ima 4 clana niza
    // prvi element niza ima indeks 0: niz1[0] -> 1.1
    float niz1[] = {1.1, 2.1, 3.3, 4.0};

    // prisupanje elementima van opsega nije preporucljivo!
    // printf("%f", niz1[4]);

    float temperature[5];
    // printf("%f\n", temperature[0]);

    temperature[0] = 1.234;
    // printf("%f\n", temperature[0]);

    temperature[5] = 5.555;
    printf("%f", temperature[5]);

    return 0;
}