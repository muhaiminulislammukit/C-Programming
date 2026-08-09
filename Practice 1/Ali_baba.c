#include <stdio.h>
#include <limits.h>

int main() {
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    int ok = 0;

    // safe combinations
    if(a+b+c == d) ok=1;
    if(a+b-c == d) ok=1;
    if(a-b+c == d) ok=1;
    if(a-b-c == d) ok=1;

    // multiplication only if safe
    if(a > 0 && c > 0 && a <= LLONG_MAX / c) {
        if(a*c+b == d) ok=1;
        if(a*c-b == d) ok=1;
    }
    if(b > 0 && c > 0 && b <= LLONG_MAX / c) {
        if(a+b*c == d) ok=1;
        if(a-b*c == d) ok=1;
    }

    if(ok) printf("YES\n");
    else printf("NO\n");

    return 0;
}