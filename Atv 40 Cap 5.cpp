#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int J=1,N,V1,V2;
char NM;

while (J>0){	
	printf("\nCALCULADOR E CONTADOR\n");
    printf("\nInsira o seu nome:\n");
    scanf("%c",&NM);
    fflush(stdin);
    printf("\nInsira o numero de dias da estadia ou 0 para sair:\n");
    scanf("%d",&N);
    V1=(30+15)*N;
    V2=(30+8)*N;
    J=N;
	if (N>=10)printf ("\nO valor a ser pago eh  %d .\n",V2);
    if (N<10) printf ("\nO valor a ser pago eh  %d.\n",V1);
    if (N==0) printf ("\nFim da execucao.\n",V1);
    
}
system("pause");
}
