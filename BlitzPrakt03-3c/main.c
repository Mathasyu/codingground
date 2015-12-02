#include <stdio.h>
// Funktion zum prüfen auf Schaltjahr
int schaltjahr (int jahr) {
    int rueckgabewertSchaltjahr = 2; // kein Schaltjahr
    if (
          (jahr % 4 == 0 && jahr % 100 != 0) ||
          (jahr % 4 == 0 && jahr % 100 == 0 && jahr % 400 == 0)
          )
        {
            rueckgabewertSchaltjahr = 1; // 1 = Schaltjahr
        }
        return rueckgabewertSchaltjahr;
}

// Funktion zum prüfen auf das Jahr ab 1 nach Christi Geburt
int korrektesJahr(int jahr) {
    int rueckgabewertJahr;
    if(jahr >= 1) {
        rueckgabewertJahr = 1; // Jahr ist korrekt
    } else {
        rueckgabewertJahr = 2; // Jahr ist nicht korrekt
    }
    return rueckgabewertJahr;
}

// Funktion zum prüfen auf Monat (zwischen 1 und 12)
int monateImJahr(int monat) {
    int rueckgabewertMonat;
    rueckgabewertMonat = 2; // nicht korrekt
    if(monat >= 1 && monat <=12) {
        rueckgabewertMonat = 1; // korrekt
    } 
    return rueckgabewertMonat;
}

// Funktion zum prüfen auf den Tag (zwischen 1 und der maximalen Anzahl des angegebenen Monats)
// die maximale Anzahl der tage des Monats wird in checkDatum() geprüft
int tageImMonat(int tag, int tagMax) {
    int rueckgabewertTag;
    rueckgabewertTag = 2; // nicht korrekt
    if((tag >=1) && (tag <= tagMax)) {
        rueckgabewertTag = 1; // korrekt
    }
    return rueckgabewertTag;
}

// Funktion zum des Datums
// diese Funktion greift auf die anderen Funktionen zurück
int checkDatum(int tag, int monat, int jahr) {
    int rueckgabeWertCheckDatum = 2; // 2 = Fehler
    int checkTag;
    int checkMonat;
    int tagMax;
    int checkSchaltjahr;
    int checkJahr = korrektesJahr(jahr); // hier wird das Jahr geprüft (ab Jahr 1 nach Christi)
    if(checkJahr == 1) { // wenn Jahr korrekt
        rueckgabeWertCheckDatum = 1; // Datums-Check auf 1 setzen (korrektes Datum)
        checkMonat = monateImJahr(monat); // hier wird der Monat geprüft (zwischen 1 und 12)
        if (checkMonat == 1) { // Monat ist korrekt (zwischen 1 und 12)
            rueckgabeWertCheckDatum = 1; // Datums-Check auf 1 setzen (korrektes Datum)
            
            // Prüfen des Monats wegen der Maximalanzahl von Tagen
            if (monat == 1 || monat == 3 || monat == 5 || monat == 7 || monat == 8 || monat == 10 || monat == 12) {
                tagMax = 31;
            }
            if (monat == 4 || monat == 6 || monat == 9 || monat == 11 ) {
                tagMax = 30;
            }
            // Sonderfall Februar (Schaltjahr)
            if (monat == 2) {
                tagMax = 28; // erst mal auf 28 Tage setzen
                checkSchaltjahr = schaltjahr(jahr); // auf Schaltjahr prüfen
                if(checkSchaltjahr == 1) { // Falls es sich um ein Schaltjahr handelt
                    tagMax = 29;
                } 
            }
            checkTag = tageImMonat(tag, tagMax); // nun den Tag checken mit der Übergabe der Maximalanzahl von Tagen
            if (checkTag == 1) { // Tag ist korrekt (zwischen 1 und maxTag)
                rueckgabeWertCheckDatum = 1; // Datums-Check auf 1 setzen (korrektes Datum)
            } else {
                rueckgabeWertCheckDatum = 2; // SONST Datums-Check auf 2 setzen (nicht korrektes Datum)
            }
        } else { // ende WENN Monat korrekt
            rueckgabeWertCheckDatum = 2; 
        } // ende SONST von Monat korrekt
    } // ende WENN jahr korrekt
    return rueckgabeWertCheckDatum;
    
} // ende checkDatum()

// HAUPTPROGRAMM
void main(void) {
  int tag, monat, jahr, rueckgabeWertMain;
  // Einlesen der Datums
  printf("Geben Sie den Tag ein (Ganzzahl):");
  scanf("%d", &tag);
  printf("Geben Sie den Monat ein (Ganzzahl):");
  scanf("%d", &monat);
  printf("Geben Sie das Jahr ein (Ganzzahl, ab 1 nach Christi Geburt):");
  scanf("%d", &jahr);
  
  // Datums-Check-Funktion aufrufen
  rueckgabeWertMain = checkDatum(tag, monat, jahr);
  if (rueckgabeWertMain == 1) {
      printf("Herzlichen Glückwunsch, das Datum ist korrekt. \n");
  } else {
      printf("Das Datum ist nicht korrekt \n");
  }
}