#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50], i = 1;
    /*for(i = 0; i < 7; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nVetor\n");
    for(i = 0; i < 7; i++){
        printf("%d \n", vet[i]);
    }
	return 0;
}*/
		printf("Digite seu nome: ");
		gets(nome);
		while(nome[i] != '\0'){
			i++;
		}
		printf("A quantidade de caracteres do seu nome é: %i", i);
		return 0;
}