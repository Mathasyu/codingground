
// Aufgabenblatt prakt01.pdf
// AUFGABE 1
// Funktion Tiefkühlpizza
/*
ALGORITHMUS 
Tiefkühlpizza()

BESCHREIBUNG
Bereite eine Tiefkühlpizza zu.

DEKLARATION UND DEFINITION DER LOKALEN GRÖSSEN
Natürliche Zahlen:
Die angegebene Backzeit: backzeit1 in Minuten
Die weitere Backzeit: backzeit2 in Sekunden
Temparatur des Ofens:  ofentemparatur
verstricheneZeit (In Sekunden )
Pizzastatus 

KERN-ALGORITHMUS
Hole Pizza aus dem Kühlschrank
Lege die Pizza auf ein Backblech
// Herd auf 200° vorheizen (Ofenobjekt)
Ofen aufheizen
WIEDERHOLE
    Prüfe Temparatur des Ofens
SOLANGE (ofentemparatur >= 200)

Pizza in den Ofen legen
Einlesen der Garzeit (backzeit1)

WIEDERHOLE
    Backe Pizza (Ofen auf 200° halten)
SOLANGE (verstricheneZeit <= backzeit1)

WIEDERHOLE
    Einlesen Pizzastatus (Prüfe, ob die Pizza gut ist)

    FALLS (Pizzastatus == nicht OK)
    DANN
        verstricheneZeit zurücksetzen
        Einlesen der weiteren Backzeit (backzeit2)

        WIEDERHOLE
            Backe Pizza (Ofen auf 200° halten)
        SOLANGE (verstricheneZeit < backzeit2)
    ENDE FALLS
SOLANGE (Pizzastatus == nicht OK)

Pizza aus dem Ofen nehmen
Pizza auf den Teller legen

ENDE ALGORITHMUS


*/
