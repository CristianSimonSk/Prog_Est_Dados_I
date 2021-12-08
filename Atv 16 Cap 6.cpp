#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
int SOMA1=0,SOMA2=0,I,J,K=3,L=5,MAT1[K][L],MAT2[K][L];

printf("\nInsira valores para a primeira matriz:\n");
for (I=0;I<K;I++){
	for (J=0;J<L;J++){
		printf("\nInsira o valor da posicao %d x %d:\n",I,J);
		scanf ("%d",&MAT1[I][J]);
	}
}
printf("\nInsira valores para a segunda matriz:\n");
for (I=0;I<K;I++){
	for (J=0;J<L;J++){
		printf("\nInsira o valor da posicao %d x %d:\n",I,J);
		scanf ("%d",&MAT2[I][J]);
	}
}
for (I=0;I<K;I++){
	for (J=0;J<L;J++){
		SOMA1=SOMA1+MAT1[I][J];
		SOMA2=SOMA2+MAT2[I][J];
	}
}
system("pause");
printf("\nA soma dos valores das duas matrizes eh %d:\n",SOMA1+SOMA2);
system("pause");
}
