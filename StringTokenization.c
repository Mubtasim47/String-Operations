//tokenization of a string

#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "We are Studying Compiler Design", *token;

    token = strtok(str, " ");
    printf("%s\n", token);
    token = strtok(NULL, " ");
    printf("%s\n", token);
    token = strtok(NULL, " ");
    printf("%s\n", token);
    token = strtok(NULL, " ");
    printf("%s\n", token);
    token = strtok(NULL, " ");
    printf("%s\n", token);

    return 0;

}
