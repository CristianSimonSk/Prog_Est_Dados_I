#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float N,I=0,M1=0,M2=0,M3=0,M4=0;

while (I<10){
I++;
printf("\n*****CALCULADOR*****\n");
printf("\nInsira um numero:\n");
scanf("%f",&N);
if (N>0) M1++;
if (N<0) M2++;
if (N>0) M3=M3+N;	
if (N<0) M4=M4+N;	
printf("\n%.0f numeros sao positivos e totalizam %.0f.\n",M1,M3);
printf("\n%.0f numeros sao negativos e totalizam %.0f.\n",M2,M4);

}
system("pause");
}


