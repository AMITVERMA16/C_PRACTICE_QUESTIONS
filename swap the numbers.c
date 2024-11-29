#include <stdio.h>
int main() {
    int myarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = 9; // Corrected variable name
    int temp = 0;   // Temporary variable for swapping

    // Reverse the array
    for (int i = 0; i < (length / 2); i++) {
        temp = myarray[i];
        myarray[i] = myarray[length - i - 1];
        myarray[length - i - 1] = temp;
    }

    // Print the reversed array
    for (int i = 0; i < length; i++) {
        printf("myarray[%d] = %d\n", i, myarray[i]);
    }

    return 0;
}
