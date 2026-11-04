#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char result[16] = "";

    scanf("%d", &n);

    if (n < 0) {
        printf("Error");
        return 0;
    }

    if (n == 0) {
        printf("No");
        return 0;
    }

    if (n % 3 == 0) strcat(result, "Up");
    if (n % 5 == 0) strcat(result, "Go");
    if (n % 7 == 0) strcat(result, "!!");

    if (strlen(result) == 0) {
        printf("No");
    } else {
        printf("%s", result);
    }

    return 0;
}