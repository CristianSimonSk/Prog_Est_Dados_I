#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void escolher (int *MESA, int OP){
int I,NUM,NUMERO,LUG;
	for (I=0;I==0;I++){
		printf("\nInsira a mesa desejada (1 a 30):\n");
		scanf ("%d",&NUMERO);
		NUM=NUMERO-1;
		printf("\nInsira a quantidade de lugares desejados (Max 5):\n");
		scanf ("%d",&LUG);
		if (MESA[NUM]+LUG <=5){
			MESA[NUM] = MESA[NUM]+LUG;
			printf("\nReserva concluida com sucesso.\n");
		}
		else printf("\nReserva nao concluida, mesa possui apenas %d lugares disponiveis.\n",MESA[NUM]-LUG);
		printf("\n \n");
		system("pause");
		
	}
}
int ler (int *MESA){
int J,K,DISP[30];
for (J=0;J<30;J++){
	    DISP[J]= 5 - MESA[J];
	}
    for (K=0;K<30;K++){
    	printf("\n  MESA    LUGARES DISPONIVEIS\n %d           %d  \n",K+1,DISP[K]);
	}
	printf("\n \n");
	system("pause");
}
main(){
int I,J,K,MESA[30],DISP[30],NUM,NUMERO,LUG,OP;
	for (I=0;I<30;I++)
	MESA[I]=0;
	printf("\nRESERVA DE MESAS PARA FESTAS. \n");
	 
    printf ("\n DIGITE\n 1- Para reservar alguma mesa. \n 2- Para consultar as mesas disponiveis. \n 3- Para sair.  \n");
	scanf("%d",&OP);
	
	while(OP!=3){
		switch(OP){
		case 1: escolher(MESA,OP); break;
		case 2: ler(MESA); break;
		default : printf("\nNumero invalido.. \n");
	}
    printf ("\n DIGITE\n 1- Para reservar alguma mesa. \n 2- Para consultar as mesas disponiveis. \n 3- Para sair.  \n");
	scanf("%d",&OP);
	}
system("pause");
}
