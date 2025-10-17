#include <stdio.h>
#include <math.h>

void main()
{
  int num1, num2;

  printf("Escribe el primer numero:  /n");
  scanf("%d", &num1);
  printf("Escribe el segundo numero: /n");
  scanf("%d", num2);

  if(num1 % num2 ==0)
{
  printf("El numero es divisible /n");
}
else
{
  printf("El numero no es divisible 7n");
}

}
