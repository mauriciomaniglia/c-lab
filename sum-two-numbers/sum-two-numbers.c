#include <stdio.h>

int add(int x, int y);

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);

    printf("The sum is: %d\n", sum);

    return 0;
}

int add(int x, int y) {
    return x + y;
}
