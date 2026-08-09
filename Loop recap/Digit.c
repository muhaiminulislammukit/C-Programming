#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int rev = 0;
        while(n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;  // নতুন সংখ্যা তৈরি হচ্ছে
            n = n / 10;
        }

        printf("%d\n", rev);
    }

    return 0;
}