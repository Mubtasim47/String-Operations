//compare two strings

#include <stdio.h>
#include <stdbool.h>
int main() {
 char str1[50], str2[50];
 printf("Enter first string:\n");
 gets(str1);
 printf("Enter second string:\n");
 gets(str2);
 int len1, len2;
 for (len1 = 0; str1[len1] != '\0' ; len1++);
 for (len2 = 0; str1[len2] != '\0' ; len2++);
 int i = 0, j = 0;
 bool check;
 if(len1 != len2)
 check = false;
 else
 while(i < len1) {
 check = (str1[i++] == str2[j++]) ? true : false;
 if(!check)
 break;
 }
 printf(check == true ? "Same" : "Not same");
 return 0;
  
}
