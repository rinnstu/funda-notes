/* ejemplo 1: lectura de un valor numerico por teclado*/

/*en este ejemplo se define una variable de tipo entera a la cual se le asigna un valor entero ingresado por teclado.
Posteriormente se muestra el contenido de la variable por la salida estándar.*/

#include <stdio.h>
int main () {
    int mi_variable ;

/* declaracion de la variable */
/* recordar que antes de un scanf () siempre va un printf () */

    printf ( " ingrese un número entero : " ) ; // escritura
    scanf ( " %d " ,& mi_variable ) ;  // lectura
    printf ( " %d ", mi_variable);
    return 0;
}