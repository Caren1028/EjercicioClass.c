#include <stdio.h>

#define JORNADA_NORMAL 40 // Horas normales
#define LIMITE_EXTRA_SIMPLE 50 // Límite a partir del cual el pago es doble

int main() {
    double horas_trabajadas;
    double precio_por_hora;
    double salario_total;
    double salario_normal;
    double salario_extra_simple = 0.0;
    double salario_extra_doble = 0.0;

    
    printf("--- Calculadora de Salario Semanal ---\n");
    printf("Ingrese las horas totales trabajadas esta semana: ");
    scanf("%lf", &horas_trabajadas);

    printf("Ingrese el precio cobrado por hora normal (Euros): ");
    scanf("%lf", &precio_por_hora);

    
    double tarifa_extra_simple = precio_por_hora * 1.50; 
    double tarifa_extra_doble = precio_por_hora * 2.00;  
    salario_normal = JORNADA_NORMAL * precio_por_hora;

    if (horas_trabajadas <= JORNADA_NO
        salario_total = horas_trabajadas * precio_por_hora;
    } else if (horas_trabajadas > JORNADA_NORMAL && horas_trabajadas <= LIMITE_EXTRA_SIMPLE) {
        
        double horas_extra = horas_trabajadas - JORNADA_NORMAL;
        salario_extra_simple = horas_extra * tarifa_extra_simple;
        
        salario_total = salario_normal + salario_extra_simple;

    } else {
        
        double horas_extra_simples_fijas = LIMITE_EXTRA_SIMPLE - JORNADA_NORMAL;
        salario_extra_simple = horas_extra_simples_fijas * tarifa_extra_simple;
        
        
        double horas_extra_dobles = horas_trabajadas - LIMITE_EXTRA_SIMPLE;
        salario_extra_doble = horas_extra_dobles * tarifa_extra_doble;
        
        salario_total = salario_normal + salario_extra_simple + salario_extra_doble;
    }

   
    printf("\n--- Resumen del Salario ---\n");
    printf("Salario por horas normales (hasta %.0lfh): %.2lf Euros\n", (double)JORNADA_NORMAL, salario_normal);
    
    
    if (salario_extra_simple > 0) {
        printf("Salario por horas extra (x1.5):          %.2lf Euros\n", salario_extra_simple);
    }
    if (salario_extra_doble > 0) {
        printf("Salario por horas extra (x2.0):          %.2lf Euros\n", salario_extra_doble);
    }
    
    printf("======================================\n");
    printf("SALARIO SEMANAL TOTAL:               %2lf Euros\n", salario_total);
    printf("======================================\n");

    return 0;
}
