#include <stdio.h>

int caracteres (char quantidade []){
	int contador=0;
	
	for (int i=0; quantidade [i]!=0; i++){
		contador ++;
	}
	
	return contador;
}

int main (){
	int resultado;
	
	char quantidade [50];
	
	printf ("Digite: ");
	scanf ("%s", quantidade);
	
	resultado = caracteres (quantidade);
	
	printf ("A quantidade de caracteres é: %d\n", resultado);
}
