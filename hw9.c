#include <stdio.h>

int convert(int ch) {
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

int main(void) {
    char str[100];
    printf("Input> ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = convert(str[i]);
    }

    printf("Output> %s", str);
    return 0;
}