#include <stdio.h>

int main(void)
{
    int number1,number2,i;

    printf ("Entrez deux entiers : ");
    scanf("%d %d", &number1,&number2);
    if (number1 == number2)
        printf("%d",number1);
    else if (number1 < number2)
    {
        i = number2 / 2;
        for (i = number2 / 2; i > 0; i--)
        {
            if (number1 % i == 0 && number2 % i == 0)
            {
                printf("%d",i);
                break;
            }
        }    
    }
    else
    {
        i = number1 / 2;
        for (i = number1 / 2; i > 0; i--)
        {
            if (number1 % i == 0 && number2 % i == 0)
            {
                printf("%d",i);
                break;
            }
        }    
    }
    return 0;
}