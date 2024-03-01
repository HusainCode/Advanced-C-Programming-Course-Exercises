/**
 * Challenge 1: Variable Length Arrays
 * Author: Husain Alshaikhahmed
 * Description: This program initializes an array with random numbers then,
 * calculates the total sum of all numbers in the array, and prints the array elements followed by the sum.
 * The size of the array is determined by user input.
 * Date: 2/22/2024
 */

#include <stdio.h>
#include <stdlib.h> // For rand()
#include <time.h> // For seeding the random number generator

// Function declarations
void fillArrayWithRandomNumbers(int *arr, size_t size);
int calculateSumOfArray(int arr[], size_t size);
void printArrayWithSum(int arr[], size_t size, int sum);

int main() {
    srand(time(NULL)); // Initialize the random seed based on the current time

    size_t size;
    printf("Enter the array size: ");
    scanf("%zu", &size);

    int arr[size];
    fillArrayWithRandomNumbers(arr, size);

    int sumResult = calculateSumOfArray(arr, size);
    printArrayWithSum(arr, size, sumResult);

    return 0;
}

// Fills the given array with random numbers
void fillArrayWithRandomNumbers(int *arr, size_t size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10; // Assign a random number (0-9) to each array element
    }
}

// Calculates and returns the sum of the array elements
int calculateSumOfArray(int arr[], size_t size) {
    int sum = 0; // Initialize sum to zero
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each array element to sum
    }
    return sum;
}

// Prints the array elements followed by the sum
void printArrayWithSum(int arr[], size_t size, int sum) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]); // Print the current element
        if (i < size - 1) {
            printf("+"); // Print a plus sign after all but the last element
        }
    }
    printf(" = %d\n", sum); // After printing all elements, print the equals sign and sum
}
