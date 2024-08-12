#include<stdio.h>

int main()
{
    int niz[] = {1, 2, 3, 4, 5, 6};
    int suma = 0;
    int proizvod = 1;

    for (int i = 0; i < 6; i++) {
        suma = suma + niz[i];
        proizvod = proizvod * niz[i];
    }

    // 1) i = 0; suma = 0;
    // niz[0] -> 1
    // suma = 0 + 1 
    // suma = 1

    // 2) i = 1; suma = 1;
    // niz[1] -> 2
    // suma = 1 + 2
    // suma = 3

    // 3) i = 2; suma = 3;
    // niz[2] -> 3 
    // ... 

    printf("Suma: %d\n", suma);
    printf("Proizvod: %d\n", proizvod);

    return 0;
}