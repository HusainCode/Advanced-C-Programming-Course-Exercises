/*
 * Challenge 1: Flexible Array Members
 * Author: Husain Alshaikhahmed
 * Description:
 * 1- Write a program that uses a flexible array member inside a structure.
  2- Create a structure named MyArray that has a length member and a flexible
 array member named array.
3- Read in from the user the size of the array at
runtime.
4- Allocate memory for the structure based on this size read in from
the user.
5- Set the length member and fill the array with some dummy data.
6-Print the array elements.
 * Date:
 */

/*

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
void fillArrayWithRandomNumbers(int *arr, size_t size);
struct myArray {
    int length;
    int arry[];
}; // end of struct

int main() {

    // Avoid unassigned variable to prevent undefined behaviors.
    size_t size = 0;
    struct myArray *myInstance;

    printf("Enter array size: ");
    scanf("%d", &size);

    myInstance = malloc(sizeof(struct myArray) + size * sizeof(int));



    if (myInstance == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    myInstance->length = size;

    // Fill the array with random numbers
    fillArrayWithRandomNumbers(myInstance->arry, size);

    // Print the array elements
    printf("Array elements: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", myInstance->arry[i]);
    }
    printf("\n");

    free(myInstance); // free the allocated memory

    return 0;
}

// Fills the given array with random numbers
void fillArrayWithRandomNumbers(int *arr, size_t size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10; // Assign a random number (0-9) to each array element
    }
}