#include <stdio.h>
int main (void)
{
    float valeur,pi,r;

    printf("Ecrire le rayon de sphere :");
    scanf("%f", &r);
    pi = 3.14159;
    valeur = 4.0/3.0*pi*r*r*r;
    printf("le volume d'une sphere de 10 metres de rayon : %f\n", valeur);
    return 0;
}