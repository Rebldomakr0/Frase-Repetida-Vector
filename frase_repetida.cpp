/*Leer una frase y determinar qué caracteres se encuentran repetidos, y cuántas veces aparece repetido cada carácter. 
Utilizar un vector con los caracteres que van apareciendo y otro correspondiente a la misma posición con el número de repeticiones.  */

#include <stdio.h>
#include <string.h>

void palabra(char frase[], int cont, int tam){
	printf("Escribe una frase: ");
	gets(frase);	
	tam=strlen(frase);
	printf("\nPor orden alfabetico \n");
	for(int i=65; i<=122; i++){
		for(int j=0; j<tam; j++){
			if(frase[j]==i){
			cont++;
		    }
		}
		if(cont==0){
		continue;
	    }
	    else{
		printf("El caracter %c se repite %d veces \n", i, cont);
		cont=0;
	    } 
	}
	}

int main(){
	char frase[100];
	int i, j, cont=0, tam;
	
	palabra(&frase[100],cont, tam);
	
	return 0;
}

	

