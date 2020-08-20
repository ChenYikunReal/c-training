#include <stdio.h>

int main() {
    int a = 10;
    LOOP:do {
        if(a == 15) {
            a = a + 1;
            // 跳过此次循环
            goto LOOP;
        }
        printf("%d\n", a);
        a++;
   } while(a < 20);
   return 0;
}
