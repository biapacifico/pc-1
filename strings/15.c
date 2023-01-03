#include <stdio.h>

void copia (char origem [], char destino [], int n){

    for (int i=0; i<n; i++){
        destino [i] = origem [i];
    }

    printf ("O destino é: %s", destino);
}

int main (){
    int n;

    char origem [20];
    printf ("Digite a origem: ");
    scanf ("%s", origem);

    printf ("Digite o número de n: ");
    scanf ("%d", &n);

    char destino [20];

    copia (origem, destino, n);
}