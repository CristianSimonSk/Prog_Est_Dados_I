#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int M1,M2,N1,N2,I;
float M,NOTA[5];
char NOME[5][30];
for (I=0;I<5;I++){	
    printf("\nInsira o nome do aluno:\n");
    scanf ("%s",&NOME[I]);
    fflush(stdin);
    printf("\nInsira a nota do aluno:\n");
    scanf ("%f",&NOTA[I]);  
    fflush(stdin);
    if (I==0){
    M1=NOTA[I]; M2=NOTA[I];
    N1=I; N2=I;
	}
	if(NOTA[I]>M1) {
    M1=NOTA[I]; 
    N1=I; 
	}
    if(NOTA[I]<M2) {
    M2=NOTA[I]; 
    N2=I;
	}
	M=M+NOTA[I];
	}
printf("\nA media da turma eh %.2f\n",M/5);
printf ("\nO aluno com a maior nota eh %s .\n",NOME[N1]);
printf ("\nO aluno com a menor nota eh %s .\n",NOME[N2]);			   
system("pause");
}

