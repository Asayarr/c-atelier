#include <stdio.h>

int main(){
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    char min = a;
    if(b < min)
        min = b;
    if(c < min)
        min = c;

    char max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;

    char mid = a + b + c - min - max;

    printf("%c%c%c\n", min, mid, max);

    return 0;
}