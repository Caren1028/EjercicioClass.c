#include <stdio.h>


#define PRECIO_BASE 7.0

int main() {
    int edad;
    double precio_final = PRECIO_BASE; 

    
    printf("Bienvenido al calculador de precios de entradas de cine.\n");
    printf("Ingrese su edad (en años): ");
    scanf("%d", &edad);

   
    if (edad < 5) {
       
        precio_final = PRECIO_BASE * (1.0 - 0.60);
        printf("\n¡Genial! Por tener menos de 5 años, tienes un 60%% de descuento.\n");
    } else if (edad > 60) {
       
        precio_final = PRECIO_BASE * (1.0 - 0.55);
        printf("\n¡Excelente! Por ser mayor de 60 años, tienes un 55%% de descuento.\n");
    } else {
       
        printf("\nSu precio es el estándar.\n");
    }
    
    printf("----------------------------------------\n");
    printf("Precio base de la entrada: %.2f Euros\n", PRECIO_BASE);
    printf("Precio final a pagar:      %.2f Euros\n", precio_final);
    printf("----------------------------------------\n");

    return 0;
}
