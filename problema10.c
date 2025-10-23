#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número entero: ");
    scanf("%d", &num3);

    printf("\nLos números ordenados de mayor a menor son: ");

    /
    if (num1 >= num2 && num1 >= num3) {
        printf("%d, ", num1);
        if (num2 >= num3) {
            printf("%d, %d\n", num2, num3); 
        } else {
            printf("%d, %d\n", num3, num2); 
        }
    }
    
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d, ", num2);
        if (num1 >= num3) {
            printf("%d, %d\n", num1, num3); 3
        } else {
            printf("%d, %d\n", num3, num1); 
        }
    }
   
    else {
        printf("%d, ", num3);
        if (num1 >= num2) {
            printf("%d, %d\n", num1, num2); 
        } else {
            printf("%d, %d\n", num2, num1); 
        }
    }

    return 0;
}
