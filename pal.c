#include <stdio.h>

void pal() {
    int num, originalNum, remainder, reversedNum = 0;

    printf("Enter an integer to check the Palindrome of a number: ");
    scanf("%d", &num);
    
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Compare original with reversed
    if (originalNum == reversedNum)
        printf("%d is a palindrome number.\n", originalNum);
    else
        printf("%d is not a palindrome number.\n", originalNum);

   // return 0;
}   
