#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float C,S,V,R;

printf("\n*****CALCULADOR DE SALARIO*****\n");
printf("\nInsira seu codigo:\n");
scanf("%f",&C);
printf("\nInsira seu salario basico:\n");
scanf("%f",&S);
printf("\nInsira o seu total de vendas no mes :\n");
scanf("%f",&V);

if (V<=500);
{
R=S+(S*0.025);
}
if(V>=501);
{
R=S+(S*0.04);
}
printf("\nSeu codigo eh %.0f seu salario basico eh %0.2f e seu salario recebido eh %.2f.\n",C,S,R);   
system("pause");
} 

