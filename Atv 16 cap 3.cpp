#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
float QTD,KG,D5,RES;

printf("\n*****CALCULADOR*****\n");

printf("\nInsira quantos Kg eh o saco de racao:\n");
scanf("%f",&KG);

printf("\nInsira quantas gramas cada gato consome por dia:\n");
scanf("%f",&QTD);

D5=(QTD/1000)*5;
RES=(KG-D5)*1000;

printf("\nSobrara %.2f gramas! \n",RES);
system("pause");
return(0);
}
