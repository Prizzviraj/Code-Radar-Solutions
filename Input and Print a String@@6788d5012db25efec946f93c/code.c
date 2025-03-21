#include <stdio.h>

int main() {
    char word[100]; // Array to store the input string

    // Prompt user for input
    printf("Enter a word: ");
    
    // Taking a single word input
    scanf("%s", word);

    // Printing the input word
    printf("You entered: %s\n", word);

    return 0;
}