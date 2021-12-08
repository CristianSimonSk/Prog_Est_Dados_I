#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int I,C,F,ALEATORIO;
char ALEATORIO1;

printf("\n*****Tabela de valores de graus Centigrados e Fahrenheit :*****\n");
printf("\nPrecione qualquer tecla para continuar.\n");
scanf ("%d",&ALEATORIO);
ALEATORIO1=ALEATORIO;
fflush(stdin);
printf("\nCentigrados / Fahrenheit\n");
if (ALEATORIO==0 || ALEATORIO!=0){
	for(C=50; C<=150; C++){
	    if (F=(C*9)/5+32) printf ("\nC:%d.      /      F:%d.\n",C,F);
	}
}
system("pause");
}

