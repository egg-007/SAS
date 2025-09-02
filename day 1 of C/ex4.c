#include <stdio.h>

int main(void)
{
    float montant,valeur;

    printf ("Entrez un montant :");
    scanf("%f", &montant);
    valeur = (montant * 5) / 100;
    valeur += montant;
    printf ("Avec taxe ajoutee : $%.2f", valeur);
    return 0;
}