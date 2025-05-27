#include <stdio.h>

int main(){
    int arr[3];
    int sum = 0;
    int lenght =  sizeof(arr)/ sizeof(int);
    printf("Enter 3 numbers:");
    scanf("%d %d %d", &arr[0],&arr[1],&arr[2]);
    for (int i = 0; i < lenght;i++){ //sizeof(arr) = la cant de bytes en arr, cada int ocupa 4 bytes
        sum = sum + arr[i];
    }
    float average = (float)sum/lenght;
    printf("Your average is %f",average);
    return 0;
}

