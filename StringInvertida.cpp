#include <stdio.h>
#include <string.h>

int main()
{
    int tam;
    
    char str[20];
    
    scanf("%s",str);
 
    tam = strlen(str);
 
    for (int i = 0, j = tam - 1; i <= j; i++, j--) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
 
    printf("String Invertida: %s", str);
 
    return 0;
}
