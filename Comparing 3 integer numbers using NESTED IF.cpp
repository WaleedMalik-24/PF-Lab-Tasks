#include<stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number: ");
    scanf("%d", &n3);
    if (n1 == n2) {
        if (n2 == n3) {
            printf("All values are equal\n");
        } else {
            printf("They all are not equal\n");
        }
    } else {
        printf("They all are not equal\n");
    }

    return 0;
}

