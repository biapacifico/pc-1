#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void liberar_vetor (int *vetor){

    free (vetor);
}

void exibir_vetor (int *vetor, int n){

    for (int i=0; i<n; i++){
        printf ("%i ", vetor [i]);
    }
}

int criar_vetor (int *vetor){
    int n;

    printf ("Digite o tamanho do vetor: ");
    scanf ("%i", &n);

    srand (time (NULL));

    vetor = (int*) realloc (vetor, n*sizeof (int));

    for (int i=0; i<n; i++){
        vetor [i] = rand ()%36;
    }

    return n;
}

int main (){
    int *vetor, n;

    vetor = (int*) malloc (1*sizeof(int));

    n = criar_vetor (vetor);
    exibir_vetor (vetor, n);
    liberar_vetor (vetor);
}