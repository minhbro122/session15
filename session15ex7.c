#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[] = "andept123";
    int size = strlen(text);
    int count = 0;
    int count1 = 0;

    for (int i = 0; i < size; i++) {
        if (isalpha(text[i])) {
            count++;
        }
    }
    printf("Chuoi tren co %d chu cai.\n", count);

    for (int i = 0; i < size; i++) {
        if (isdigit(text[i])) {
            count1++;
        }
    }
    printf("Chuoi tren co %d chu so.\n", count1);

    return 0;
}
