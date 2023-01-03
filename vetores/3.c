#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int impares (int aleatorios []){
	int soma=0;
	
	for (int i=0; i<15; i++){
		if ((aleatorios [i])%2!=0)
			soma = soma + aleatorios [i];
	}

	return soma;
}

int main (){

	int aleatorios [15], soma;
	
	srand (time (NULL));
	
	for (int i=0; i<15; i++){
		aleatorios [i] = rand ()%56;
		printf ("%d\n", aleatorios [i]);
	}
	
	soma = impares (aleatorios);
	
	printf ("A soma dos números ímpares é: %d\n", soma);
}
