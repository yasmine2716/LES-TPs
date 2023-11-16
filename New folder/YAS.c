#include<stdio.h>

//Écrivez un programme en langage C qui prend en entrée trois entiers a, b et n, et détermine si a et b sont congruents modulo n.

int TestCongruenceArithmétiques(int num1,int num2,int number){

if(abs(num1-num2)%number==0 && num1%number==num2%number){return 1;}
else{return 0;}
}

int main(){
int num1_,num2_,number_,test_;
printf("Donner deux nombres : \n");
scanf("%d",&num1_);
scanf("%d",&num2_);
printf("Donner le modulo : ");
scanf("%d",&number_);
test_=TestCongruenceArithmétiques(num1_,num2_,number_);
printf("%d ≡ %d (mod %d) est : %d",num1_,num2_,number_,test_);
return 0;
}
