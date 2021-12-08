#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define T 4

main(){
int SOMA1=0,SOMA2=0,SOMA3=0,SOMA4=0,I,J,MAT[T][T];

printf("\nInsira valores para a matriz:\n");
for (I=0;I<T;I++){
	for (J=0;J<T;J++){
		printf("\nInsira o valor da posicao %d x %d:\n",I,J);
		scanf ("%d",&MAT[I][J]);
	}
}
system("pause");
for (I=0;I<T;I++){
	J=0;
	SOMA1=MAT[I][J]+MAT[I][J+1]+MAT[I][J+2]+MAT[I][J+3];
	printf("\nA soma da linha %d eh %d.\n",I,SOMA1);		
}
system("pause");
for (J=0;J<T;J++){
	I=0;
	SOMA2=MAT[I][J]+MAT[I+1][J]+MAT[I+2][J]+MAT[I+3][J];
	printf("\nA soma da coluna %d eh %d.\n",J,SOMA2);		
}
system("pause");
for (I=0;I<T;I++){
	J=I;
	SOMA3=SOMA3+MAT[I][J];
}
printf("\nA soma da diagonal principal eh %d.\n",SOMA3);
system("pause");
for (I=0;I<T;I++){
	for (J=0;J<T;J++){
	SOMA4=SOMA4+MAT[I][J];
	}
}
printf("\nA soma de todos elementos da matriz eh %d.\n",SOMA4);
system("pause");
} 


