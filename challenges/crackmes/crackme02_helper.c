#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 0; argv[1][i] != '\0'; i++) {
        printf("%c", argv[1][i] - 1);
    }
    printf("\n");
    return 0;
}

