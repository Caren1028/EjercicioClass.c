#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("--- Verificación de Código de Acceso ---\n");
    printf("Ingrese el primer número (1-9): ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número (1-9): ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número (1-9): ");
    scanf("%d", &num3);

 
    if (num1 == 1 && num2 == 2 && num3 == 3) {
        
        printf("\n*\n");
        printf("ACCESO PERMITIDO\n");
        printf("*\n");
    } else {
       
        printf("\nAcceso denegado. Código incorrecto.\n");
    }

    return 0;
}
