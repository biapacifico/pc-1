#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mostrar (int vetor []){
	printf ("\n");
	
	for (int i=0; i<15; i++){
		printf ("%d\n", vetor [i]);
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
	
	mostrar (alt);
}

int main (){

	int alt [15];
	
	srand (time (NULL));
	
	for (int i=0; i<15; i++){
		alt [i] = rand ()%36;
		printf ("%d\n", alt [i]);
	}
	
	ordem (alt);
}
