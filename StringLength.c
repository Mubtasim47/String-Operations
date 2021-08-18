//length of a string

#include <stdio.h>

int main() {
    
    char str[100];
    
    printf("Enter a string:\n");
    gets(str);
    int len;
    for (len = 0; str[len] != '\0'; len++);
    printf("Length of the string: %d", len);
    
    return 0;
}
