#include <stdio.h>
int main(void)
{
    int number1,number2,i,total;

    printf ("Entrez une fraction : ");
    scanf("%d/%d", &number1,&number2);
    if (number1 == number2)
        total = 1;
    else if (number1 < number2)
    {
        i = number2 / 2;
        for (i = number2 / 2; i > 0; i--)
        {
            if (number1 % i == 0 && number2 % i == 0)
            {
                total = i;
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
                total = i;
                break;
            }
        }    
    }
    number1 /= total;
    number2 /= total;
    printf("Sous sa forme la plus simple : %d/%d", number1,number2);
    return 0;
}