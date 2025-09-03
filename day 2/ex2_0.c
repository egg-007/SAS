#include <stdio.h>

int main(void)
{
    int number;

    printf ("Entrez un nombre a deux chiffres :");
    scanf ("%d", &number);
    printf ("Le nombre inverse est : %d%d", (number % 10), (number / 10));
    return 0;
}