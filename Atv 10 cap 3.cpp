#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int DIN,D100,D50,D20,D10,D5,D2,D1;

printf("\n*****DISTRIBUIDOR DE TROCO*****\n");
printf("\nInsira o valor inteiro em dinheiro:\n");
scanf("%d",&DIN);
D100=DIN/100;
DIN=(DIN-D100*100);

D50=DIN/50;
DIN=(DIN-D50*50);

D20=DIN/20;
DIN=(DIN-D20*20);

D10=DIN/10;
DIN=(DIN-D10*10);

D5=DIN/5;
DIN=(DIN-D5*5);

D2=DIN/2;
DIN=(DIN-D2*2);

D1=DIN;
printf("\nO numero de notas de 100 eh: %.1d.\n",D100);
printf("\nO numero de notas de 50 eh: %.1d.\n",D50);
printf("\nO numero de notas de 20 eh: %.1d.\n",D20);
printf("\nO numero de notas de 10 eh: %.1d.\n",D10);
printf("\nO numero de notas de 5 eh: %.1d.\n",D5);
printf("\nO numero de notas de 2 eh: %.1d.\n",D2);
printf("\nO numero de notas de 1 eh: %.1d.\n",D1);
system("pause");
}

