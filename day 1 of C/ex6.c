#include <stdio.h>

int main (void)
{
    int x,valeur;

    printf("Entrez x: ");
    scanf("%d", &x);
    valeur = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf ("la valeur du polynome : %d ",valeur);
    return 0;
}