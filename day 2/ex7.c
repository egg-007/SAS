#include <stdio.h>

int main(void)
{
    int t,number,i;
    
    t = 0;
    printf("number : ");
    scanf("%d",&number);
    for (i = 2; t <= number; i++)
    {
        t = i * i;
        if (t % 2 == 0)
            printf("%d\n",t);
    }
    return 0;
}