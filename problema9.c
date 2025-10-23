#include <stdio.h>

int main() {
    int i;
    int numero;
    int menor; 
    printf("--- Encontrar el número menor ---\n");

 
    for (i = 1; i <= 5; i++) {
        printf("Ingrese el número %d de 5: ", i);
        scanf("%d", &numero);

       
        if (i == 1) {
            menor = numero;
        } else {
           
            if (numero < menor) {
                menor = numero; 
            }
        }
    }
    printf("\n**\n");
    printf("El número menor introducido es: %d\n", menor);
    printf("*\n");

    return 0;
}
