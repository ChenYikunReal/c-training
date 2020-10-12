#include <stdio.h>

int main() {
    void* vptr;
    char* cptr = "Oh!GG!";
    vptr = cptr;
    // VC++会判错但GNU不认为是错的(默认为char*)
    vptr++;
    printf("%s\n", vptr);
    return 0;
}
