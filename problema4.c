#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);
   
    if (num1 > num2) {
        printf("El primer número (%d) es MAYOR que el segundo (%d).\n", num1, num2);
    } else if (num2 > num1) {
        printf("El segundo número (%d) es MAYOR que el primero (%d).\n", num2, num1);
    } else {
      
        printf("Ambos números son IGUALES (%d).\n", num1);
    }

    return 0;
}
