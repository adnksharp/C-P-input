# Fake input.py in C
```
Número: 12
12 ^ 2 = 144
```
Simulación de la función ```input``` de python en C. 

### ```printf```
Para simular el uso de la función **Input** de python en C, se utiliza la función **printf**  y **fgets** de C.

### ```py.h```
Al crear la libreria de C, a diferencia de la función **input** de python, creamos dos tipos de funciones:

- Una función que recibe una cadena de caracteres y devuelve un entero (```int-input```) **intin**.
- Otra función que recibe una cadena de caracteres y devuelve un puntero a una cadena de caracteres (```str-input```) **strin**.
