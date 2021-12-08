#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>

main(){
int I,J,K;
char N1[5][30],N1AUX[5][30];
float N2[5],AUX;
for (I=0;I<5;I++){	
	printf("\nInsira o nome do aluno:\n");
    scanf ("%s",&N1[I]);
    fflush (stdin);
    printf("\nInsira a nota do aluno:\n");
    scanf ("%f",&N2[I]); 
}
for (I=0;I<5;I++){
	for (J=I+1;J<5;J++){
		if (N2[I]<N2[J]){
			AUX=N2[I];
			N2[I]=N2[J];
			N2[J]=AUX;
			strncpy(N1AUX[I],N1[I],30);
			strncpy(N1[I],N1[J],30);
			strncpy(N1[J],N1AUX[I],30);
		}
	}
}
for (K=0;K<5;K++){
    printf("\nEm ordem decrescente, a lista de chamada eh:\n %s    /   %.2f . \n",N1[K],N2[K]);   
}	
							   
system("pause");
}
