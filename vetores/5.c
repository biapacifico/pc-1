#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int valor (int aleatorios []){
	int maior = aleatorios [0];
	
	for (int i=0; i<15; i++){
		if (aleatorios [i]>maior)
			maior = aleatorios [i];
	}
	
	return maior;
}

int main (){

	int aleatorios [15], resultado;
	
	srand (time (NULL));
	
	for (int i=0; i<15; i++){
		aleatorios [i] = rand ()%26;
		printf ("%d\n", aleatorios [i]);
	}
	
	resultado = valor (aleatorios);
	
	printf ("O maior valor do vetor é: %d\n", resultado);
}
