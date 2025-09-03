#include <stdio.h>

// int main(void)
// {
//     int number;

//     printf("Entrez une note numerique : ");
//     scanf("%d", &number);
//     if (number >= 0 && number <= 59)
//         printf ("F");
//     else if (number >= 60 && number <= 69)
//         printf ("D");
//     else if (number >= 70 && number <= 79)
//         printf ("C");
//     else if (number >= 80 && number <= 89)
//         printf ("B");
//     else if (number >= 90 && number <= 100)
//         printf ("A");
//     else 
//         printf("la note est superieure à 100 ou inferieure a 0.");
// }

int main(void)
{
    int number;

    printf("Entrez une note numerique : ");
    scanf("%d", &number);
    if (number > 100 || number < 0)
        printf("la note est superieure à 100 ou inferieure a 0.");
    else
    {
    switch (number / 10)
    {
    case 10:
        printf ("A");
        break;
    case 9:
        printf ("A");
        break;
    case 8:
        printf ("B");
        break;
    case 7:
        printf ("C");
        break;
    case 6:
        printf ("D");
        break;
    default:
        printf ("F");
        break;
    }
}
}