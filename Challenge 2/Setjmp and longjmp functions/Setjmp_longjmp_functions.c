/*
  * Challenge 2: Setjmp and longjmp functions
  * Author: Husain Alshaikhahmed
  * Disclaimer: Using setjmp and longjmp is generally considered bad
  * practice, similar to goto, because they can lead to hard-to-follow control
  * flows and make the code difficult to understand and maintain. This code
  * demonstrates the use of setjmp and longjmp; however, using this technique is
  * considered a bad practice as it might result in 'spaghetti code'.
 * Description:
   1- Create a function named errorRecover that prints out an error message and then
      uses longjmp to transfer control back to the main function's loop.
   2- The main function should include an infinite loop that uses setjmp at the top of
      the loop before processing.
   3- Add dummy code in your loop that simulates an error (by calling errorRecover) when
      setjmp returns 0.
   Date:
 */

#include <setjmp.h>
#include <stdio.h>

jmp_buf buf;

// Funcation declartion
void errorRecover();

int main() {


  return 0;
}

void errorRecover();