//string tokenization using loops

#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "There are different types of programming languages like: C, Java, Python", *token;

    token = strtok(str, ", :");
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ", :");
    }

    return 0;

}
