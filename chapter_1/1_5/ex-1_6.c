#include <stdio.h>

int main () {
   int c;
 
   printf("Enter character: ");
   c = getchar();
 
   printf("%d", c != EOF);

   return 0;
}