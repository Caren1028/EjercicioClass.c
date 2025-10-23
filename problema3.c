#include <stdio.h>

int main() {
    int numero;
  
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
     
        printf("El número %d es PAR.\n", numero);

        if (numero % 3 == 0) {
            printf("Además, el número %d es múltiplo de 3. (3 * %d = %d)\n", numero, numero / 3, numero);
        } else {
            printf("El número %d NO es múltiplo de 3.\n", numero);
        }
    } else {
    
        printf("El número %d es IMPAR.\n", numero);
    }

    return 0;
}
