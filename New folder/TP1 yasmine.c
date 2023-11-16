#include <stdio.h>
#include <stdlib.h>

int main() {
    char nom[100];

    printf("Entrez votre nom : ");
    scanf("%s", nom);

    printf("Bienvenue, %s!\n", nom);

    return 0;
}

#include <stdio.h>

int main() {
    int nombre1, nombre2, somme;

    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &nombre2);

    somme = nombre1 + nombre2;

    printf("La somme est : %d\n", somme);

    return 0;
}


#include <stdio.h>

int main()
{
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre % 2 == 0) {
        printf("Le nombre est pair.\n");
    } else {
        printf("Le nombre est impair.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int tableau[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int tableau[] = {10, 5, 8, 2, 7};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int i;
    int plusGrand = tableau[0];

    for (i = 1; i < taille; i++) {
        if (tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        }
    }

    printf("Le plus grand nombre est : %d\n", plusGrand);

    return 0;
}

#include <stdio.h>

int main() {
    int matrice[][3] = {{10, 5, 8}, {2, 7, 4}, {6, 3, 9}};
    int lignes = sizeof(matrice) / sizeof(matrice[0]);
    int colonnes = sizeof(matrice[0]) / sizeof(matrice[0][0]);
    int i, j;
    int plusGrand = matrice[0][0];

    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            if (matrice[i][j] > plusGrand) {
                plusGrand = matrice[i][j];
            }
        }
    }

    printf("Le plus grand nombre est : %d\n", plusGrand);

    return 0;
}

#include <stdio.h>

int factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

int main() {
    int nombre = 5;
    int resultat = factorielle(nombre);

    printf("La factorielle de %d est : %d\n", nombre, resultat);

    return 0;
}


#include <stdio.h>

int sommeTableau(int tableau[], int taille) {
    int somme = 0;
    int i;

    for (i = 0; i < taille; i++) {
        somme += tableau[i];
    }

    return somme;
}

int main() {
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int resultat = sommeTableau(tableau, taille);

    printf("La somme des éléments du tableau est : %d\n", resultat);

    return 0;
}



#include <stdio.h>

int main() {
    int numeroJour;

    printf("Entrez un nombre entre 1 et 7 : ");
    scanf("%d", &numeroJour);

    switch (numeroJour) {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        case 4:
            printf("Jeudi\n");
            break;
        case 5:
            printf("Vendredi\n");
            break;
        case 6:
            printf("Samedi\n");
            break;
        case 7:
            printf("Dimanche\n");
            break;
        default:
            printf("Le nombre saisi n'est pas valide.\n");
            break;
    }

    return 0;
}

#include <stdio.h>

int main() {
    int nombreSecret = 42;
    int nombreDevine;
    int tentative = 0;

    printf("Bienvenue dans le jeu de devinette!\n");

    do {
        printf("Devinez le nombre secret entre 1 et 100 : ");
        scanf("%d", &nombreDevine);
        tentative++;

        if (nombreDevine < nombreSecret) {
            printf("C'est plus grand!\n");
        } else if (nombreDevine > nombreSecret) {
            printf("C'est plus petit!\n");
        } else {
            printf("Félicitations! Vous avez deviné le nombre secret en %d tentatives.\n", tentative);
        }
    } while (nombreDevine != nombreSecret);

    return 0;
}

