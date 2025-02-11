# 16. Algunos ejemplos
En esta seccion se muestran algunos ejemplos de programas que contienen entrada y salida de datos. Ademas se presentan algunos ejemplos basicos en los que se utilizan tambien las estructuras de control.

## 16.1. Entrada y salida de datos con formato

### Ejemplo 1: lectura de un valor numerico por teclado
En este ejemplo se define una variable de tipo entera a la cual se le asigna un valor entero ingresado por teclado. Posteriormente se muestra el contenido de la variable por la salida estándar.

```c
#include <stdio.h>
int main () {
    int mi_variable;
    printf ("ingrese un número entero: "); // escritura
    scanf ("%d",&mi_variable );  // lectura
    printf ("%d",mi_variable);
    return 0;
}
```
---
### Ejemplo 2: area y circunferencia
Diseñar un algoritmo que calcule la longitud de la circunferencia y el area de un circulo de radio dado.

```c
#include <stdio.h>
int main ()
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
```

## 16.2. Ejemplos varios

### Problema 1 : Se ingresa un texto por teclado, caracter a caracter, y se desea saber cuantas letras posee el texto.

**Análisis del problema:** Muchas veces realizar un buen análisis puede ser determinante para la resolución del problema. El enunciado de este problema suele llevar a las personas a cree que el texto debe ser almacenado completamente en una variable. Teniendo en cuenta los tipos de datos vistos hasta el momento, serı́a imposible  de solucionar, pues no se ha visto aún, la forma de almacenar un texto entero en una variable. Aquı́ es donde una correcta interpretación del problema nos lleva a una solución simple y elegante.

- ¿Cómo se ingresa el texto? Caracter a caracter, por ende es necesario guardar en un caracter cada una de los simbolos del texto.
- ¿En algún lado del enunciado dice que el texto debe ser almacenado completo? No

```c
#include <stdio.h>
int main () {
    const char FIN = `@`;

    char letra = `.`;
    int cantidad =0;

    printf ("Ingrese un texto por letra y termine con arroba\n");

    while (letra!=FIN) {
        if ( (letra<= `A` && letra >= `Z`) || (letra<=`a`&& letra >= `z`));
        cantidad++;
        letra=getchar();
}
    printf "hay %d letras ingresadas \n", cantidad);
    return 0;
}

```


### Problema 2 : Se ingresa un texto por teclado, caracer a caracter, y se desea saber cuantas letras posee el texto

**Analisis del problema:** En ningún lugar menciona que el texto es guardado, solo se cuentan los caracteres. Con saber cuantas letras del código ascii se ingresaron el problema estarı́a resuelto.

```c
# include < stdio .h >

int main () {
    const char FIN = ’@ ’;

    char letra = ’. ’;
    int cantidad =0;

    printf ("Ingrese un texto letra por letra y termine con arroba\n");

    while (letra != FIN) {
        if ((letra <= ’A ’ && letra >= ’Z ’) || ( letra <= ’a ’ && letra >= ’z’))
            cantidad ++;
        letra = getchar () ;
}

    printf ("hay %d letras ingresadas \n", cantidad) ;
    return 0;
}
```











