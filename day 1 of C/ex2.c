#include <stdio.h>
int main (void)
{
    float valeur,r,pi;

    r = 10;
    pi = 3.1415;
    valeur = 4.0/3.0*pi*r*r*r;
    printf("le volume d'une sphere de 10 metres de rayon : %f\n", valeur);
    return 0;
}