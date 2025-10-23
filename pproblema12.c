#include <stdio.h>

int main() {
    int dia;

    printf("Ingrese un número del 1 al 7 para ver el día de la semana: ");
    scanf("%d", &dia);
    printf("\n");
    
    switch (dia) {
        case 1:
            printf("El día correspondiente es Lunes.\n");
            break;
        case 2:
            printf("El día correspondiente es Martes.\n");
            break;
        case 3:
            printf("El día correspondiente es Miércoles.\n");
            break;
        case 4:
            printf("El día correspondiente es Jueves.\n");
            break;
        case 5:
            printf("El día correspondiente es Viernes.\n");
            break;
        case 6:
            printf("El día correspondiente es Sábado.\n");
            break;
        case 7:
            printf("El día correspondiente es Domingo.\n");
            break;
        default:
            printf("Error: Número ingresado fuera del rango (1 a 7).\n");
    }

    return 0;
}
