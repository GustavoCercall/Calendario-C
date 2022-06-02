#include <stdio.h>
#include <stdlib.h>
 


	int main(int argc, char *argv[]) {
	
		int dia, mes, ano, ultimosDigAno, divi, chaveMes, numerochavesec, somaPassos, restodasemana ;

		printf("Digite o dia desejado :");
		scanf("%i", &dia);
		
		printf("Digite o mes desejado :");
		scanf("%i", &mes);

		printf("Digite o ano desejado :");
		scanf("%i", &ano);

		if (dia >=1  && dia <= 31 && mes >=1 && mes <=12 && ano >= 1800 && ano <=2199){

    
    		ultimosDigAno = ano%100; // passo 1
			divi = ultimosDigAno/4; // passo 2	
	
   			 switch(mes){   			
    
    			case 1 : // janeiro 
    				if (ano % 400 == 0){
					}
       				if (ano % 4 == 0 && ano % 100 !=0){
         			chaveMes = 0;	
	 				}else{
	 	  				chaveMes = 1;	
	 					}
				break;
				
				case 2 : // fevereiro
					if (ano % 400 == 0){					
					}
	   				if (ano % 4 == 0 && ano % 100 !=0){
	      				chaveMes = 3;
					}else{
		  				chaveMes = 4;
						}	  	
				break;
				
				case 3 : // março
        			chaveMes = 4;
				break;
	
				case 4 : // abril
	    			chaveMes = 0;
				break;
	
				case 5 : // maio
	    			chaveMes = 2;
				break;
	
				case 6 : // junho
	        		chaveMes = 5;
				break;
	
				case 7 : // julho
	        		chaveMes = 0;
				break;
	
				case 8 : // agosto
	    			chaveMes = 3;
				break;
	
				case 9 : // setembro
       				chaveMes = 6;    		
				break;
	
    			case 10 : // outubro
	    			chaveMes = 1;
				break;
	
				case 11 : // novembro
	    			chaveMes = 4;
				break;
	
				case 12 : // junho
	    			chaveMes = 6;
	              
			}
	
		if (ano >= 1800 && ano <= 1899){
			numerochavesec = 2;
		
		}else if (ano >= 1900 && ano <= 1999){
			numerochavesec = 0;
		
		}else if (ano >= 2000 && ano <= 2099){
			numerochavesec = 6;
		
		}else if (ano >= 2100 && ano <= 2199){
			numerochavesec = 4;
		}
	
		somaPassos = ultimosDigAno + divi + chaveMes + numerochavesec + dia;
	
		restodasemana = somaPassos % 7;
	
			switch(restodasemana){
			
	    		case 0 :
	    			printf("Sabado");
	   			 break;
	    
	    		case 1 :
	    			printf("Domingo");	
	    		break;
	    
	    		case 2 :
	    			printf("Segunda-feira");
	   			 break;
	    
	    		case 3 :
	    			printf("Terca-feira");
	   			 break;
	    
	    		case 4 :
	    			printf("Quarta-feira");
	    		break;
	    
	    		case 5 :
	    			printf("Quinta-feira");
	    		break;
	    
	    		case 6 :
	    			printf("Sexta-feira");
	    		break;
			}   
		}else{
			printf("\nData Invalida\n");
			printf("Digite uma data valida, dias entre 1 e 31, meses entre 1 e 12 e anos entre 1800 ate 2199!");
		}
	return 0;
	
	}


