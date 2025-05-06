#include <stdio.h>

int main() {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if (num%2 == 0){
    printf("%d es par",num);
    }else{
        printf("%d es impar",num);
    }
    
    return 0;
}
