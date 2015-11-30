#include <stdio.h>
int forSchleife(float n, int m){
        /*float n;
        int m;
        printf("Kommazahl zwischen 0 und 1 eingeben \n");
        scanf("%fl", &n);
 
        printf("Nachkommastellen eingeben \n");
        scanf("%d", &m);*/
        printf("For Schleife: \n");
        for (m=m;m>0; m--) {
 
                n= n * 2;
                if(n>=1) {
                        printf("1");
                        n= n - 1; }
                else {
                        printf("0");}
        }
        getchar();
        printf(" \n\n");
    return 0;
}
 

int whileSchleife(float n, int m){
        /*float n;
        int m;
        printf("Kommazahl zwischen 0 und 1 eingeben \n");
        scanf("%fl", &n);
 
        printf("Nachkommastellen eingeben \n");
        scanf("%d", &m);*/
        printf("While Schleife: \n");
        while(m > 0) {
                m--;
                n= n * 2;
                if(n>=1) {
                        printf("1");
                        n= n - 1; }
                else {
                        printf("0");}
        }
        getchar();
        printf("\n\n");
}
 

int doWhileSchleife(float n, int m){
        /*float n;
        int m;
        printf("Kommazahl zwischen 0 und 1 eingeben \n");
        scanf("%fl", &n);
 
        printf("Nachkommastellen eingeben \n");
        scanf("%d", &m); */
        printf("DO WHILE Schleife: \n");
        do{
                m--;
                n= n * 2;
                if(n>=1) {
                        printf("1");
                        n= n - 1; }
                else {
                        printf("0");}
        } while(m > 0);
        getchar();  
        printf("\n\n");
}
int main(void) {
    float n1;
    int m1;
     printf("Kommazahl zwischen 0 und 1 eingeben \n");
        scanf("%fl", &n1);
 
        printf("Nachkommastellen eingeben \n");
        scanf("%d", &m1);
    forSchleife(n1,m1);
    whileSchleife(n1,m1);
    doWhileSchleife(n1,m1);
    return 0;
}