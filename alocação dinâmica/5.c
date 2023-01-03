#include <stdio.h>
#include <stdlib.h>

struct ficha {

    char nome [50];
    char data_nascimento [10];
    char cpf [11];

};

void exibir (struct ficha *ptrficha){

   printf ("Nome: %s", (*ptrficha).nome);
   printf ("\nData de nascimento: %s", (*ptrficha).data_nascimento);
   printf ("\nCPF: %s", (*ptrficha).cpf);
}

void preencher (struct ficha *ptrficha) {

    printf ("Digite seu nome: ");
    gets ((*ptrficha).nome);

    printf ("Digite sua data de nascimento: ");
    gets ((*ptrficha).data_nascimento);

    printf ("Digite seu CPF: ");
    gets ((*ptrficha).cpf);
}

int main (){

    struct ficha pessoa;
    struct ficha *ptrficha;
    ptrficha = &pessoa;

    preencher (ptrficha);
    exibir (ptrficha);
}