#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float C,P,I=0;

while (I<20){
I++;
printf("\n*****CALCULADOR*****\n");
printf("\nInsira o codigo do produto:\n");
scanf("%f",&C);
printf("\nInsira o preco de custo:\n");
scanf("%f",&P);
if (P<1000) printf("\nO preco deve ser %.2f:\n",P*1.2);
if (P>=1000 )printf("\nO preco deve ser %.2f:\n",P*1.05);
}
system("pause");
}

