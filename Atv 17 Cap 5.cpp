#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int I,S,ALEATORIO,M;
char ALEATORIO1;

printf("\n*****Numeros pares entre 13 e 73 e sua media:*****\n");
printf("\nPrecione qualquer tecla para continuar.\n");
scanf ("%d",&ALEATORIO);
ALEATORIO1=ALEATORIO;
fflush(stdin);
printf("\nOs pares sao:\n");
if (ALEATORIO==0 || ALEATORIO!=0){
	for(I=13; I<=73; I++){
	    if (I%2==0) printf ("%.d, ",I);
	    S=S+I;
	    M++;
	}
}
printf("\nA media dos valores eh igual a %.d\n",S/M);
system("pause");
}

