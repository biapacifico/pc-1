#include <stdio.h>

void copia (char origem [], char destino []){

    for (int i=0; origem [i]!=0; i++){
        destino [i] = origem [i];
    }

    printf ("O destino é: %s", origem);
}

int main (){

    char origem [20];
    printf ("Digite a origem: ");
    scanf ("%s", origem);

    char destino [20];

    copia (origem, destino);
}