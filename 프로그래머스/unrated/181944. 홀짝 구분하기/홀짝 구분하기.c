#include <stdio.h>

int main(void) {
    int a;
    int b;
    int i;
    scanf("%d", &a);
    if(a%2 == 0){
        printf("%d is even", a);
    }
    else if(a%2 == 1){
        printf("%d is odd", a);
    }
    
    
    return 0;
}