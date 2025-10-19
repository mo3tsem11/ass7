#include <stdio.h>

int main() {
    float num1, num2, sum;
    int intsum;

    printf("Enter two floating point numbers: ");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2;
    intsum = (int)sum; // truncate decimal part

    printf("Sum = %.2f\n", sum);
    printf("Integer floor of the sum = %d\n", intsum);

    return 0;
}
