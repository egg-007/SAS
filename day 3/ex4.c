#include <stdio.h>
#define N 10

int main(void)
{
    int a[N], i;

    printf("Entrez %d nombres : ",  N);
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        scanf("%d", &a[i]);

    printf("Dans l'order inverse :");
    for (i = sizeof(a) / sizeof(a[0]); i >= 0; i--)
        scanf(" %d", &a[i]);
    printf("\n");
    return 0;
}