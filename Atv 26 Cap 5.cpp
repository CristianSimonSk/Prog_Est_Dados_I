#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int I,X,Y,Z,ALEATORIO;
char ALEATORIO1;

printf("\n*****Solucoes inteiras para a equacao: 3x + 2y + 7z :*****\n");
printf("\nPrecione qualquer tecla para continuar.\n");
scanf ("%d",&ALEATORIO);
ALEATORIO1=ALEATORIO;
fflush(stdin);
printf("\nAs solucoes inteiras sao:\n");
if (ALEATORIO==0 || ALEATORIO!=0){
	for(X=0; X<=100; X++){
	    for(Y=0; Y<=100; Y++){
	    	for(Z=0; Z<=100; Z++){
	            if (3*X+2*Y+7*Z == 10) printf ("\n3*%d+2*%d+7*%d = 5\n",X*3,Y*2,Z*7);
}
}
}
}

system("pause");
}

