#include <stdio.h>

int main() {
    enum color {
        red=1, green, blue
    };
    enum color favorite_color;
    printf("Choose one color you like best: (1. red, 2. green, 3. blue): \n");
    scanf("%u", &favorite_color);
    switch (favorite_color) {
        case red:
            printf("Oh! Your favorite color is Red!");
            break;
        case green:
            printf("Oh! Your favorite color is Green!");
            break;
        case blue:
            printf("Oh! Your favorite color is Blue!");
            break;
        default:
            printf("Sorry! There is no color you like!");
    }
    return 0;
}
