#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float N1,N2,N3,M1,M2,MF,F;

printf("\n*****APROVADO OU NAO*****\n");
printf("\nInsira a nota do trabalho de grupo:\n");
scanf("%f",&N1);

printf("\nInsira a nota do projeto:\n");
scanf("%f",&N2);

printf("\nInsira a nota da prova:\n");
scanf("%f",&N3);

M1=(N1+N2)*0.3;
M2=(N3*0.7);
MF=(M1+M2)/2;

if (MF>=7) printf("\nVocê foi aprovado por média.\n");
else F=(7-MF); printf("\nVoce precisa de %.2f pontos para ser aprovado\n",F);
     
system("pause");
}
