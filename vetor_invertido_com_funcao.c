#include <stdio.h>
#include <locale.h>

void cv(int vet[]);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int vet[10], i;
    for(i = 0; i < 10; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vet[i + 1]);
    }
    printf("\nVetor\n");
    for(i = 0; i < 10; i++){
        printf("%d \n", vet[i]);
    }
    printf("O vetor Inverso\n" );
	cv(vet);
	return 0;
}

void cv(int vet[])
{
	for(int i = 9; i >= 0; i--)
	{
		printf("%d \n", vet[i]);
	}
}