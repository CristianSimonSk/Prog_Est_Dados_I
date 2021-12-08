#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float X,Y;

printf("\n*****DISTRIBUIDOR DE TROCO*****\n");
printf("\nInsira um número para o eixo X um para Y:\n");
printf("\nEixo X:\n");
scanf("%f",&X);
printf("\nEixo Y:\n");
scanf("%f",&Y);
if (X==0&&Y!=0) printf("\nO ponto esta sobre o eixo Y\n");
else
   if (X!=0&&Y==0) printf("\nO ponto esta sobre o eixo X\n");
   else
      if (X==0&&Y==0) printf("\nO ponto esta sobre o eixo X\n");
      else
          if (X!=0&&Y!=0) printf("\nO ponto esta sobre o eixo X\n");
system("pause");
}
