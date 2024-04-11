#include <stdio.h>
#include <locale.h>

void cv(int vet[]);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int vet[7], i;
    for(i = 0; i < 7; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nVetor\n");
    for(i = 0; i < 7; i++){
        printf("%d \n", vet[i]);
    }
	return 0;
}
