/*
 * Challenge 1: Flexible Array Members
 * Author: Husain Alshaikhahmed
 * Description:
 * Date:
 */

/*
1- Write a program that uses a flexible array member inside a structure.
2- Create a structure named MyArray that has a length member and a flexible
array member named array.
3- Read in from the user the size of the array at
runtime. 4- Allocate memory for the structure based on this size read in from
the user. 5- Set the length member and fill the array with some dummy data. 6-
Print the array elements.
  */

#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct myArray {
    int length;
    int arry[]; // the array must be the last member
};

void *malloc(size_t size);

int main() {

    struct myArray myInstance;


    printf("Enter the array size: ");
    scanf("%d", &myInstance.length);


    return 0;
}
