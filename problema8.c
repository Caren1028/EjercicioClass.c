#include <stdio.h>

int main() {
    int numero;
    int digito_decenas;
    int digito_unidades;
    int suma_digitos;
    int digitos_pares = 0; 

  
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    if (numero > 9 && numero < 100) {
        printf("\nEl número %d es de dos cifras. Analizando...\n", numero);

       
         digito_unidades = numero % 10;        
         digito_decenas = numero / 10;

        suma_digitos = digito_decenas + digito_unidades;
        printf("Suma de sus dígitos: %d\n", suma_digitos);

      
    if (digito_decenas % 2 == 0) {
            digitos_pares++;
        }

        if (digito_unidades % 2 == 0) {
            digitos_pares++;
        }

        printf("Cantidad de dígitos pares: %d\n", digitos_pares);

    } else {
        printf("\nEl número %d NO es de dos cifras. Fin del programa.\n", numero);
    }

    return 0;
}
