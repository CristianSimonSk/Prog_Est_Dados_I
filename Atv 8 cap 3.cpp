#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float v1,v2,v3,v4,v,arit,harm,vm,geom;

printf("\n*****CALCULADOR*****\n");
printf("\nInsira quatro valores:\n");
scanf("%f%f%f%f",&v1,&v2,&v3,&v4);
v=(v1+v2+v3+v4);
arit=(v/4);
harm=(4/v);
vm=(v1*v2*v3*v4);
geom=sqrt (vm);
printf("\nA media aritmetica eh %.0f. A harmonica eh %.2f e a geometrica eh %.0f.\n",arit,harm,geom);
system("pause");
}
