
#include <stdio.h>
#include <assert.h>

// TODO: Implement the conditionalBitSwap function

/*
Generate a function 'conditionalBitSwap' that takes in 4 arguments:
- 'arr1': an array of char 
- 'arr2': an array of char 
- 'm': a char that represents a char bit mask.
- 'arrLen': a size_t that represents the length of the array.
Returns nothing.

Implementation details:
- the conditionalBitSwap function swaps the bits in the same positions
   of the elements of two arrays, but only if the corresponding bit
   in the mask is set and the bits to be swapped are different.
- the conditionalBitSwap function should not return anything.

Example with 1 element in the arrays:
    arr1 = [0b1010]
    arr2 = [0b0110]
    m = 0b1010

    After calling conditionalBitSwap(arr1, arr2, m), arr1 and arr2 should be:
    arr1 = [0b0010]
    arr2 = [0b1110]
Example with 2 elements in the arrays:
    arr1 = [0b1010, 0b1100]
    arr2 = [0b0110, 0b0011]
    m = 0b1010

    After calling conditionalBitSwap(arr1, arr2, m), arr1 and arr2 should be:
    arr1 = [0b0010, 0b0110]
    arr2 = [0b1110, 0b1001]
Example with 3 elements in the arrays:
    arr1 = [0b1010, 0b1100, 0b1111]
    arr2 = [0b0110, 0b0011, 0b0000]
    m = 0b1010

    After calling conditionalBitSwap(arr1, arr2, m), arr1 and arr2 should be:
    arr1 = [0b0010, 0b0110, 0b1111]
    arr2 = [0b1110, 0b1001, 0b0000]

*/

void conditionalBitSwap(char arr1[], char arr2[], char m, size_t arrLen) {
    // iterate over the arrays
    for (size_t i = 0; i < arrLen; i++) {
        // get the bits to be swapped
        char bitsToSwap = arr1[i] ^ arr2[i];

        // get the bits to be swapped that are different
        char bitsToSwapDiff = bitsToSwap & m;

        // swap the bits
        arr1[i] = arr1[i] ^ bitsToSwapDiff;
        arr2[i] = arr2[i] ^ bitsToSwapDiff;
    }
}

// Implement a test for the 'conditionalBitSwap' function named 'test_conditionalBitSwap'

void test_conditionalBitSwap() {
    char arr1[] = {0b1010, 0b1100};
    char arr2[] = {0b0110, 0b0011};
    char m = 0b1010;

    // calculate the length of the arr1
    int arrLen1 = sizeof(arr1) / sizeof(arr1[0]);

    // calculate the length of the arr2
    int arrLen2 = sizeof(arr2) / sizeof(arr2[0]);

    // assert that the length of the arr1 is equal to the length of the arr2
    assert(arrLen1 == arrLen2);

    // call the conditionalBitSwap function
    conditionalBitSwap(arr1, arr2, m, arrLen1);

    assert(arr1[0] == 0b0010);
    assert(arr2[0] == 0b1110);

    assert(arr1[1] == 0b0110);
    assert(arr2[1] == 0b1001);
}


int main() {
    // call the test function
    test_conditionalBitSwap();

    printf("All tests pass\n");

    return 0;
}









