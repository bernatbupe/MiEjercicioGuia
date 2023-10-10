#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ( int argc, char *argv[]) {
    char peticion[100];
    char respuesta[100];
    strcpy (peticion, "Miguel/47/Juan/Maria/22/Marcos/19");
    char nombre[20];
    int edad;
    char *p = strtok(peticion, "/");

    while (p != NULL){
        strcpy (nombre, p);
        p = strtok (NULL, "/");
        edad = atoi(p);

        if (edad > 18)
            sprintf (respuesta, "%s%s*%d-",respuesta, nombre, edad); //Esto sirve para acumular sobre la respuesta, %s primero es el string previo

        p = strtok (NULL, "/");
    }
    respuesta [strlen (respuesta) -1] = '\0' //De esta manera eliminamos el guión final
    printf ("Resultado: %s \n", respuesta);
}