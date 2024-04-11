#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50], i = 1;
  
   printf("Digite seu nome: ");
   gets(nome);
   while(nome[i] != '\0'){
	i++;
   }
   printf("A quantidade de caracteres do seu nome é: %i", i);
   return 0;
}
