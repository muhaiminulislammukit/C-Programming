#include <stdio.h>

int main() {
    int Price = 33;
    // scanf("%d", &Price); // Uncomment to take input from user

    if (Price <= 55) {
        printf("Buy 4 eggs\n");
        printf("Take = %d taka Back\n", 55 - Price);
    } 
    else {
        printf("Buy 2 eggs\n");
    }

    return 0;
}