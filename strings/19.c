#include <stdio.h>

//ordenar uma string em ordem alfabética
void ordenar (char string []){
    int aux, cont=0;

    for (int t=0; string[t]!=0; t++){
        cont++;
    }

    for (int i=0; i<cont; i++){
        for (int j=cont-1; j>i; j--){
            if (string [j] < string [j-1]){
                aux = string [j];
                string [j] = string [j-1];
                string [j-1] = aux;
            }
        }
    }

    printf ("%s", string);
}

int main (){

    char string [20];

    printf ("Digite o que quer ordenar: ");
    scanf ("%s", string);

    ordenar (string);
}