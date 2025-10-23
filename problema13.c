#include <stdio.h>
#include <math.h> 
int main() {
    int opcion;
    double base, altura, lado1, lado2, lado3; 
    double area;

    printf("CALCULO DE AREAS\n");
    printf("===========================\n");
    printf("1 - Calcular el área de un triángulo\n");
    printf("2 - Calcular el área de un trapecio\n");
    printf("3 - Calcular el área de un rectángulo\n");
    printf("---------------------------\n");
    
  
    printf("Seleccione una opción (1, 2 o 3): );
    scanf("%d", &opcion);

    
    switch (opcion) {
        case 1:
            
            printf("\n--- Área de un Triángulo ---\n");
            printf("Ingrese la base: ");
            scanf("%lf", &base);
            printf("Ingrese la altura: ");
            scanf("%lf", &altura);
            
            area = (base * altura) / 2.0;
            printf("El área del triángulo es: %.2lf unidades cuadradas.\n", area);
            break;

        case 2:
            
            printf("\n--- Área de un Trapecio ---\n");
            printf("Ingrese la Base Mayor: ");
            scanf("%lf", &lado1); 
            printf("Ingrese la Base Menor: ")
            printf("Ingrese la altura: ");
            scanf("%lf", &altura);
            
            area = ((lado1 + lado2) / 2.0) * altura;
            printf("El área del trapecio es: %.2lf unidades cuadradas.\n", area);
            break;

        case 3:
           
            printf("\n--- Área de un Rectángulo ---\n");
            printf("Ingrese la base: ");
            scanf("%lf", &base);
            printf("Ingrese la altura: ");
            scanf("%lf", &altura);
            
            area = base * altura;
            printf("El área del rectángulo es: %.2lf unidades cuadradas.\n", area);
            break;

        default:
            printf("\nOpción no válida. Por favor, seleccione 1, 2 o 3.\n");
            break;
    }

    return 0;
}
