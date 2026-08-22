#include <stdio.h>

int main(void)
{
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases-- > 0)
    {
        long long multiplication, first, second, third;
        long long known_product;

        scanf("%lld %lld %lld %lld",
              &multiplication, &first, &second, &third);

        if (multiplication == 0)
        {
            printf("0\n");
            continue;
        }

        known_product = first * second * third;

        if (known_product != 0 && multiplication % known_product == 0)
        {
            printf("%lld\n", multiplication / known_product);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
