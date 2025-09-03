#include <stdio.h>

int main(void)
{
    char ISBN[18];
    int i,m;

    m = 0;
    printf("Entrez l'ISBN : ");
    scanf("%s", ISBN);
    printf ("Prefixe GS1 :");
    for (i = 0; i < 18; i++)
    {
        if (ISBN[i] != '-')
            printf("%c",ISBN[i]);
        else if (ISBN[i] == '-')
        {
            m++;
            printf ("\n");
            if (m == 1)
                printf ("Identifiant de groupe :");
            else if (m == 2)
                printf ("Code de l'editeur :");
            else if (m == 3)
                printf ("Numéro d'article :");
            else if (m == 4)
                printf ("Chiffre de controle :");
        }
        
    }
    return 0;
}