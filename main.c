#include <stdio.h>

int main() {
    int a, b, c;

    int *p_a = &a;
    int *p_b = &b;
    int *p_c = &c;

    if (scanf("%d %d %d", p_a, p_b, p_c) != 3) {
        return 1;
    } 

    int soucet = *p_a + *p_b + *p_c;
    printf("Soucet: %d\n", soucet);

    int max = *p_a;
    if (*p_b > max) {
        max = *p_b;
    }

    if (*p_c > max) {
        max = *p_c;
    }

    printf("Maximum: %d\n", max);

    if (soucet % 2 == 0) {
        printf("Soucet je sudy\n");
    } else {
        printf("Soucet je lichz\n");
    }

    return 0;
}
