#include <stdio.h>

int main() {
    char suit; // Use a single char instead of a string
    printf("Please input a character from C-D-H-S: ");
    scanf(" %c", &suit); // Read a single character
    switch (suit) {
        case 'C':
            puts("Clubs");
            break;
        case 'D':
            puts("Diamond");
            break;
        case 'H':
            puts("Hearts");
            break;
        case 'S':
            puts("Shades");
            break;
        default:
            puts("Choose a correct suit!");
    }
    return 0;
}

