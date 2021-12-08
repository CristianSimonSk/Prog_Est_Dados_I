#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
float V1, V2, V3, V4, V, ARIT, HARM, VM, GEOM;

printf("\n*****CALCULADOR*****\n");

printf("\nInsira quatro valores:\n");
scanf("%f%f%f%f",&V1,&V2,&V3,&V4);

V=V1+V2+V3+V4;
ARIT=V/4;
HARM=4/V;
VM=V1*V2*V3*V4;
GEOM=sqrt(VM);

printf("\nA media aritmetica eh %.0f. A harmonica eh %.2f e a geometrica eh %.0f.\n",ARIT,HARM,GEOM);
system("pause");
return(0);
}
