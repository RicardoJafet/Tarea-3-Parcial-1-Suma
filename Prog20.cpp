/*Autor: Ricardo Jafet Granados Chable, Realizado: 23/02/2022
    programa numero 20 en C: Suma de 50 numeros.
	*/
	
#include<stdio.h>

int main(){
	int n=0,i=0;
	printf("-------------------");
	printf("\nSuma de numeros");
	printf("\n-------------------");
	for(i=1; i<=50; i++){
		printf("\nNumero: %d",i);
		printf("\n___________________");
		n=i*(i+1)/2;
		
	}
	printf("\nLa suma de los primeros 50 numeros es: %d",n);
	
	
	
	
	return 0; 
}
