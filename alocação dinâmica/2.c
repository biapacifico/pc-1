#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int preencher (int *vetor, int n){
    int n2, total;

    srand (time (NULL));

    for (int i=0; i<n; i++){
        vetor [i] = rand ()%56;
        printf ("%i ", vetor [i]);
    }

    printf ("\nQuantos elementos a mais você quer? ");
    scanf ("%i", &n2);
    
    total = n + n2;
    vetor = (int*) realloc (vetor, total*sizeof(int));

    for (int j=n; j<total; j++){
        vetor [j] = rand ()%56;
    }

    return total;
}

int main (){
    int n, total, *vetor;

    printf ("Digite o tamanho do vetor: ");
    scanf ("%i", &n);

    vetor = (int*) malloc (n*sizeof (int));

    total = preencher (vetor, n);

    for (int i=0; i<total; i++){
        printf ("%i ", vetor [i]);
    }
}