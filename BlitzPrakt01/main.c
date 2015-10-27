#include <stdio.h> // Standard-Include
#include <string.h> // Include der String-Funktionen

// Aufgabenblatt prakt01.pdf
// AUFGABE 2
// Funktion Schaltjahr
/*
ALGORITHMUS 
Schaltjahr()

BESCHREIBUNG
Prüfe, ob es sich um ein Schaltjahr handelt.

DATEN
Das zu prüfende Jahr als GanzZahl: jahr
Ausgabe der Meldung als String: ausgabe

KERN-ALGORITHMUS
Einlesen von jahr
FALLS   (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 einen Restwert hat) ODER
        (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 keinen Restwert hat UND jahr MODULO 400 keinen Restwert hat)
DANN
    ausgabe = "Es handelt sich um ein Schaltjahr"
SONST 
    ausgabe = "Es handelt sich NICHT um ein Schaltjahr"
ENDE FALLS

Ausgabe der Meldung ausgabe

ENDE ALGORITHMUS


*/

// Schaltjahr-Funktion
int schaltjahr()
{
 int jahr=0; // Daten: jahr als GanzZahl (int)
 char ausgabe[100] = ""; // Daten: ausgabe als String (char)
  
 printf("Dieses Programm errechnet ob eine eingegebene Jahrezahl ein Schaltjahr ist:\n\n");
 printf("Gib die Jahreszahl vierstellig ein:");

 /* Kern Algorithmus */
 // "Einlesen von jahr"
 scanf("%d", &jahr);
 // die FALLS SONST Kontrollstruktur (Bedingung)
 // FALLS
  if (
      (jahr % 4 == 0 && jahr % 100 != 0) || 
      (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0)
      )
    {
        strcpy( ausgabe, "Es handelt sich um ein Schaltjahr" );
    }
    // SONST
    else {
         strcpy( ausgabe, "Es handelt sich NICHT um ein Schaltjahr" );
    // ENde der Bedingung
    }
    // Ausgabe der Variable ausgabe
 printf("\n%s\n", ausgabe);
 return 0;
} // end schaltjahr

// HAUPTPROGRAMM
int main()
{
    schaltjahr();
 return 0;
}//end HAUPTPROGRAMM

