#include <stdio.h>
#include <stdbool.h>

int main()
{
    int broj1;
    int broj2;
    int rezultat = 16;

    printf("Broj 1: ");
    scanf("%d", &broj1);

    printf("Broj 2: ");
    scanf("%d", &broj2);

    for (int i = 1; i <= broj2; i++)
    {
        rezultat = broj1 * rezultat;
    }

    printf("%d ^ %d = %d", broj1, broj2, rezultat);

    return 0;
}