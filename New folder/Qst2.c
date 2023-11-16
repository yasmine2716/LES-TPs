#include <stdio.h>

//Écrivez un programme en langage C qui prend en entrée deux entiers, a et n, et trouve tous les entiers b congruents à a modulo n dans l'intervalle [0, n-1].

int TrouverLesEntiers(int num1,int num2,int number){

if (number <= 0) {
        printf("La valeur de n doit être supérieure à zéro.\n");
    } else {
    if(abs(num1-num2)%number==0 && num1%number==num2%number){
        printf("Les entiers congruents à %d modulo %d dans l'intervalle [0, %d] sont :\n", num1, number, number - 1);
        for (num2 = 0; num2 < number; num2++) {
            if (num1 % number == num2) {
                printf("%d ", num2);
            }
        }
        printf("\n");
    }

  }
}
int main() {
    int num1_,num2_,number_;

printf("Entrez premier nombre : ");
scanf("%d", &num1_);
printf("Entrez la valeur de modulo : ");
scanf("%d", &number_);
int entiers=TrouverLesEntiers(num1_,num2_,number_);


return 0;
}

