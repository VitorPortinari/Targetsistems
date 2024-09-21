#include <stdio.h>

int main()
{
   char string[80];
   int cont_a = 0;
   
   printf("Digite a palavra:\n");
   fgets(string, sizeof(string), stdin);
   for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a' || string[i] == 'A') {
            cont_a++;
        }
   }
   printf("A letra 'A' aparece %d vezes na palavra", cont_a);
    
    return 0;
}

