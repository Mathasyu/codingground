#include <stdio.h>

float euro2Dollar(float eingabeWert) {
    float euro=eingabeWert;
    float dollar = euro*1.3810095;
    return dollar;
}
float dollar2Euro(float eingabeWert) {
    float dollar=eingabeWert;
    float euro = dollar/1.3810095;
    return euro;
}
void main (void)
{
        float dollar, euro;
        float eingabeWert;

        printf("EingabeWert:\n");
        scanf("%f",&eingabeWert);
        dollar = euro2Dollar(eingabeWert);
        euro = dollar2Euro(eingabeWert);
        
        printf("Eingabewert in Dollar: %.7f \n",dollar);
        printf("Eingabewert in Euro: %.7f \n",euro);
        
        getchar();
        getchar();
 
}
