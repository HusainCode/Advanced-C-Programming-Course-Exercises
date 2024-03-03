/*
 * Challenge 1: Flexible Array Members
 * Author: Husain Alshaikhahmed
 * Description: This program uses a structure with a flexible array member to dynamically handle variable sized arrays.
 * It reads the array size from the user, allocates memory , then fills the array with random numbers, and prints the array.
 * Date:3/2/2024
 */

/*
1- Write a program that uses a flexible array member inside a structure.
2- Create a structure named MyArray that has a length member and a flexible
array member named array.
3- Read in from the user the size of the array at
runtime.
4- Allocate memory for the structure based on this size read in from
the user.
5- Set the length member and fill the array with some dummy data.
6-Print the array elements.
  */

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h> // For rand()
#include <string.h>
#include <time.h> // For seeding the random number generator

/*
*A flexible array member can be declared only as the last member of a struct.
*Each struct can contain at most one flexible array member.
*A flexible array cannot be the only member of a struct.
  .The struct must also have one or more fixed members.
*Any struct containing a flexible array member can't be a member of another
struct.
*A struct with a flexible array member can't be statically initialized.
  .It must be allocated dynamically.
  .You can't fix the size of the flexible array member at compile time.


*A struct with a flexible array member reduces the number of allocations for it
by 1/2.
.Instead of two allocations for one struct object, you need just 1.
.You save the storage for one additional pointer.
*/
struct myArray {
    int length;
    int array[]; // Flexible array member
};             // end of struct

void fillArrayWithRandomNumbers(int *arr, size_t size);
void printArrayElements();

int main() {
    // Avoid unassigned variable to prevent undefined behaviors.
    size_t size = 0;
    srand(time(NULL));

    printf("Enter array size: ");
    scanf("%zu", &size);

    // Allocate memory for the structure and the array
    struct myArray *myInstance =
            malloc(sizeof(struct myArray) + size * sizeof(int));
    if (myInstance == NULL) {
        return 1; // Memory allocation failed
    }

    myInstance->length = size;
    fillArrayWithRandomNumbers(myInstance->array,
                               myInstance->length); // Pass the array and size

    printArrayElements(myInstance->array, myInstance->length);

    free(myInstance); // Free the allocated memory

    return 0;
}

void fillArrayWithRandomNumbers(int *arr, size_t size) {
    for (size_t i = 0; i < size; i++) {
        arr[i] = rand() % 10; // Assign a random number (0-9) to each array element
    }
}

void printArrayElements(int *arr, size_t size) {
    // Print the array elements
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}