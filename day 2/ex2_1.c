#include <stdio.h>

int main(void)
{
    int heure, minutes;
    char time[6];

    printf ("Entrez une heure (24h) : ");
    scanf ("%s", time);
    if (time[2] == ':')
    {
        heure = (time[0] - 48) * 10; 
        heure += (time[1] - 48);
        minutes = (time[3] - 48) * 10; 
        minutes += (time[4] - 48);
    }
    else{
        heure = time[0] - 48;
        minutes = (time[2] - 48) * 10; 
        minutes += (time[3] - 48);
    }
    heure = (heure * 60) + minutes;
    if (heure < 531)
        printf("L'heure de depart la plus proche est 8:00 a.m., arrivant a 10:16 a.m.");
    else if (heure < 631)
        printf("L'heure de depart la plus proche est 9:43 a.m., arrivant a 11:52 a.m.");
    else if (heure < 723)
        printf("L'heure de depart la plus proche est 11:19 a.m., arrivant a 1:31 p.m.");
    else if (heure < 803)
        printf("L'heure de depart la plus proche est 12:47 p.m., arrivant a 3:00 p.m.");
    else if (heure < 892)
        printf("L'heure de depart la plus proche est 2:00 p.m., arrivant a 4:08 p.m.");
    else if (heure < 1042)
        printf("L'heure de depart la plus proche est 3:45 p.m., arrivant a 5:55 p.m.");
    else if (heure < 1222)
        printf("L'heure de depart la plus proche est 7:00 p.m., arrivant a 9:20 p.m.");
    else
        printf("L'heure de depart la plus proche est 9:45 p.m., arrivant a 11:58 p.m.");
    
    return 0;
}