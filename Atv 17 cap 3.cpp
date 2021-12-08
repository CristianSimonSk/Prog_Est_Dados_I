#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float N,A,S;

printf("\n*****CALCULADOR*****\n");
printf("\nInsira um numero:\n");
scanf("%f",&N);
A=(N-1);
S=(N+1);
printf("\nO antecessor de %.0f eh %.0f e o sucessor eh %.0f.\n",N,A,S);
system("pause");
}
