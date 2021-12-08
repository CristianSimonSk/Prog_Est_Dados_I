#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float P=1;
int I,ALEATORIO;
char ALEATORIO1;

printf("\n*****Numeros impares entre 5 e 30 e seu produto:*****\n");
printf("\nPrecione qualquer tecla para continuar.\n");
scanf ("%d",&ALEATORIO);
ALEATORIO1=ALEATORIO;
fflush(stdin);
printf("\nOs impares sao:\n");
if (ALEATORIO==0 || ALEATORIO!=0){
	for(I=5; I<=30; I++){
	    if (I%2!=0) printf("%.d,",I);
		P=P*I;
	}
}
printf("\nO produto eh igual a %.f\n",P);
system("pause");
}
