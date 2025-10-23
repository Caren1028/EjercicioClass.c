#include <stdio.h>
#include <ctype.h> 
void detectar_vocal_switch(char c) {
    char minuscula = tolower(c); 

    printf("\n--- Usando SWITCH ---\n");
    switch (minuscula) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("'%c' es una VOCAL.\n", c);
            break;
        default:
            printf("'%c' NO es una vocal.\n", c);
    }
}
void detectar_vocal_if(char c) {
    char minuscula = tolower(c);
  
    printf("\n--- Usando IF ---\n");
    
    if (minuscula == 'a' || minuscula == 'e' || minuscula == 'i' || minuscula == 'o' || minuscula == 'u') {
        printf("'%c' es una VOCAL.\n", c);
    } else {
        printf("'%c' NO es una vocal.\n", c);
    }
}

int main() {
    char caracter;

    printf("Ingrese un carácter: ");
    scanf(" %c", &caracter); 
    
    detectar_vocal_switch(caracter);
    detectar_vocal_if(caracter);

    return 0;
}
