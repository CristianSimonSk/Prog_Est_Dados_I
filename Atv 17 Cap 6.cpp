#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
int I,J,K=3,L=3;
float SOMA1=0,SOMA2=0,MAT1[K][L],MAT2[K][L],SOMATOTAL;
printf("\nInsira valores para a primeira matriz:\n");
for (I=0;I<K;I++){
	for (J=0;J<L;J++){
		printf("\nInsira o valor da posicao %d x %d:\n",I,J);
		scanf ("%f",&MAT1[I][J]);
	}
}
printf("\nInsira valores para a segunda matriz:\n");
for (I=0;I<K;I++){
	for (J=0;J<L;J++){
		printf("\nInsira o valor da posicao %d x %d:\n",I,J);
		scanf ("%f",&MAT2[I][J]);
	}
}
for (I=0;I<K;I++){
	for (J=0;J<L;J++){
		SOMA1=SOMA1+MAT1[I][J];
		SOMA2=SOMA2+MAT2[I][J];
	}
}
if (SOMA1>0 && SOMA2>0){ //Prof fiz esses 'ifs' pra que toda vez que tiver um numero negativo, menos um positivo ele nao inverta os sinais.
	SOMATOTAL=SOMA1-SOMA2;
}
if (SOMA1<0 && SOMA2<0){
	SOMATOTAL=SOMA1-SOMA2;
}
if (SOMA1>0 && SOMA2<0){
	SOMATOTAL=SOMA1+SOMA2;
}
if (SOMA1<0 && SOMA2>0){
	SOMATOTAL=SOMA1+SOMA2;
}
system("pause");
printf("\nA subtracao do valor total da primeira matriz com a segunda matriz eh %.2f.\n",SOMATOTAL);
system("pause");
}
