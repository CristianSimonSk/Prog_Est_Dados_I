#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int I,V,A,B,K=0;

printf("\n*****CALCULADOR*****\n");
printf("\nInsira um valor e veja todos os dividores dele:\n");
scanf("%d",&V);
    printf("\nOs divisores de %d sao:\n",V);
	for(I=1; I<=V; I++){
	    if (V%I==0) printf ("%.d, ",I);
	}
	printf ("\n \n"); // Fiz só pra o "Pressione qualquer tecla para continuar" não ficar junto com os outros valores.
system("pause");
}

