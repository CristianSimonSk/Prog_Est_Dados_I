#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float ESCOLHA,A,B,C,V;
int B2;
printf("\nESCOLHA UM VALOR (1, 2 ou 3:)\n");
printf("\n(1) Para saber a media.\n");
printf("\n(2) Para saber a soma.\n");
printf("\n(3) para saber se o valor de B eh par ou impar.\n");
scanf("%f",&ESCOLHA);
printf("\nInsira um valor para A:\n");
scanf("%f",&A);
printf("\nInsira um valor pra B:\n");
scanf("%f",&B);
printf("\nInsira um último valor para C:\n");
scanf("%f",&C);
B2=B;
if (ESCOLHA==1) printf("\nA media dos valores A,B e C eh %.0f.\n",V=(A+B+C)/3);
else
    if (ESCOLHA==2) printf("\nA soma dos valores A,B e C eh  %.0f.\n",V=(A+B+C));
    else
         if (ESCOLHA==3 && B2%2==0) printf("\nO valor %.0f eh par.\n",B);
         else
             if (ESCOLHA==3 && B2%2!=0) printf("\nO valor %.0f eh impar.\n",B);      
system("pause");
}

