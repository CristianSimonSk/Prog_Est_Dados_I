#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
char L;

printf("\n*****VOGAL OU CONSOANTE*****\n");
printf("\nInsira uma letra:\n");
scanf("%c",&L);
if (L=='A'||L=='E'||L=='I'||L=='O'||L=='U') printf("\nA letra %c eh vogal!\n",L);
   else printf("\nA letra %c eh consoante!\n",L);
      
system("pause");
}



