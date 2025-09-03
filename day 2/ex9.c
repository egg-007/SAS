#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    int i,total;
    char str[100];

    i = 0;
    total = 0;
    printf ("Entrez un mot : ");
    scanf("%s",str);
    while(str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = toupper(str[i]);
        i++;
    }
    i = 0;
    while (str[i] != '\0')
    {
        if (strchr("AEILNORSTU",str[i]) != NULL)
            total += 1;
        else if (strchr("DG",str[i]) != NULL)
            total += 2;
        else if (strchr("BCMP",str[i]) != NULL)
            total += 3;
        else if (strchr("FHVWY",str[i]) != NULL)
            total += 4;
        else if (strchr("K",str[i]) != NULL)
            total += 5;
        else if (strchr("JX",str[i]) != NULL)
            total += 8;
        else if (strchr("QZ",str[i]) != NULL)
            total += 10;
        i++;
    }
    printf("Valeur Scrabble : %d", total);
    return 0;
}