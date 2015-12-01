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
int printTable(float anfangsWert, float endWert, float schrittweite, int umrechnungsTyp) {
    float dollar = 0.00;
    float euro = anfangsWert;
    float end = endWert;
    if(umrechnungsTyp == 1) {
        printf("    Euro | Dollar\n");
        printf(" --------+---------\n");
        
        while(euro <= end) {
        	printf("%8.2f",euro);
        	printf(" |");
        	dollar = euro2Dollar(euro);
        	printf("%8.2f",dollar);                
            printf("\n");
            euro = euro + schrittweite;
        }
    } else if (umrechnungsTyp == 2) {
        dollar = anfangsWert;
        printf("    Dollar | Euro\n");
        printf(" --------+---------\n");
        while(dollar <= end) {
        	printf("%8.2f",dollar);
        	printf(" |");
        	euro = dollar2Euro(dollar);
        	printf("%8.2f",euro);                
            printf("\n");
            dollar = dollar + schrittweite;
        }
    }
    
}
void main (void)
{
    float anfangsWert, endWert, schrittweite;

    printf("Bitte geben Sie den Anfangswert ein:\n");
    scanf("%f",&anfangsWert);
    printf("Bitte geben Sie den Endwert ein:\n");
    scanf("%f",&endWert);
    printf("Bitte geben Sie die Schrittweitet ein:\n");
    scanf("%f",&schrittweite);
    
    printTable(anfangsWert, endWert, schrittweite, 1);
    
    printf("\n");
    
    printTable(anfangsWert, endWert, schrittweite, 2);
    
    getchar();
    getchar();
 
}