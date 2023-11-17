

#include <stdio.h>

int sommeSuiteArithmetique(int a, int d, int n) {
    int somme = 0;
    int terme = a;

    for (int i = 0; i < n; i++) {
        somme += terme;
        terme += d;
    }

    return somme;
}

int main() {
    int a = 2;   // Premier terme
    int d = 3;   // Différence
    int n = 5;   // Nombre de termes

    int somme = sommeSuiteArithmetique(a, d, n);

    printf("La somme des termes de la suite arithmétique est : %d\n", somme);

    return 0;
}

#include <stdio.h>

int sommeTableau(int tableau[], int taille) {
    int somme = 0;

    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }

    return somme;
}

int main() {
    int notes[] = {10, 15, 12, 8, 14};   // Tableau des notes
    int taille = sizeof(notes) / sizeof(notes[0]);   // Taille du tableau

    int somme = sommeTableau(notes, taille);

    printf("La somme des éléments du tableau est : %d\n", somme);

    return 0;
}

#include <stdio.h>

int estCroissante(int tableau[], int taille) {
    for (int i = 1; i < taille; i++) {
        if (tableau[i] < tableau[i - 1]) {
            return 0;   // La suite n'est pas croissante
        }
    }

    return 1;   // La suite est croissante
}

int main() {
    int suiteCroissante[] = {1, 3, 5, 7, 9};   // Tableau représentant une suite croissante
    int taille1 = sizeof(suiteCroissante) / sizeof(suiteCroissante[0]);

    int suiteNonCroissante[] = {2, 4, 1, 6, 8};   // Tableau représentant une suite non croissante
    int taille2 = sizeof(suiteNonCroissante) / sizeof(suiteNonCroissante[0]);

    int resultat1 = estCroissante(suiteCroissante, taille1);
    int resultat2 = estCroissante(suiteNonCroissante, taille2);

    printf("La première suite est croissante ? %s\n", (resultat1 == 1) ? "Oui" : "Non");
    printf("La deuxième suite est croissante ? %s\n", (resultat2 == 1) ? "Oui" : "Non");

    return 0;
}

}
