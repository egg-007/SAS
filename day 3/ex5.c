#include <stdio.h>
#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void) {
    int i, low_rate, num_years, year;
    double value[5];

    printf("Taux d'interet : ");
    scanf("%d", &low_rate);
    printf("Nombre d'annees : ");
    scanf("%d", &num_years);

    printf("\nAnnees");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%10d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d   ", year);
        for (i = 0; i < NUM_RATES; i++) {
            for (int t = 0; t <= 11; t++)
                value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%11.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}