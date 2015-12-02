#include <stdio.h>
int checkZahl(float n) {
    int rueckgabewert = 2;
    if ((n < 1) && (n > 0)) {
        rueckgabewert = 1;
    }
    return rueckgabewert;
}
int forSchleife(float n, int m){
        printf("For Schleife: \n");
        printf("0.");
        for (m=m;m>0; m--) {
 
                n= n * 2;
                if(n>=1) {
                        printf("1");
                        n= n - 1; }
                else {
                        printf("0");}
        }
        printf(" \n\n");
    return 0;
}
 

int whileSchleife(float n, int m){
        printf("While Schleife: \n");
        printf("0.");
        while(m > 0) {
                m--;
                n= n * 2;
                if(n>=1) {
                        printf("1");
                        n= n - 1; }
                else {
                        printf("0");}
        }
        printf("\n\n");
}
 

int doWhileSchleife(float n, int m){
        printf("DO WHILE Schleife: \n");
        printf("0.");
        do{
                m--;
                n= n * 2;
                if(n>=1) {
                        printf("1");
                        n= n - 1; }
                else {
                        printf("0");}
        } while(m > 0);
        printf("\n\n");
}
int main(void) {
    int pruefen;
    float n1;
    int m1;
     printf("Kommazahl zwischen 0 und 1 eingeben \n");
        scanf("%fl", &n1);
 
        printf("Nachkommastellen eingeben \n");
        scanf("%d", &m1);
     pruefen = checkZahl(n1);
    if ( pruefen == 1) {
        printf("\nErgebnis: \n");
        forSchleife(n1,m1);
        whileSchleife(n1,m1);
        doWhileSchleife(n1,m1);
    } else {
        printf("Sie haben eine ungültige Zahl angegeben\n");
    }
    getchar();
    getchar();
    return 0;
}
