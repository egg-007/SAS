#include <stdio.h>
#include <stdbool.h>

int main(){

    bool digit_seen[10] = {false};
    char print_digit[11];
    int digit,i;
    long n;

    i = 0;
    printf("Entrez un nombre: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            print_digit[i] = digit + 48;
            i++;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
        print_digit[i] = '\0';
    if(print_digit[0] != '\0')
        printf("Chiffre(s) repete(s) : %s", print_digit);
    else
        printf("Aucun chiffre repete.\n");

    return 0;
}