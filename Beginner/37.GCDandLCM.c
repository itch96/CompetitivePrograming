#include <stdio.h>
 
int gcd(int a, int b) {
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(a%b, b);
    if(b>a) return gcd(b%a, a);
    if(a==b) return a;
}
 
int main(void) {
    int t, g, a, b;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &a, &b);
        g=gcd(a, b);
        printf("%d %d\n", g, a*b/g);
    }
    return 0;
}   