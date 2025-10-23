#include <stdio.h>

int main() {
    double x1, y1; 
    double x2, y2; /
    double pendiente;
    double numerador;
    double denominador;

   
    printf("--- Calculo de la Pendiente (m) ---\n");
    
    printf("Ingrese la coordenada x del Punto 1 (x1): ");
    scanf("%lf", &x1);
    printf("Ingrese la coordenada y del Punto 1 (y1): ");
    scanf("%lf", &y1);

    printf("\nIngrese la coordenada x del Punto 2 (x2): ");
    scanf("%lf", &x2);
    printf("Ingrese la coordenada y del Punto 2 (y2): ");
    scanf("%lf", &y2);

    
    numerador = y2 - y1;
    denominador = x2 - x1;

   
    if (denominador == 0) {
        
        printf("\n============================================\n");
        printf("ADVERTENCIA: Los puntos introducidos forman una recta vertical.\n");
        printf("El denominador (x2 - x1) es cero.\n");
        printf("La pendiente es INDEFINIDA.\n");
        printf("============================================\n");
    } else {
       
        pendiente = numerador / denominador;
        
        printf("\n============================================\n");
        printf("Punto 1: (%.2lf, %.2lf)\n", x1, y1);
        printf("Punto 2: (%.2lf, %.2lf)\n", x2, y2);
        printf("La pendiente (m) de la recta es: %.4lf\n", pendiente);
        printf("============================================\n");
    }

    return 0;
}
