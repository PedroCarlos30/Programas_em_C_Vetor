#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int v[10], i, maior;
    for(i = 0; i < 10; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }
    maior = v[0];
    printf("\nVetor\n");
    for(i = 1; i < 10; i++){
        if(v[i] > maior){
			maior = v[i];
		}
    }
    printf("O maior valor é: %d", maior);
	return 0;
}
