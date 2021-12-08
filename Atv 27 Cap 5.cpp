#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float I,GRAOS=1,ALEATORIO;
char ALEATORIO1;

printf("\n*****Calculador de numero de graos:*****\n");
printf("\nPrecione qualquer tecla para continuar.\n");
scanf ("%f",&ALEATORIO);
ALEATORIO1=ALEATORIO;
fflush(stdin);
if (ALEATORIO==0 || ALEATORIO!=0){
	for(I=1; I<=64; I++){
	   GRAOS=GRAOS*2;
}
}
printf ("\nO numero total de graos eh %.0f.\n",GRAOS);
system("pause");
}
