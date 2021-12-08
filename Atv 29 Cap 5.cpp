#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
float MED1,MED2,MEDIA1=0,MEDIA2=0,P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11,P12,I1,I2,I3,I4,I5,I6,I7,I8,I9,I10,I11,I12,J=1;
char PAIS;

while (J<=30){
    J++;
    printf("\nCALCULADOR DE MEDIAS DE TIMES\n");//Obs: Poderia ter feito um novo while dentro do while, mas achei q ficaria mais bonito quando lido assim.
    printf("\nInsira o pais particiante:\n");
    scanf("%c",&PAIS);
    fflush (stdin);	
		printf("\nInsira o peso e idade de cada atleta:\n");
		printf("\nATLETA1:\n");
		printf("\nPESO:\n");
		scanf("%f",&P1);
		printf("\nIDADE:\n");
		scanf("%f",&I1);
			printf("\nATLETA 2:\n");
		    printf("\nPESO:\n");
		    scanf("%f",&P2);
		    printf("\nIDADE:\n");
		    scanf("%f",&I2);
	   	        printf("\nATLETA 3:\n");
	            printf("\nPESO:\n");
	     	    scanf("%f",&P3);
	            printf("\nIDADE:\n");
	      	    scanf("%f",&I3);
	     	      	printf("\nATLETA 4:\n");
                    printf("\nPESO:\n");
    				scanf("%f",&P4);
    				printf("\nIDADE:\n");
    				scanf("%f",&I4);
    					printf("\nATLETA 5:\n");
    					printf("\nPESO:\n");
    					scanf("%f",&P5);
    					printf("\nIDADE:\n");
    					scanf("%f",&I5);
    						printf("\nATLETA 6:\n");
	    					printf("\nPESO:\n");
		    				scanf("%f",&P6);
			    			printf("\nIDADE:\n");
				    		scanf("%f",&I6);
					    		printf("\nATLETA 7:\n");
						    	printf("\nPESO:\n");
    							scanf("%f",&P7);
	    						printf("\nIDADE:\n");
		    					scanf("%f",&I7);
			    					printf("\nATLETA 8:\n");
				    				printf("\nPESO:\n");
					    			scanf("%f",&P8);
						    		printf("\nIDADE:\n");
							    	scanf("%f",&I8);
								    	printf("\nATLETA 9:\n");
    									printf("\nPESO:\n");
	    								scanf("%f",&P9);
		    							printf("\nIDADE:\n");
			    						scanf("%f",&I9);
				    						printf("\nATLETA 10:\n");
					    					printf("\nPESO:\n");
						    				scanf("%f",&P10);
							    			printf("\nIDADE:\n");
								    		scanf("%f",&I10);
									    		printf("\nATLETA 11:\n");
										        printf("\nPESO:\n");
    											scanf("%f",&P11);
	    										printf("\nIDADE:\n");
		    									scanf("%f",&I11);
			    									printf("\nATLETA 12:\n");
				    								printf("\nPESO:\n");
					    							scanf("%f",&P12);
						    						printf("\nIDADE:\n");
							    					scanf("%f",&I12);
MED1=(P1+P2+P3+P4+P5+P6+P7+P8+P9+P10+P11+P12)/12;
MEDIA1= MEDIA1+MED1;
MED2=(I1+I2+I3+I4+I5+I6+I7+I8+I9+I10+I11+I12)/12;
MEDIA2= MEDIA2+MED2;
printf ("\nA media de peso dos atletas do time eh %f e a media de idade eh %f.\n",MED1,MED2);
}
printf ("\nO peso medio de todos os atletas do campeonato eh %f.\n",MEDIA1/30);
printf ("\nA idade media de todos os atletas do campeonato eh %f.\n",MEDIA2/30);
system("pause");
}
