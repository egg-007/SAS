#include <stdio.h>
#include <stdbool.h>

int main(){

    // bool digit_seen[10] = {false};
    char print_digit[] = "0000000000"; 
    long digit;
    long n;

    printf("Entrez un nombre: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
            print_digit[digit] = print_digit[digit] + 1;
        n /= 10;
    }
    printf("Chiffre :    0 1 2 3 4 5 6 7 8 9 \nOccurrences :");
    for (int i = 0; print_digit[i] != '\0'; i++)
        printf("%c ",print_digit[i]);

    return 0;
}