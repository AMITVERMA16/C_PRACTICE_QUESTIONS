#include <stdio.h>
#include <string.h> // For strlen (strlen calculates the total number of characters in the string (excluding the null terminator \0)
#include <stdbool.h> // For bool type

bool is_palindrome(char string[]);

int main(void) {
    char string1[] = "not a palindrome?";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    if (is_palindrome(string1))
        printf("%s - is a palindrome\n", string1);
    else
        printf("%s - is not a palindrome\n", string1);

    if (is_palindrome(string2))
        printf("%s - is a palindrome\n", string2);
    else
        printf("%s - is not a palindrome\n", string2);

    if (is_palindrome(string3))
        printf("%s - is a palindrome\n", string3);
    else
        printf("%s - is not a palindrome\n", string3);

    return 0;
}

bool is_palindrome(char string[]) {
    int len = strlen(string);
    int middle = len / 2;

    for (int i = 0; i < middle; i++) {
        if (string[i] != string[len - i - 1])
            return false;
    }

    return true;
}