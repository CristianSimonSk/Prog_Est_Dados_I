#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float A1,A2,B1,B2,AUX;

printf("\n*****INVERSOR*****\n");
printf("\nInsira um valor para A:\n");
scanf("%f",&A1);
printf("\nInsira um valor para B:\n");
scanf("%f",&B1);
AUX=(A1);
A2=(B1);
B2=(AUX);
printf("\nO valor de A eh %.0f e de B eh %.0f.\n",A2,B2);
system("pause");
}
