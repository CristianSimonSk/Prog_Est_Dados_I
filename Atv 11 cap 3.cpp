#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
float TG,MED,DIST,LIT,TEMP;

printf("\n*****CALCULADOR PARA VIAGENS*****\n");

printf("\nInsira o tempo (em h) gasto para viagem:\n");
scanf("%f",&TG);

printf("\nInsira a media (em KM/h) de velocidade feita durante o percurso:\n");
scanf("%f",&MED);

DIST= (MED*TG);
LIT=(DIST/12);
TEMP=(TG*60);

printf("\nCom %.2f litros de combustivel, voce percorreu %.2f quilometros, a %.2f KM/H em cerca de %.2f minutos.\n",LIT,DIST,MED,TEMP);
system("pause");
return(0);
}

