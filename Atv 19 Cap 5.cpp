#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float N,I=0,M1=0,M2=0;

while (I<10){
I++;
printf("\n*****CALCULADOR*****\n");
printf("\nInsira um valor:\n");
scanf("%f",&N);
if (N>10 && N<20) M1++;
else M2++;	
printf("\n%.0f estao no intervalo de [10...20].\n",M1);
printf("\n%.0f  nao estao no intervalo de [10...20] \n",M2);
}
system("pause");
}

