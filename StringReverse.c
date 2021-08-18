//Reverse a given string

#include <stdio.h>

int main() {

    char str[50], revStr[50];

    printf("Enter a string:\n");
    gets(str);
    int len;
    for (len = 0; str[len] != '\0'; len++);
    int j = len - 1;
    for (int i = 0; i < len; i++)
        revStr[i] = str[j--];
    revStr[len] = '\0';
    printf("String after reverse: ");
    puts(revStr);

    return 0;
    
}
