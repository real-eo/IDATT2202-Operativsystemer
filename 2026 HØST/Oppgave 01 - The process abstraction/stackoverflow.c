#include <stdio.h>
#include <stdlib.h>

void func() {
    char b = 'b';
    long localvar = 2;
    printf("func() with localvar @ 0x%08x\n", &localvar);
    printf("func() frame address @ 0x%08x\n", __builtin_frame_address(0));
    localvar++;
    b = 'a';
    func();
}

int main() {
    printf("main() frame address @ 0x%08x\n", __builtin_frame_address(0));
    func();
    exit(0);
}
