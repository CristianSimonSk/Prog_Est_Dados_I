#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float D,V;

printf("\n*****Calculador de Passagem*****\n");
printf("\nInsira o a regiao de destino:\n");
printf("\n(1)Norte:\n");
printf("\n(2)Nordeste\n");
printf("\n(3)Centro-Oeste\n");
printf("\n(4)Sul\n");
scanf("%f",&D);
printf("\nInsira o tipo de passagem que voce deseja:\n");
printf("\n(1)Ida\n");
printf("\n(2)Ida e Volta\n");
scanf("%f",&V);
if (D==1&&V==1) printf("\nO valor da compra eh R$500,00\n");
else 
   if (D==1&&V==2) printf("\nO valor da compra eh R$900,00\n");
   else
       if (D==2&&V==1) printf("\nO valor da compra eh R$350,00\n");
       else 
	       if (D==2&&V==2) printf("\nO valor da compra eh R$650,00\n");
           else 
               if (D==3&&V==1) printf("\nO valor da compra eh R$350,00\n");
               else 
                   if (D==3&&V==2) printf("\nO valor da compra eh R$600,00\n");
                   else 
                       if (D==4&&V==1) printf("\nO valor da compra eh R$300,00\n");
                       else 
                           if (D==4&&V==2) printf("\nO valor da compra eh R$550,00\n"); 
system("pause");
}

