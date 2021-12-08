#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void valores (int *S, int *T){
	int I;
	for (I=0;I<25;I++){	
	printf("\nValor:\n");
    scanf ("%d",&S[I]);
    T[I]=S[I]; //Fiz outro vetor pra não alterar o vetor S. 
	}
}
int leitura1 (int *S){
	int J;
	printf("\nOs valores sao:\n");
	for (J=0;J<25;J++){
	printf("%d,",S[J]); 
    }
}
int comp (int *T){
	int M,L;
	for (M=0;M<25;M++){
		for (L=1;L<25;L++){
			if (M!=L){		
				if (T[M] == T[L]){
   					T[L]= 0;
				}
			}
		}
	}
}
int leitura2 (int *T){	
	int N;
	printf("\nCom a compactacao os valores sao:\n");		
	for (N=0;N<25;N++){
		if (T[N] != 0){
		printf("%d,",T[N]);
		}
	}
}
main(){
int I,J,L,M,N,S[25],T[25],O=0;
printf("\n*****COMPACTADOR*****\n");
printf("\nInsira 25 valores maiores que 0 para os que estiverem duplicados serem compactados :\n");
switch (O){
case 0 : valores(S,T); leitura1(S); comp(T); leitura2(T); break;		
}
printf ("\n \n");			   
system("pause");
}
