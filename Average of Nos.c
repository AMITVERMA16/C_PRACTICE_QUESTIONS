#include <stdio.h>


float calculateAverage(int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return (float)sum / size;
}

int main() {
    int n;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);


    if (n <= 0) {
        printf("Error! Number of elements must be positive.\n");
        return 1;
    }

    int numbers[n]; 
   
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

   
    float average = calculateAverage(numbers, n);
    printf("The average of the numbers is: %.2f\n", average);

    return 0;
}
