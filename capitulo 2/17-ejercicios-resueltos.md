
## 17.1. Reparando la nave
Durante una batalla espacial, la nave de Darth Méndez se averió. Desafortunadamente, su seguro intergaláctico no cubre siniestros ocurridos en batallas, por lo que deberá pagar el arreglo con sus ahorros. 

Se le pide realizar un algoritmo que usando las variables *costo_de_reparacion* (correspondiente a lo que cuesta arreglar los daños de la nave) y *ahorros* (correspondiente a los ahorros de Darth Mendez) y que imprima por pantalla si puede pagar el arreglo *(mensaje : Tranki que podemos arreglarla)* o no *(mensaje : Siamo fuori, no podemos volver)*. Los mensajes deben ser
exactamente esos.

```C
#include <stdio.h>
int main(){
    int cost_de_reparacion, ahorros;
    scanf ("%d", &costo_de_reparacion);
    scanf ("%d", &ahorros);

    if (ahorros >= costo_de_reparacion){
          printf ("Tranki que podemos arreglarla \n");
    }
    else{
          printf ("Siamo fuori, no podemos volver \n");
    }
    return 0;
}

```


## 17.2. El remis milenario
A falta de dinero, a Han Solo se le está dificultando mantener el Halcón Milenario en condiciones óptimas. Debido
a esto, decide usar dicha nave como taxi para llevar personas desde la cantina de Mos Eisley a distintos planetas.
Para empezar, decide que solo va a transportar gente a planetas especı́ficos y con tarifa fijas. 
Estos son: 

- Feluscia
(se identifica con ’F’) con una tarifa de $50.
- Coruscant (se identifica con ’C’) con una tarifa de $80.
- Bespin (se identifica con ’B’) con una tarifa de $120.

Han necesita que crees un algoritmo que reciba el planeta al que quiere ir su pasajero (utilizar la variable **destino**) e imprima por pantalla ”Su tarifa va a ser de N pesos” dependiendo del planeta al que quiera ir. 

En caso de que el planeta al que quiere ir no sea ninguno de los tres se deberá imprimir por pantalla ”No puedo llevarte a ese planeta porque no está en la lista” Los mensajes deben ser exactamente esos.

```C
#include <stdio.h>
int main (){
    char destino;
    scanf ("%c", &destino);

    switch(destino){
          case `F`
          printf("Su tarifa va a ser de 60 pesos");
          break;
          case `C`
          print("Su tarifa va a ser de 80 pesos");
          break;
          case `B`
          printf("Su tarifa va a ser de 120 pesos);
          break;
          default:
          printf ("No puedo llevarte a ese planeta porque no esta en la lista");
      }
    return 0;  
}

```


## 17.3. Modificando los Sables
A lo largo de múltiples batallas y entrenamientos, muchos stormtroopers sufrieron de ataques de epilepsia. Recientemente, un oficial de alto rango realizó un informe en el que demostró que los sables láser que NO son de color rojo eran los responsables de dichos ataques. Con este dato en mente, Darth Vader informó que todos los sables láser pertenecientes al imperio iban a ser modificados insertándoles un chip especial para cambiar su color a ROJO. Según lo establecido, los stormtroopers entraran de a 3 al cuarto de control de color de sables. 

Se pide realizar un algoritmo que: 
- usando las variables color sable 1, color sable 2 y color sable 3 que representan el color del sable (R: Rojo, V: verde), imprima por pantalla el texto: Se han cambiado N sables del color VERDE a ROJO
  - Por ejemplo, si el sable 1 y 2 son verdes, se debe imprimir: Se han cambiado 2 sables del color VERDE a ROJO
  - En caso de no haber ningún sable a modificar, se debe imprimir: Todos los sables son de color ROJO Los mensajes deben ser exactamente esos.

```C
#include <stdio.h>

const char VERDE = ’V ’;
const char ROJO = ’R ’;

int main () {
    char color_sable_1 , color_sable_2 , color_sable_3 ;

    int sables_cambiados=0;
    scanf ("%c", &color_sable_1);
    scanf ("%c", &color_sable_2);
    scanf ("%c", &color_sable_3);

    if (color_sable_1 == VERDE)
      sables_cambiados++;
    if (color_sable_2 == VERDE)
      sables_cambiados++;
    if (color_sable_3 == VERDE)
      sables_cambiados++;
    if (sables_cambiados!= 0)
      printf ("Se han cambiado %d sables del color VERDE a ROJO", sables_cambiados);
    else
      printf ("Todos los sables son de color ROJO");

    return 0;

```


## 17.4. Estableciendo Comunicacion
Debido a que el imperio cuenta con tecnologı́a de punta para interceptar las comunicaciones, los rebeldes decidieron usar unos viejos dispositivos de comunicación llamados Walkie-Talkie. Los rebeldes acordaron una frecuencia por la cual comunicarse (variable frecuencia deseada). Realizar un algoritmo que dado un Walkie-Talkie encendido con una frecuencia inicial (variable frecuencia inicial) lo sintonice con la frecuencia deseada e imprima por pantalla ”Después de N cambios de frecuencia, se logró sintonizar la correcta” Aclaraciones: La frecuencia inicial del Walkie-Talkie siempre es menor que la FRECUENCIA DESEADA. La frecuencia del Walkie-Talkie debe aumentarse de a intervalos de 0.1

```C
#include <stdio.h>

int main (){
          float frecuencia_dedseada, frecuencia_inicial, frecuencia_actual;
          scanf ("%f", &frecuencia_deseada);
          scanf ("%f", &frecuencia_inicial);

          int cambios_de_frecuencia=0;
          frecuencia_actual=frecuencia_inicial;

          while (frecuencia_actual<frecuencia_inicial){
                frecuencia_actual=(frecuencia_actual+0.1);
                cambios_de_frecuencia++;
          }
          printf("Despues de %d cambios de frecuencia, se logro sincronizar la correcta", cambios_de_frecuencia);
          return 0;
}

```




