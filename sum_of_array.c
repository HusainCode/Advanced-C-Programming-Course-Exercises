
// Challenge 1
// This code calculates the total sum of all numbers in an array and prints the result.

#include <stdio.h>
#include <stdlib.h> // For rand()
#include <time.h> // For time()

void fillArrayWithRandomNumbers(int arr, size_t size);

int sumOfArray(int arr[], size_t size);

int main() {
    // Initialize random seed
    srand(time(NULL));
    size_t size;


    int arr[size];

    printf("Enter the array size: ");  // say 5
    scanf("%zu", &size);

    fillArrayWithRandomNumbers(arr,size)

   int result = sumOfArray(arr, size);

   printf("The sum of the array is: %d",size);


    return 0;
}

void fillArrayWithRandomNumbers(int *arr, size_t size){

    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
};

int sumOfArray(int arr[], size_t size) {
    int sum;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    };
    return sum;
};
