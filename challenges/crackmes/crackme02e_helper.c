#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <offset> <text> ...\n", argv[0]);
        return 1;
    }
    int offset = atoi(argv[1]);
    for (int j = 2; j < argc; j++) {
        for (int i = 0; argv[j][i] != '\0'; i++) {
            printf("%c", argv[j][i] + offset);
        }
        printf("\n");
    }
    return 0;
}

