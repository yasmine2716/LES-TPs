#include<stdio.h>
int main(){
char message[1000];
int decalage;
printf("Entrer message : ");
scanf("%s",&message);
printf("Entrer le decalage : ");
scanf("%d",&decalage);
for(int i=0; message[i]!='\0';i++){
message[i]+=decalage;
}
printf("Message chiffré : %s\n",message);
return 0;

}
