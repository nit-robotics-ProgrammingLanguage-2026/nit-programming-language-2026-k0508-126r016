#include <stdio.h>

int main(void)
{
    int n;
    int found = 0;

    scanf("%d", &n);

    if (n < 0) {
        printf("Error");
    } else if (n == 0) {
        printf("No");
    } else {
        if (n % 3 == 0) {
            printf("Up");
            found = 1;
        }
        if (n % 5 == 0) {
            printf("Go");
            found = 1;
        }
        if (n % 7 == 0) {
            printf("!!");
            found = 1;
        }
        if (found == 0) {
            printf("No");
        }
    }

    return 0;
}