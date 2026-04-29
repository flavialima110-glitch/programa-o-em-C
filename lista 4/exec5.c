// 3. Leia 5 numeros e calcule a soma apenas dos posivitos.
#include <stdio.h>

int main() {
    int numero ,total = 0, positivos = 0;
    printf("Informe o numero:\n");
        scanf("%d" , &numero);
        while (numero != 0) {
            total++;
          if (numero > 0) {
            positivos++;
        }
    printf("informe o numero; \n");
    scanf("%d", &numero);
}
printf("total; %d\n", total);
printf("positivos; %d\n", positivos);
    return 0;
}