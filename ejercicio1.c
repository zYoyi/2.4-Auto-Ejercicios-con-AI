#include <stdio.h>  // Including the standard input-output header file for functions like printf.

/**
 * Calculates the sum of two numbers.
 *
 * @param a: The first number.
 * @param b: The second number.
 * @return: The sum of a and b.
 */
int sum(int a, int b) {
    return a + b;  // Returning the sum of a and b.
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int result = sum(num1, num2);  // Calling the sum function with num1 and num2 as arguments.
    printf("The sum of %d and %d is %d\n", num1, num2, result);  // Printing the result.
    return 0;
}
