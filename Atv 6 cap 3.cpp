#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <locale.h>

main(){
float N,A,S;
setlocale(LC_ALL , "portuguese");

printf("\n*****CALCULADOR*****\n");
printf("\nInsira um numero:\n");
scanf("%f",&N);
A=(N-1);
S=(N+1);
printf("\nO antecessor de %.0f � %.0f e o sucessor � %.0f.\n",N,A,S);
system("pause");
}
