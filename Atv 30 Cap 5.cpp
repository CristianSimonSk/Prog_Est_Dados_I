#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int J=0,I,NS,TP,C,MED=0,NS1=0,TP1=0,TP2=0,C1=0,C2=0,C3=0,C4=0;

while (J<30){	
    J++;
    printf("\nCALCULADOR PARA UNIVERSIDADES\n");
    printf("\nInsira sua idade:\n");
    scanf("%d",&I);
    printf("\nInsira o numero de semestres ja cursados:\n");
    scanf("%d",&NS);
    printf("\nInsira o tipo de curso:\n");
    printf("\n1-Bacharelado.\n");
    printf("\n2-Tecnologico.\n");
    scanf("%d",&TP);
    printf("\nInsira o conceito atribuido ao curso:\n");
    printf("\n1-Otimo.\n");
    printf("\n2-Muito. Bom.\n");
    printf("\n3-Bom.\n");
    printf("\n4-Regular.\n");
    scanf("%d",&C);
MED= MED+I;
if (NS>=4) NS1++;
if (TP==1) TP1++;
if (TP==2) TP2++;
if (C==1) C1++;
if (C==2) C2++;
if (C==3) C3++;
if (C==4) C4++;

printf ("\nA media de idade dos pesquisados eh %d.\n",MED/J);
printf ("\nO numero de alunos que ja cursou no minimo 4 semestres eh %d.\n",NS1);
printf ("\nO numero de alunos de Bacharelado eh %d.\n",TP1);
printf ("\nO numero de alunos de Tecnologico eh %d.\n",TP2);
printf ("\nO numero de alunos que atribuiu os conceitos Otimo eh %d.\n",C1);
printf ("\nO numero de alunos que atribuiu os conceitos Muito Bom eh %d.\n",C2);
printf ("\nO numero de alunos que atribuiu os conceitos Bom eh %d.\n",C3);
printf ("\nO numero de alunos que atribuiu os conceitos Regular eh %d.\n",C4);
system("pause");
}
}
