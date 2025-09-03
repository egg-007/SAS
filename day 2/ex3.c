#include <stdio.h>

int main(void)
{
    int month1,day1,year1;
    int month2,day2,year2;

    printf("Entrez la premiere date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &month1,&day1,&year1);
    printf("Entrez la deuxieme date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &month2,&day2,&year2);
    if (year1 != year2 || month1 != month2 || day1 != day2)
    {
        if (year1 < year2 || (month1 < month2 && year1 == year2) || (day1 < day2 && month1 == month2 && year1 == year2))
            printf ("%d/%d/%d est plus tot que %d/%d/%d", month1,day1,year1,month2,day2,year2);
        else
            printf ("%d/%d/%d est plus tot que %d/%d/%d", month2,day2,year2,month1,day1,year1);
    }
    else
        printf("its the same date");
    return 0;
}