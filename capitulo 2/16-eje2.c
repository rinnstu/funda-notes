/*ejemplo 2 : area y circunferencia*/
/*diseñar un algoritmo que calcule la longitud de la circunferencia y el área de un cı́rculo de radio dado.*/

#include <stdio.h>
int main () {
  float radio;
  float longitud;
  float area;
  float PI=3.1416;
  printf ("ingrese el valor del radio del cı́rculo");
  scanf ("%f",&radio );
  longitud=2* PI * radio;
  area = PI * radio * radio;
  printf ("La longitud del circulo es: %f", longitud);
  printf ("El area del circulo es: %f", area);
  return 0;
}
