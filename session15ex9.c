#include <stdio.h>  
#include <string.h>  

void removeCharacter(char *str, char charToRemove) {  
    int i, j = 0;  
    int len = strlen(str);  
    for (i = 0; i < len; i++) {  
        if (str[i] != charToRemove) {  
            str[j++] = str[i];  
        }  
    }  
    str[j] = '\0';  
}  

int main() {  
    char str[100];  
    char charToRemove;  

    strcpy(str, "Hello, World!");  
    printf("Chuan ban dau: %s\n", str);  

    printf("Nhap vao ky tu ban muon xoa: ");  
    scanf(" %c", &charToRemove);  

    removeCharacter(str, charToRemove);  
    
    printf("Chuan sau khi xoa ky tu '%c': %s\n", charToRemove, str);  

    return 0;  
}
