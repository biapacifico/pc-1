#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float max (float vetor [], int n){
    int aux = vetor [0];

    for (int i=0; i<n; i++){
        if (vetor [i] > aux){
            aux = vetor [i];
        }
    }

    return aux;
} 

int main (){
    int n, res;

    printf ("Insira um valor N menor que 10: ");
    scanf ("%d", &n);

    srand (time (NULL));

    float vetor [10];

    for (int i=0; i<10; i++){
        vetor [i] = rand ()%16;
        printf ("%.1f ", vetor [i]);
    }

    res = max (vetor, n);

    printf ("\nO maior valor é: %d\n", res);
}