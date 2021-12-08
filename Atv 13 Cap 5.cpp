#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
int I,A,B,K=0;

printf("\n*****CALCULADOR*****\n");
while (K<5){
	K++;
    printf("\nInsira dois valores (A e B) sendo que A deve ser maior que B:\n");
    printf("\nA:\n");
    scanf("%d",&A);
    printf("\nB:\n");
    scanf("%d",&B); 
    printf("\nOs pares sao:\n");
	for(I=A; I<=B; I++){
	    if (I%2==0) printf ("%.d, ",I);
	}
}
system("pause");
}

