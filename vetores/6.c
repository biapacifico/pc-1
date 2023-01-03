#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int valor (int alt []){
	int sub, maior=0;
	
	for (int i=1; i<15; i++){
		sub = alt [i] - alt [i-1];
		
		if (sub>maior)
			maior = sub;
			
		if (sub<0)
			sub = sub*(-1);	
	}
	
	return sub;
}

int main (){

	int alt [15], resultado;
	
	srand (time (NULL));
	
	for (int i=0; i<15; i++){
		alt [i] = rand ()%36;
		printf ("%d\n", alt [i]);
	}
	
	resultado = valor (alt);
	
	printf ("A maior diferença é: %d\n", resultado);
}
