#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int D1,D2,ALEATORIO;
char ALEATORIO1;

printf("\n*****Calculador de possibilidades de dois dados serem jogados com soma de 7:*****\n");
printf("\nPrecione qualquer tecla para continuar.\n");
scanf ("%d",&ALEATORIO);
ALEATORIO1=ALEATORIO;
fflush(stdin);
if (ALEATORIO==0 || ALEATORIO!=0){
printf ("\nAs possibilidades sao:\n");
	for(D1=1; D1<=6; D1++){
		for(D2=1; D2<=64; D2++){
			if (D1+D2 == 7) printf ("\n%d e %d\n ",D1,D2);
	   
}
}
}
system("pause");
}

