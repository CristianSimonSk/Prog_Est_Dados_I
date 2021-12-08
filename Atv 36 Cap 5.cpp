#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int N=0,SOMA,VAR=0;

while (N>=0){	
    printf("\nCALCULADOR E CONTADOR\n");
    printf("\nInsira um numero para contar e somar ou insira um numero negativo para sair:\n");
    scanf("%d",&N);
SOMA=SOMA+N;
if (N>=0) VAR++;{
printf ("\nA soma dos numeros eh %d.\n",SOMA);
printf ("\nA contagem de numeros eh %d.\n",VAR);
}
if (N<0) printf ("\nFim da execucao.\n");
}
system("pause");
}
