#include <stdio.h>

int imprime_sobrenome (char nome_completo []){
    int cont=0, cont2=0;
    
    for (int i=0; nome_completo [i]!=0; i++){
        cont++;
    }

    for (int j=cont-1; nome_completo [j]!=' '; j--){
        cont2++;
    }

    printf ("%s\n", &nome_completo [cont-cont2]);
}

int main (){

    char nome_completo [50];
    printf ("Digite seu nome completo: ");
    gets (nome_completo);

    imprime_sobrenome (nome_completo);
}