#include <stdio.h> // Standard-Include
#include <string.h> // Include der String-Funktionen


// Aufgabenblatt prakt01.pdf
// AUFGABE 3
// Funktion Jahresliste
/*
ALGORITHMUS
Jahresliste()

BESCHREIBUNG
Erstellung einer Liste aller Jahre zwischen zwei gegebenen Werten, die ausgibt, ob es sich bei dem Jahr um ein Schaltjahr handelt oder nicht.

DEKLARATION UND DEFINITION DER LOKALEN GRÖSSEN
Übergabeparameter: Natürliche zahl jahr
Natürliche Zahlen:
    Anfangsjahr n,
    Endjahr m
    Zähler i
Rückgabeparameter: --
    --
String:
    ausgabe (Schaltjahr Ja/Nein)


KERN-ALGORITHMUS
Lese n von Benutzer ein
Lese m von Benutzer ein

FUNKTION prüfeJahr(jahr):

    FALLS   (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 einen Restwert hat) ODER
            (jahr MODULO 4 keinen Restwert hat UND jahr MODULO 100 keinen Restwert hat UND jahr MODULO 400 keinen Restwert hat)
    DANN
        ausgabe = "jahr  | Ja";
    SONST
        ausgabe = "jahr  | Nein";
    ENDE FALLS
ENDE FUNKTION prüfeJahr()

Ausgabe: "Jahr  |  Schaltjahr ?"
Ausgabe: "---------------------"

FÜR i = n BIS m SCHRITTWEITE 1
    Rufe Funktion prüfeJahr mit Übergabeparameter n auf
ENDE FÜR


ENDE ALGORITHMUS


*/


// Schaltjahr-Funktion
int jahresliste()
{
 int n=0; // Daten: Jahr Beginn als GanzZahl n (int)
 int m=0; // Daten: jahr  ENDE als GanzZahl m (int)
 int i;
 char ausgabe[100] = ""; // Daten: ausgabe als String (char)
  
 printf("Dieses Programm gibt aus, ob die die Jahre zwischen Anfangs- und Endjahr ein Schaltjahr ist:\n\n");
 printf("Gib das Anfangsjahr ein:");

 /* Kern Algorithmus */
 // "Einlesen von jahr"
 scanf("%d", &n);
 printf("Nun gib das Endjahr ein:");
 scanf("%d", &m);
 printf("Jahr  |  Schaltjahr ?");
 printf("---------------------");
 for(i=n; i<=m;i++) {
      jahr = i;
     // die FALLS SONST Kontrollstruktur (Bedingung)
     // FALLS
      if (
          (jahr % 4 == 0 && jahr % 100 != 0) ||
          (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0)
          )
        {
            strcpy( ausgabe, "%i  |  Ja", jahr ); // Kopieren des Stringes "Es handelt sich..." in die Variable ausgabe
        }
        // SONST
        else {
             strcpy( ausgabe, "%i  |  Nein", jahr );  // da wir die Funktion strcpy (StringCopy) nutzen, müssen wir die
                                                                            // Stringfunktionen inkludieren #include <string.h>

        }
        // Ende FALLS

        // Ausgabe der Variable ausgabe
     printf("\n%s\n", ausgabe);
    }
 return 0;
} // end jahresliste

// HAUPTPROGRAMM
int main()
{
    jahresliste();
 return 0;
}//end HAUPTPROGRAMM

