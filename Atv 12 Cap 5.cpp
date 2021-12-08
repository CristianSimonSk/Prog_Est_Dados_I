#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float N,I=0,M1=0,M2=0;

while (I<15){
I++;
printf("\n*****CALCULADOR*****\n");
printf("\nInsira um numero:\n");
scanf("%f",&N);
if (N<50) M1++;
if(N>50)M2++;
	
printf("\n%.0f numeros sao menores que 50.\n",M1);
printf("\n%.0f numeros sao maiores que 50.\n",M2);

}
system("pause");
}

