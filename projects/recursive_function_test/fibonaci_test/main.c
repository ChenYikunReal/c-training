#include <stdio.h>

int fibonaci(int i) {
   if(i == 1) {
      return 1;
   }
   if(i == 2) {
      return 1;
   }
   return fibonaci(i-1) + fibonaci(i-2);
}

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
       printf("%d\t\n", fibonaci(i));
    }
    return 0;
}
