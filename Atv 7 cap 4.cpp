#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float P,VM,PR;
printf("\n*****Calculador de Preços*****\n");
printf("\nInsira o preco atual:\n");
scanf("%f",&P);
printf("\nInsira a venda mensal media do produto:\n");
scanf("%f",&VM);
if (VM<500&&P<30) PR=(P*1.1);
else 
   if (VM>=500&&VM<1200&&P>=30&&P<80) PR=(P*1.15);
   else
       if (VM>=1200&&P>=80) PR=(P*0.8);
printf("\nO preco do produto com o reajuste eh R$ %.2f.\n",PR);     
system("pause");
}
