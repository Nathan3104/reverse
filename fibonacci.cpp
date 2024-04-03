#include <stdio.h>

int main(){
    
    int x, y, num, i, aux;
    
    scanf("%i",&num);
    
    x = 0;
    y = 1;
    
    while (aux<num){
        aux = x + y;
        x = y;
        y = aux;
    }
    
    if (aux == num) {
        printf("%i pertence a sequencia", num);
    }
    else {
        
        printf("%i nao pertence a sequencia", num);
    }
    return num;
}
