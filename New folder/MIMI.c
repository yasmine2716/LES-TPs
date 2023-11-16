#include <stdio.h>

// Fonction pour calculer le PGCD de deux entiers a et b
int pgcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return pgcd(num2, num1 % num2);
    }
}

// Fonction pour calculer les coefficients x et y de Bézout
void coefficients(int num1, int num2, int *x, int *y) {
    if (num2 == 0) {
        *x = 1;
        *y = 0;
    } else {
        int x1, y1;
        coefficients(num2, num1 % num2, &x1, &y1);
        *x = y1;
        *y = x1 - (num1 / num2) * y1;
    }
}

int main() {
    int num1_, num2_;
    printf("Entrez deux entiers a et b : ");
    scanf("%d %d", &num1_, &num2_);

    int x, y;
    int pgcd_result = pgcd(num1_, num2_);
    coefficients(num1_, num2_, &x, &y);

    printf("PGCD(%d, %d) = %d\n", num1_, num2_, pgcd_result);
    printf("Coefficients de Bézout (x, y) tels que %d * x + %d * y = %d sont : x = %d, y = %d\n", num1_, num2_, pgcd_result, x, y);

    return 0;
}
