#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pares (int aleatorios []){
	int soma=0;
	
	for (int i=0; i<15; i++){ 
		if ((aleatorios [i])%2==0)
			soma++;
	}

	return soma;
}

int main (){
	int soma;
	
	srand (time(NULL));

	int aleatorios [15];

	for (int i=0; i<15; i++){
		aleatorios [i] = rand ()%56;
		printf ("%d\n", aleatorios [i]);
	}
	
	soma = pares (aleatorios);
	
	printf ("A quantidade de números pares é: %d\n", soma);
}
