#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){

float CC,CF1,CF2,CF3,CF4,CF;
printf("\n*****CALCULADOR DE CUSTO DE VAICULO*****\n");
printf("\nInsira ocusto de compra:\n");
scanf("%f",&CC);
CF1=(CC*0.2);
CF2=(CC*0.45);
CF3=(CC*0.08);
CF4=(CF1+CF2+CF3);
CF=(CC+CF4);
printf("\nO custo final eh R$ %.0f.\n",CF);
system("pause");
}
