#include <stdio.h>
#include <stdbool.h>

int main() {
    int todays ;

    scanf ("%d",&todays);

    if (todays == 6) {
        bool isboatabale = true;
       // bool isboatabale = false;

        if (isboatabale) {
            printf("Going to tangorhoure\n");
        } else {
            printf("Going to senemarten\n");
        }

    } else if (todays == 4) {
                bool isshiptabale = true;

        //bool isshiptabale = false;

        if (isshiptabale) {
            printf("Going to coxsbazar\n");
        } else {
            printf("Going to kuyakata\n");
        }

    } else {
        printf("Stay home\n");
    }

    return 0;
}
