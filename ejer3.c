#include <stdio.h>
int menor(int *arr, int lenght){
    int menor = arr[0];
    for (int i = 1; i < lenght; i++){
        if (arr[i] < menor){
           menor = arr[i];
        }
    }
    return menor;
}
int main(){
    int lista[]={9,8,6,5,4,3,1,-1};
    int result = menor(lista,8);
    printf("El num menor es %d",result);
    return 0;
}

