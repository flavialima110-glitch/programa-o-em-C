// Online C compiler to run C program online
#include <stdio.h>

int main(){ 
   
    float nota;
    
    printf("digite a nota: ");
    scanf("%d", &nota);

    if (nota  >= 7) {
      printf("APROVADO\n");
    } else if (nota >= 5)
      printf("recuperaçao\n");
      else {
          printf ("reprovado\n");
      }
    
     

    return 0;
}
