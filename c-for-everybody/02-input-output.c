#include <stdio.h>

int main() {
    char line[256]; // Assuming a maximum line length of 255 characters plus the null terminator

    printf("Enter line\n");
    fgets(line, sizeof(line), stdin); // Reads a line of input including spaces
    // scanf("%[^\n]256s", line); // read until the end of the line.

    printf("Line: %s", line); // Prints the line

    return 0;
}
