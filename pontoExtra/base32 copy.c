#include <stdio.h>
#include <string.h>

void printBinary(const char *str) {
    int length = strlen(str);
    char bn = 0;
    int count = 5;

    for (int i = 0; i < length; i++) {
        char character = str[i];
        for (int j = 7; j >= 0; j--) {
            count--;
            int bit = (character >> j) & 1;
            bit = bit << count;
            bn = bit | bn;
            if (count == 0) {
                if (bn < 26) {
                    printf("%c", bn + 65);
                } else {
                    printf("%c", bn + 24);
                }
                count = 5;
                bn = 0;
            }
        }
    }

    if (count != 5) {
        if (bn < 26) {
            printf("%c", bn + 65);
        } else {
            printf("%c", bn + 24);
        }
    }

    int missingEquals = (((5 - (length % 5)) * 8) % 40) / 5;
    for (int i = 0; i < missingEquals; i++) {
        printf("=");
    }
    printf("\n");
}

int main() {
    char input[100];
    printf("Digite uma string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] =
        '\0'; // Remove a quebra de linha do final da string

    printf("\n");

    printBinary(input);

    return 0;
}
