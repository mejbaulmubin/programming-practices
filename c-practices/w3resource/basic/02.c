#include <stdio.h>

int main() {
    printf("Compiler version: %s\n", __VERSION__);
    printf("C standard version: %ld\n", __STDC_VERSION__);
}