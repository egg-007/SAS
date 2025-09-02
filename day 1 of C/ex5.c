#include <stdio.h>

int main (void)
{
    int x,valeur;

    printf("Entrez x: ");
    scanf("%d", &x);
    valeur = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6;
    printf ("la valeur du polynome : %d ",valeur);
    return 0;
}