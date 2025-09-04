#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int i = 0;
    char str[100];

    printf("Entrez votre message : ");
    scanf("%[^\n]s",str);
    while(str[i])
    {
        str[i] = toupper(str[i]);
        if (str[i] == 'A')
            printf("4");
        else if (str[i] =='B')
            printf("8");
        else if (str[i] =='E')
            printf("3");
        else if (str[i] =='O')
            printf("0");
        else if (str[i] =='I')
            printf("1");
        else if (str[i] =='S')
            printf("5");
        else
            printf("%c", str[i]);
        i++;
    }
    printf("!!!!!!!!!!!");
    return 0;
}