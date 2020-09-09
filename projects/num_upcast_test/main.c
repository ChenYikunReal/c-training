#include <stdio.h>

int main() {
   int  i = 17;
   // ASCII码值为99
   char c = 'c';
   int sum;
   // char向上转型，得17+99=116
   sum = i + c;
   printf("Value of sum : %d\n", sum);
}

