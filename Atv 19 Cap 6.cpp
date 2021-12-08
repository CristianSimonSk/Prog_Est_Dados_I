#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define T 4

main(){
int SOMA1=0,SOMA2=0,I,J,K=0,MAT[T][T],MAIOR,MENOR;

printf("\nInsira valores para a matriz:\n");
for (I=0;I<T;I++){
	for (J=0;J<T;J++){
		printf("\nInsira o valor da posicao %d x %d:\n",I,J);
		scanf ("%d",&MAT[I][J]);
	}
}
system("pause");
for (I=0;I<T;I++){
	printf("\nA matriz digitada eh:\n");
	printf("\n%d        %d        %d        %d\n",MAT[I][K],MAT[I][K+1],MAT[I][K+2],MAT[I][K+3]);		
}
system("pause");
for (I=0;I<T;I++){
	for (J=0;J<T;J++){
		if (I==0 && J==0){
		MENOR=MAT[I][J];
		MAIOR=MAT[I][J];
		}
		if (MAT[I][J]<MENOR){
			MENOR= MAT[I][J];
		}
		if (MAT[I][J]>MAIOR){
			MAIOR=MAT[I][J];
		}
	}
}
printf("\nO menor valor da matriz eh %d. \n",MENOR);
printf("\nO maior valor da matriz eh %d. \n",MAIOR);
}
