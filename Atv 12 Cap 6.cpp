#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int V[20],I,SOMA=0;
printf("\nInsira 20 valore e obtenha sua soma:\n");
for (I=0;I<20;I++){	
    scanf ("%d",&V[I]);
	SOMA=SOMA+V[I];
	}
printf("\nA soma dos valores do vetor eh %d .\n",SOMA);	
	   
system("pause");
}

