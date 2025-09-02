#include <stdio.h>
int main(void)
{
    int montant,Billets;

    Billets = 0;
    printf ("Entrez un montant en dollars : ");
    scanf("%d",&montant);

    Billets = montant / 20;
    printf ("Billets de 20$ : %d\n", Billets);
    montant = montant % 20;
    Billets = montant / 10;
    printf ("Billets de 10$ : %d\n", Billets);
    montant = montant % 10;
    Billets = montant / 5;
    printf ("Billets de 5$ : %d\n", Billets);
    montant = montant % 5;
    Billets = montant / 1;
    printf ("Billets de 1$ : %d\n", Billets);
    return 0;
}