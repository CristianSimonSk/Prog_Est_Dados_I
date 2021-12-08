#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int I,S,ALEATORIO;
char ALEATORIO1;

printf("\n*****Numeros pares entre 100 e 200 e sua soma:*****\n");
printf("\nPrecione qualquer tecla para continuar.\n");
scanf ("%d",&ALEATORIO);
ALEATORIO1=ALEATORIO;
fflush(stdin);
printf("\nOs pares sao:\n");
if (ALEATORIO==0 || ALEATORIO!=0){
	for(I=100; I<=200; I++){
	    if (I%2==0) printf ("%.d,",I);
	    S=S+I;
	}
}
printf("\nA soma dos valores eh igual a %.d\n",S-1); // O -1 é porque qualquer tecla fica somado como +1!
system("pause");
}
