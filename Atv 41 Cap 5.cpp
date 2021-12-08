#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int N,SOMA=0;
printf("\n********CALCULADORA*******\n");
printf("\nInsira os numeros que deseja somar ou insira 0 para sair:\n");
while (N!=0){	
	printf("\nValor:\n");
    scanf ("%d",&N);
    SOMA=SOMA+N;
printf("\nA soma dos valores eh %d:\n",SOMA);
}
system("pause");
}
