# Scoomatic

irgendwelche änderungen sind beim branch wechsel aufgetaucht. Dadurch musste ich nochmal alle Fehler finden.
Ich habe statt eine Zielgeschwindigkeit auf die Räder zu setzen lieber versucht die constraints anzutreiben.

ich musste nochmal etwas an der scoomatic factory ändern, dass da wirklich die lokale variable drin vor kommt.
musste überprüfen, dass die factory wirklich verbunden ist.
im Game mode und in der scoomatic Factory

Ich habe ein neues python script zum leichten debuggen geschrieben.

`scoomatic_manual.py` läuft noch nicht.

Scoomatic erscheint dann korrekt nach den factory problemen.

dann die räder geänder und die strength im constraint für den angular drive erhöht.

dann fehlte noch im Scoomatic bp unter details, scoomatic pawn die aicontrollerclass geänder zu Scoomatic Base AI Controller.