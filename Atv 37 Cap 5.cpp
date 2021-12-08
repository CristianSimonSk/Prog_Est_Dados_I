#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float N;
int NM=1;

while (NM>0){	
    printf("\nCALCULADOR DE CONCEITO\n");
    printf("\nInsira o seu numero de matricula ou algum numero negativo para sair:\n");
    scanf("%d",&NM);
    if (NM>=0){
    printf("\nInsira sua nota:\n");
    scanf("%f",&N);
if (N>=0&&N<5) printf ("\nO aluno da matricula %d tem o conceito FRACO.\n",NM);
if (N>=5&&N<7) printf ("\nO aluno da matricula %d tem o conceito REGULAR.\n",NM);
if (N>=7&&N<9) printf ("\nO aluno da matricula %d tem o conceito BOM.\n",NM);
if (N>=9&&N==10) printf ("\nO aluno da matricula %d tem o conceito MUITO BOM.\n",NM);
}
if (NM<0) printf("\nFIM DA EXECUCAO.\n");
}
system("pause");
}
