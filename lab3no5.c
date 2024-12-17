#include <stdio.h>

int main(void) {
    int month;
    scanf("%d", &month);

    if (month == 12 || month == 1 || month == 2) {
        printf("Winter");
    } else if (month == 3 || month == 4 || month == 5) {
        printf("Spring");
    } else if (month == 6 || month == 7 || month == 8) {
        printf("Summer");
        if (month == 6) {
            printf("\n6 months to Winter");
        } else if (month == 7) {
            printf("\n 5 months to Winter");
        } else if (month == 8) {
            printf("\n4 months to Winter");
        }
    } else if (month == 9 || month == 10 || month == 11) {
        printf("Autumn");
    } else {
        printf("No season");
    }

    return 0;
}

