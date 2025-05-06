#include <stdio.h>

int main(){
    char nombre[10];
    int edad;
    printf("Ingrese su nombre y edad: ");
    scanf("%s %d", nombre, &edad);
    printf("Su nombre es: %s \n", nombre);
    printf("Su edad es: %d \n", edad);
    return 0;
}