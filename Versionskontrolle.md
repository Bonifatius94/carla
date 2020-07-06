# Versionskontrolle für das Klonen des Codes

## Schritte des Klonens

1. Das Repository mit dem Terminal in einen neuen Ordner klonen
2. Auf den aktuellsten Branch "fullreimp" mit dem Befehl "git checkout remotes/origin/scoomatic/fullreimp" wechseln
3. Die Assets mit dem Befehl "./Update.sh" im enstandenen Ordner "carla" ausführen
4. Die Entstandenen Änderungen mit dem Befehl "git checkout - - ./" rückgängig machen
5. Den Server mit dem Befehl "make launch" kompilieren
6. Den Client mit dem Befehl "make PythonAPI" kompilieren