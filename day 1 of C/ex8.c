#include <stdio.h>

int main(void)
{
    float montant,taux,paiement,total,Solde;

    printf("Entrez le montant du pret :");
    scanf("%f", &montant);
    printf("Entrez le taux d'interet :");
    scanf("%f", &taux);
    printf("Entrez le paiement mensuel :");
    scanf("%f", &paiement);
    taux = taux / 12;
    total = (taux * montant)/100;
    Solde = montant + total - paiement;
    printf("Solde restant apres le premier paiement : %.2f\n", Solde);
    montant = Solde;
    total = (taux * montant)/100;
    Solde = montant + total - paiement;
    printf("Solde restant apres le deuxieme paiement : %.2f\n", Solde);
    montant = Solde;
    total = (taux * montant)/100;
    Solde = montant + total - paiement;
    printf("Solde restant apres le troisieme paiement : %.2f\n", Solde);
    return 0;
}