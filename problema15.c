#include <stdio.h>

int main() {
    int numero_carta;

    
    printf("Ingrese un número de carta (del 1 al 12): ");
    scanf("%d", &numero_carta);

    
    switch (numero_carta) {
        case 1:
            printf("As\n");
            break;
        case 10:
            printf("Sota\n");
            break;
        case 11:
            printf("Caballo\n");
            break;
        case 12:
            printf("Rey\n");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("No es as ni figura\n");
            break;
        default:
            
            printf("Este no es un número de una carta de la baraja española\n");
    }

    return 0;
}
