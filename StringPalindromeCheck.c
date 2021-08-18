//check whether a string is palidrome or not

#include <stdio.h>

int main() {

    char str[50];
    
    printf("Enter a string:\n");
    gets(str);
    int len;
    for (len = 0; str[len] != '\0'; len++);
    int i = 0, j = len - 1;
    int flag;
    while(i < j) {
        flag = (str[i++] == str[j--]) ? 1 : 0;
        if(flag == 0)
            break;
    }
    printf("Given string is %s", flag ? "palindrome" : "not palindrome");

    return 0;

}
