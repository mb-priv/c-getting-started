#include <stdio.h>

int main() 
{
    int broj1;
    int broj2;

    printf("Unesite prvi broj: ");
    fflush(stdin);
    scanf("%d", &broj1);

    printf("Unesite drugi broj: ");
    fflush(stdin);
    scanf("%d", &broj2);

    printf("Uneti brojevi: %d i %d\n", broj1, broj2);

    printf("%d == %d: %d\n", broj1, broj2, broj1 == broj2);
    printf("%d != %d: %d\n", broj1, broj2, broj1 != broj2);
    printf("%d >  %d: %d\n", broj1, broj2, broj1 > broj2);
    printf("%d <  %d: %d\n", broj1, broj2, broj1 < broj2);
    printf("%d >= %d: %d\n", broj1, broj2, broj1 >= broj2);
    printf("%d <= %d: %d\n", broj1, broj2, broj1 <= broj2);

    return 0;
}