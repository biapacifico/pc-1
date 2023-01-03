#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//terceiro maior valor do vetor
int maior (int alt []){
	int aux = alt [15], contador = 0;
	
	for (int i=15; i>=0; i--){
		if (aux != alt [i]){
		contador++;
		aux = alt [i];
			if (contador==3)
			return aux;
		}
	}
}

void ordem (int alt []){
	int aux;
	
	for (int i=0; i<15; i++){
		for (int j=14; j>i; j--){
			if (alt [j] < alt [j-1]){
				aux = alt [j];
				alt [j] = alt [j-1];
				alt [j-1] = aux;
			}
		}
	}
	
	maior (alt);
}

int main (){
	int res;

	int alt [15];
	
	srand (time (NULL));
	
	for (int i=0; i<15; i++){
		alt [i] = rand ()%36;
		printf ("%d ", alt [i]);
	}
	
	ordem (alt);

	printf ("\nO terceiro maior número é: %d\n", maior (alt));
}
