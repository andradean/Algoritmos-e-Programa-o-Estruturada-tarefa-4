#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
char nome [40];
char endereco [50];
char telefone [15];

printf("digite o seu nome:\n");
fgets(nome,40,stdin);

printf("digite o seu endereco:\n");
fgets(endereco,50,stdin);

printf("digite o seu telefone:\n");
fgets(telefone,15,stdin);

printf("Nome: %s\nEndereco: %s\nTelefone: %s", nome,endereco,telefone);




};
