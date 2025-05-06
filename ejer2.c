#include <stdio.h>
int mayor(int *arr){
    int mayor = arr[0];
    int lenght = sizeof(arr) / sizeof(int);
    for (int i = 0; i < lenght; i++){
        if (arr[i] > mayor){
            mayor = arr[i];
        }
    }
    return mayor;
}
int main(){
    int lista[]={1,2,3,4,5,10,7,8,9,6};
    int result = mayor(lista);
    printf("El num mayor es %d",result);
    return 0;
}

