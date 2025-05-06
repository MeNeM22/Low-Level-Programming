#include <stdio.h>

int main() {
   int opcion;
   printf("----------\n- Opcion 1\n---------\n- Opcion 2\n--------- \n- Opcion 3\n--------- \n- Salir\n---------\n Selecciona tu opcion:");
   scanf("%d",&opcion);
   switch (opcion)
   {
   case 1:
    printf("Esta en la 1 padre");
    break;
   case 2:
    printf("Segundo francia");
    break;
   case 3:
    printf("tercero los macacos");
    break;
   case 4:
   printf("adios");
    break;
   }
   return 0;
}
