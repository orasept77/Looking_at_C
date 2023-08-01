#include <stdio.h>

void concatenator(char *str, const char *substr) {

    while (*str)
        str++;

    while (*substr) {
        *str = *substr;
        substr++;
        str++;
    }

    *str = '\0';
}

int main() {

    char str[100], substr[100];

    printf("Enter the source string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter string to concatenate: ");
    fgets(substr, sizeof(substr), stdin);

    concatenator(str, substr);

    printf("String after concatenation is \"%s\"\n", str);

    return 0;
}
