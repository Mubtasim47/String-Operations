//concatenation of two strings

#include <stdio.h>
int main() {
 char str[50], aStr[50];

 printf("Enter a string:\n");
 gets(str);
 printf("Enter another string:\n");
 gets(aStr);

 int len;
 for (len = 0; str[len] != '\0' ; len++);
 str[len++] = ' ';
 str[len] = '\0';
 int i = 0;
 while(aStr[i] != '\0')
 str[len++] = aStr[i++];
 str[len] = '\0';
 printf("After Concatenation with space:\n");
 puts(str);
 return 0;
    
}
