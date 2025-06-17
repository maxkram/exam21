Three integers (A, B and C) arrive via the standard input stream-stdin, it is necessary to output one to the standart output stream-stdout if C is strictly between A and B, otherwise output zero. There should be no newline break at the end of the response. Check the validity of the entered data. In case of any error, output "n/a".

Note: The conditional operator if can only be used for error handling.

Examples
Input	Output
0 9 4	1
0 1 4	0
0 0 0	0

#include <stdio.h>

int main() {
    int A, B, C;
    
    // Check if exactly three integers are read successfully
    if (scanf("%d %d %d", &A, &B, &C) != 3) {
        printf("n/a");
        return 0;
    }
    
    // Check if C is strictly between A and B using ternary-like logic
    int result = (A < C && C < B) || (B < C && C < A) ? 1 : 0;
    
    // Output result without newline
    printf("%d", result);
    
    return 0;
}