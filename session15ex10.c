#include <stdio.h>  
#include <string.h>  

int main() {  
    char str[100];  
    int count[256] = {0};  /

    printf("Nhap vao mot chuoi: ");  
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {  
        if (str[i] >= 0 && str[i] < 256) {  
            count[(unsigned char)str[i]]++;  
        }  
    }  

    printf("Cac ky tu va so lan xuat hien:\n");  
    for (int i = 0; i < 256; i++) {  
        if (count[i] > 0) {  
            printf("'%c': %d lan\n", i, count[i]);  
        }  
    }  

    return 0;  
}
