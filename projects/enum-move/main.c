#include <stdio.h>

enum direction {up, down, forward, back, left, right};

void move(enum direction command, int *px, int *py, int *pz);

int main() {
    enum direction commands[] = {forward, right, down, forward, down, right, forward, up, right, left, left, back, left};
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < 13; i++) {
        move(commands[i], &x, &y, &z);
        printf("Position[%d] = (%d, %d, %d)\n", i+1, x, y, z);
    }
    return 0;
}

void move(enum direction command, int *px, int *py, int *pz) {
    switch (command) {
        case left:
            (*px)--;
            break;
        case right:
            (*px)++;
            break;
        case forward:
            (*py)++;
            break;
        case back:
            (*py)--;
            break;
        case up:
            (*pz)++;
            break;
        case down:
            (*pz)--;
            break;
    }
}
